/* Gramatica Del Compilador - Para Bison o YACC!

                              __
                            .d$$b
                          .' TO$;\
                         /  : TP._;
                        / _.;  :Tb|
                       /   /   ;j$j
                   _.-"       d$$$$
                 .' ..       d$$$$;
                /  /P'      d$$$$P. |\
               /   "      .d$$$P' |\^"l
             .'           `T$P^"""""  :
         ._.'      _.'                ;
      `-.-".-'-' ._.       _.-"    .-"
    `.-" _____  ._              .-"
   -(.g$$$$$$$b.              .'
     ""^^T$$$P^)            .(:
       _/  -"  /.'         /:/;
    ._.'-'`-'  ")/         /;/;
 `-.-"..--""   " /         /  ;
.-" ..--""        -'          :
..--""--.-"         (\      .-(\
  ..--""              `-\(\/;`
    _.                      :
                            ;`-
                           :\
                           ;
*/
%{
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "tablaTipos.h"
#include "tablaSimbolos.h"
#include "Pilas.h"
#include "mipsCode.h"
// BISON NECESITA SABER DE ESTAS FUNCIONES
extern int yylex();
extern int yyparse();
extern FILE *yyin;
void yyerror(char *s);
void init();
int existeID(char*id,TablaSimbolos *t);//Verifica si un id ya existe en la Tabla de Simbolos
extern int yylex();
extern int yylineno();
int tipo;
int direccion = 0;
int llavesimbolos = 0;
int reskey;
// VARIABLES GLOBALES

%}
/*DEFINICION DE TU UNION PARA MANEJAR TIPOS*/
%union{
    int numero;
    float numerof;
    char *id;
    int type;  
    int line;
}

/*DEFINICION DE TIPOS*/
/*%token <entero> INT
%token <flotante> FLOAT
%token <dobledecimal> DOUBLE
%token <caracter> CHAR
%token <cadena> CADENA
%token <sintipo> VOID
%token <estructura> STRUCT*/
%token INT FLOAT DOUBLE CHAR VOID STRUCT
%token IF DO WHILE FOR SWICH CASE BREAK DEFAULT ELSE RETURN PRINT
%token COMA PYC DP PTO
%token<id> ID
%token FUNC
%token CADENA CARACTER
%token<numero> NUMERO
%token TRUE FALSE

%right ASIG
%right NEG
%left OR
%left AND
%left IGUAL DISTINTO
%left GT LT LE GE
%left MAS MENOS
%left MUL DIV MOD
%nonassoc LPAR RPAR RKEY LKEY LCOR RCOR
%nonassoc IFX
%nonassoc ELSE

%type<type> tipo arreglo
%start programa

%%
/*GRAMATICA DEL LENGUAJE*/
programa : {
  direccion = 0;
  init();} declaraciones {
    printf("Aquí comienza el analicis de funciones\n");
  } funciones ;
