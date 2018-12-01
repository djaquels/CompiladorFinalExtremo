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
                           Rey de Oro Blanco
                           Uno de Tantos Apodos
                           Controló el Mercado
                           El lo hizo a Su Modo
                           -Aerolineas Carrillo- T3CER Elemento (FT. Gerardo Ortiz)


*/
%{
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "tablaTipos.h"
#include "tablaSimbolos.h"
#include "Pilas.h"

// BISON NECESITA SABER DE ESTAS FUNCIONES
extern int yylex();
extern int yyparse();
extern FILE *yyin;
void yyerror(char *s);
void init();
extern int yylex();
extern int yylineno();
int tipo;
int direccion = 0;
int llavesimbolos = 0;
// VARIABLES GLOBALES

%}
/*DEFINICION DE TU UNION PARA MANEJAR TIPOS*/
%union{
    struct {
      char* val;
    }numero;
    char *id;
    int type;  
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
programa : {init();} declaraciones funciones ;
declaraciones : tipo lista  PYC declaraciones  | {printf("Fin Declaraciones\n");} ;
tipo : INT { tipo = 0;} | FLOAT  {tipo = 1;}| DOUBLE  {tipo = 2;}| CHAR {tipo = 3;} | VOID {tipo = 4;} /*| STRUCT LKEY declaraciones RKEY {$$= 5;} ;*/
lista : lista COMA ID arreglo  | ID arreglo {
 Lexema l;
 TablaTipos * t; 
 t = topTipos(tipos);
  
 l = crearLexema(tipo,yyval.id,direccion,variable,NULL); // Nuevo Lexema
 llavesimbolos = addSimbolo(llavesimbolos,l,tablasim_global); // Añadimos simbolo a la tabla de simbolos
};
arreglo : LCOR NUMERO RCOR arreglo | {$$ = tipo;} ;
funciones : FUNC tipo ID LPAR argumentos RPAR LKEY declaraciones sentencias RKEY funciones | {};
argumentos : lista_argumentos | ;
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
	printf("Error: %s  %d\n ",s,yylineno);
}

void init(){
  crearPilaTablaTipos();
  crearPilaTablaSimbolos();
}
