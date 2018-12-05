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
int toptipo = 5;
// VARIABLES GLOBALES

%}
/*DEFINICION DE TU UNION PARA MANEJAR TIPOS*/
%union{
    char *numero; // representa un numero
    char *id;
    int line;
    struct {
      char codigo[250];
    }codigo;
    struct {
      int type;
    }type;
    struct {
      char True[50];
      char False[50];
      char codigo[50];
      int direccion;
    }condicionval;
    struct {
      char Next[50];
      int tipo;
      char codigo[100];
    }sentenciasval;
    struct{
      int type;
      char codigo[100];
      int direccion;
    }exprval;

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
%token <id> ID
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

%type<type> tipo arreglo lista
%type<exprval> expresion
%type<codigo> argumentos lista_argumentos
%type<condicionval> condicion
%type<sentenciasval> sentencia sentencias
%start programa

%%
/*GRAMATICA DEL LENGUAJE*/
programa : {
  direccion = 0;
  init();} declaraciones {
    printf("Aquí comienza el analicis de funciones\n");
  } funciones ;
declaraciones : tipo lista  PYC declaraciones  | {printf("Fin De declaraciones\n");};
tipo : INT { $$.type = 0; tipo = 0;} | FLOAT  {$$.type = 1; tipo = 1;}| DOUBLE  {$$.type = 2; tipo = 2;}
      | CHAR {$$.type = 3; tipo = 3;} | VOID {$$.type = 4; tipo = 4;} /*| STRUCT LKEY declaraciones RKEY {$$= 5;} ;*/
lista : lista COMA ID arreglo  {
 printf("Añadiendo Simbolo: %s\n", $3);
 //$$.type = $4.type;
 Lexema l;
 TablaTipos * t; 
 t = topTipos(tipos); 
 TablaSimbolos * tablasim = crearTablaSimbolos();
 tablasim = topSimbolos(simbolos);
 char * tempid = malloc(sizeof(char*));
 strcpy(tempid,$3);
 l = crearLexema($4.type,tempid,direccion,variable,NULL); // Nuevo Lexema
 llavesimbolos = addSimbolo(llavesimbolos,l,tablasim); // Añadimos simbolo a la tabla de simbolos
 free(yylval.id);
 direccion = direccion + t[$4.type].tipo.dim;
} | ID arreglo {
 printf("Añadiendo Simbolo : %s\n",$1);
 //$$.type = $2.type;
 Lexema l;
 TablaTipos * t; 
 t = topTipos(tipos);
 TablaSimbolos * tablasim = crearTablaSimbolos();
 tablasim = topSimbolos(simbolos); 
 //printf("%i\n",t[tipo].tipo.tipo);
 char * tempid = malloc(sizeof(char*));
 strcpy(tempid,$1);
 l = crearLexema($2.type,tempid,direccion,variable,NULL); // Nuevo Lexema
 llavesimbolos = addSimbolo(llavesimbolos,l,tablasim); // Añadimos simbolo a la tabla de simbolos
 free(yylval.id);
 direccion = direccion + t[$2.type].tipo.dim;
};
arreglo : LCOR NUMERO RCOR arreglo {
  int dimarr ;
  TablaTipos * t = topTipos(tipos);
  int n = atoi($2);
  dimarr = t[tipo].tipo.dim * n;
  Tipo nuevoarreglo;
  //printf("%d %d \n\n",t[toptipo - 1 ].tipo.tipo_base,tipo);
  if( t[toptipo - 1 ].tipo.tipo_base == tipo && t[toptipo - 1 ].tipo.dim == dimarr){
    toptipo = toptipo - 1;
  }else{
    nuevoarreglo = crearTipo(toptipo,toptipo,dimarr,t[tipo].tipo.tipo);
    addTipo(toptipo,nuevoarreglo,topTipos(tipos));
  }
  toptipo += 1;
  $$.type = toptipo - 1 ;
} | {$$.type = tipo;} ;
funciones : FUNC tipo ID {
  crearSalidaIntermedia();
  //Buscamos en la tabla de simbolos
  char * tempid = malloc(sizeof(char*));
  strcpy(tempid,$3);
  int existe = 0;
  TablaSimbolos * last = topSimbolos(simbolos);
  existe = existeID(tempid,last);
  if(existe == 0){
    // Se crea una tabla de simbolos;
    reskey = llavesimbolos;
    llavesimbolos = 0;
    TablaSimbolos * FTS = crearTablaSimbolos();
    pushSimbolo(&simbolos,FTS);
    //escribirCodigo(tempid,":","","");
    newLabel();
    pushNext(&nextpila,actualLabel);
    escribirCodigo(tempid,"","",actualLabel);

  }else{
    yyerror("ID Duplicado, se necesita cambiar el identificador de la funcion");
    exit(-1);
  }
} LPAR argumentos RPAR LKEY declaraciones sentencias RKEY {
  // Salimos de la tabla de simbolos de la funcion :3
  popSimbolos(&simbolos);} funciones | { printf("Exito!\n");};
argumentos : lista_argumentos { strcpy($$.codigo,$1.codigo);} | {}  ;
lista_argumentos : lista_argumentos COMA tipo ID parte_arreglo | tipo ID parte_arreglo {
  TablaSimbolos * t = crearTablaSimbolos();
};
parte_arreglo : LCOR RCOR parte_arreglo | ;
sentencias : sentencia sentencias { 
  strcpy($$.Next,$2.Next);} | sentencia;
sentencia : IF LPAR condicion {
  newLabel();
  strcpy($3.True,actualLabel);
  pushTrue(&truepila,actualLabel);
  } RPAR sentencia {
    char c[25];
    strcpy(c,$3.codigo);
  } %prec IFX
	| IF LPAR condicion {
  newLabel();
  strcpy($3.True,actualLabel);
  pushTrue(&truepila,actualLabel);
  } RPAR sentencia ELSE  sentencia
	| WHILE LPAR condicion RPAR sentencia
	| DO sentencia WHILE LPAR condicion RPAR PYC
	| FOR LPAR sentencia  PYC condicion PYC sentencia RPAR sentencia
	| parte_izq ASIG expresion PYC
	| RETURN expresion PYC {
    char c[100] ="";
    char ds[4];
    strcat(c,"return ");
    sprintf(ds, "%d", $2.direccion);
    strcat(c,ds); 
    strcat(c,"goto ");
    strcat(c,actualLabel);
    strcpy($$.codigo,c);
    }
	| RETURN PYC { char c[50] = "return goto"; strcat(c,popNext(&nextpila)); strcpy($$.codigo,c);}
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
condicion : condicion OR condicion 
  | condicion AND condicion 
  | NEG condicion 
  | expresion rel expresion 
  | LPAR condicion RPAR 
  | TRUE {
  char temp[10] = "goto ";  
  newLabel();
  pushTrue(&truepila,actualLabel);
  strcat(temp,actualLabel);
  strcpy($$.codigo,temp);
  } | FALSE { 
    char temp[10] = "goto ";
    newLabel();
    pushFalse(&falsepila,actualLabel);
    strcat(temp,actualLabel);
    strcpy($$.codigo,temp);
  } ;
parametros : | lista_param ;
lista_param : lista_param COMA expresion | expresion ;
rel: GT | LT | GE | LE | DISTINTO| IGUAL;

%%
void yyerror(char *s) {
	printf("Error: %s  %d\n ",s,yylval.line);
}

void init(){
  crearPilaTablaTipos(); //Crea la Pila De Tipos
  crearPilaTablaSimbolos(); //Crea la Pila de Simbolos
}
int existeID(char* id, TablaSimbolos* t){
  int resultado = 0;
  for(int i = 0; i < llavesimbolos;i++){
    if(strcmp(id,t[i].lexema.tokens) == 0){
      //printf("omg ya existe\n");
      resultado = 1;
    }
    //printf("%s ==? %s\n",id,t[i].lexema.tokens);
  }
  return resultado;
}