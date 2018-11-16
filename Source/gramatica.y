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
// BISON NECESITA SABER DE ESTAS FUNCIONES
extern int yylex();
extern int yyparse();
extern FILE *yyin;
void yyerror(const char *s);
%}
/*DEFINICION DE TU UNION PARA MANEJAR TIPOS*/
%union {
	int entero;
	float flotante;
  double dobledecimal;
	char caracter;
  char* cadena;
  void sintipo;
  struct estructura;
}
/*DEFINICION DE TIPOS*/
%token <entero> INT
%token <flotante> FLOAT
%token <dobledecimal> DOUBLE
%token <caracter> CHAR
%token <cadena> CADENA
%token <sintipo> VOID
%token <estructura> STRUCT
%%
/*GRAMATICA DEL LENGUAJE*/
%%
void yyerror(const char *s) {
	printf("Error en: %s",s):
	exit(-1);
}