declaraciones : tipo lista  PYC declaraciones  | {printf("Fin De declaraciones\n");};
tipo : INT { tipo = 0;} | FLOAT  {tipo = 1;}| DOUBLE  {tipo = 2;}| CHAR {tipo = 3;} | VOID {tipo = 4;} /*| STRUCT LKEY declaraciones RKEY {$$= 5;} ;*/
lista : lista COMA ID arreglo  {
 Lexema l;
 TablaTipos * t; 
 t = topTipos(tipos); 
 TablaSimbolos * tablasim = crearTablaSimbolos();
 tablasim = topSimbolos(simbolos);
 char * tempid = malloc(sizeof(char*));
 strcpy(tempid,yyval.id);
 l = crearLexema(tipo,tempid,direccion,variable,NULL); // Nuevo Lexema
 llavesimbolos = addSimbolo(llavesimbolos,l,tablasim); // Añadimos simbolo a la tabla de simbolos
 free(yyval.id);
 direccion = direccion + t[tipo].tipo.dim;
} | ID arreglo {
 Lexema l;
 TablaTipos * t; 
 t = topTipos(tipos);
 TablaSimbolos * tablasim = crearTablaSimbolos();
 tablasim = topSimbolos(simbolos); 
 //printf("%i\n",t[tipo].tipo.tipo);
 char * tempid = malloc(sizeof(char*));
 strcpy(tempid,yyval.id);
 l = crearLexema(tipo,tempid,direccion,variable,NULL); // Nuevo Lexema
 llavesimbolos = addSimbolo(llavesimbolos,l,tablasim); // Añadimos simbolo a la tabla de simbolos
 free(yyval.id);
 direccion = direccion + t[tipo].tipo.dim;
};
arreglo : LCOR NUMERO RCOR arreglo {
 printf("o.o %d\n",yyval.numero);
} | {$$ = tipo;} ;
funciones : FUNC tipo ID {
  crearSalidaIntermedia();
  //Buscamos en la tabla de simbolos
  char * tempid = malloc(sizeof(char*));
  strcpy(tempid,yyval.id);
  int existe = 0;
  TablaSimbolos * last = topSimbolos(simbolos);
  existe = existeID(tempid,last);
  if(existe == 0){
    // Se crea una tabla de simbolos;
    reskey = llavesimbolos;
    llavesimbolos = 0;
    TablaSimbolos * FTS = crearTablaSimbolos();
    pushSimbolo(&simbolos,FTS);
    escribirCodigo("label","","",tempid);
  }else{
    yyerror("ID Duplicado, se necesita cambiar el identificador de la funcion");
    exit(-1);
  }
} LPAR argumentos RPAR LKEY declaraciones sentencias RKEY {
  popSimbolos(&simbolos);} funciones | {};
argumentos : lista_argumentos |  ;
lista_argumentos : lista_argumentos COMA tipo ID parte_arreglo | tipo ID parte_arreglo;
parte_arreglo : LCOR RCOR parte_arreglo | ;
sentencias : sentencia sentencias | sentencia;
sentencia : IF LPAR condicion RPAR sentencia %prec IFX
	| IF LPAR condicion RPAR sentencia ELSE  sentencia
	| WHILE LPAR condicion RPAR sentencia
	| DO sentencia WHILE LPAR condicion RPAR PYC
	| FOR LPAR sentencia  PYC condicion PYC sentencia RPAR sentencia
	| parte_izq ASIG expresion PYC
	| RETURN expresion PYC
	| RETURN PYC
	| LKEY sentencias RKEY
	| SWICH LPAR expresion RPAR LKEY casos predeterminado RKEY
	| BREAK PYC
	| PRINT expresion PYC ;
casos : CASE NUMERO DP  sentencias casos | ;
predeterminado : DEFAULT DP sentencias | ;
parte_izq : ID | var_arreglo | ID PTO ID | ;
var_arreglo : ID LCOR expresion RCOR | var_arreglo LCOR expresion RCOR  ;
expresion : expresion MAS expresion 
  | expresion MENOS expresion 
  | expresion MUL expresion 
  | expresion DIV expresion 
  | expresion MOD expresion 
  | LPAR expresion RPAR 
  | var_arreglo
  | CADENA | NUMERO | CARACTER | ID LPAR parametros RPAR ;
condicion : condicion OR condicion | condicion AND condicion 
  | NEG condicion | expresion rel expresion | LPAR condicion RPAR | TRUE | FALSE;
parametros : | lista_param ;
lista_param : lista_param COMA expresion | expresion ;
rel: GT | LT | GE | LE | DISTINTO| IGUAL;

%%
void yyerror(char *s) {
	printf("Error: %s  %d\n ",s,yylval.line);
}

void init(){
  crearPilaTablaTipos();
  crearPilaTablaSimbolos();
}
int existeID(char* id, TablaSimbolos* t){
  int resultado = 0;
  for(int i = 0; i < llavesimbolos;i++){
    if(strcmp(id,t[i].lexema.tokens) == 0){
      //printf("omg ya existe\n");
      resultado = 1;
    }
    //printf("%s ==? %s\n",tempid,t[i].lexema.tokens);
  }
  return resultado;
}