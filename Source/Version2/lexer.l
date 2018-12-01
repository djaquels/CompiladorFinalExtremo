/* Escaner Para Proyecto Final

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
                           Ya nada me asusta,
                           ni me cuentan nada,
                           al final de cuentas la vida es prestada
                           aqui esta mi mano pa´ quien lo merece
                           agance pa´ un lado todos lo corrientes
                           a chingasos me hice fuerte - Cuando Los Necesite - Adirel Favela


*/
%{
 #include <stdio.h>
 #include <string.h>
 #include "gramatica.tab.h"
%}
%option yylineno
%option noyywrap

%s COMM
%s COMMII
digito [0-9]
id_valido  [a-zA-Z_\-]
%%
<INITIAL>{

	"/*" {
		BEGIN COMM;
	}

	"*/" {
		printf("\nerrorLexico::linea:%d -> %s [NO SE INDICA EL INICIO DEL COMENTARIO]\n\n",yylineno,yytext);
	}

	"//" {
		BEGIN COMMII;
	}
"int" {return INT;}
"float" {return FLOAT;}
"double" {return DOUBLE;}
"char" {return CHAR;}
"void" {return VOID;}
"struct" {return STRUCT;}
"func" {return FUNC;}
"if"   {return IF;}
"else" {return ELSE;}
"do" {return DO;}
"while" {return WHILE;}
"for" {return FOR;}
"swich" {return SWICH;}
"case" {return CASE;}
"break" {return BREAK;}
"default" {return DEFAULT;}
"return" {return RETURN;}
"(" {return LPAR;}
")" {return RPAR;}
"{" {return LKEY;}
"}" {return RKEY;}
"[" {return LCOR;}
"]" {return RCOR;}
"," {return COMA;}
";" {return PYC;}
"true" {return TRUE;}
"false" {return FALSE;}
"!" {return NEG;}
"&&" {return AND;}
"||" {return OR;}
"+" {return MAS;}
"-" {return MENOS;}
"/" {return DIV;}
"*" {return MUL;}
"=" {return ASIG;}
"==" {return IGUAL;}
"!=" {return DISTINTO;}
"<=" {return GE;}
">=" {return LE;}
"<" {return LT;}
">" {return GT;}
[\%] {return MOD;}
{id_valido}+{id_valido}* {return ID;}
{digito}+ {return NUMERO;}
{digito}+.{digito}+"f" {return NUMERO;}
"'"{id_valido}"'" {return CARACTER;}
[\""]{id_valido}*[\""] {return CADENA;}
[ \n\t] {}
<<EOF>> 	 { yyterminate(); }

	. {
		printf("Error Lexico: %d -> %s token invalido.\n\n",yylineno,yytext);
	}
}

<COMM>{

	"*/" {
		// printf("FIN COMENTARIO");
		BEGIN INITIAL;
	}

	[^"*""/"] {
		// Cualquier cosa que no sea * ó /
		// ejemplo: hola como estas 341241 11 1
	}

	"*" {}

	"/" {}
}

<COMMII>{
	[^\n] {}

	"\n" {
		BEGIN INITIAL;
	}
}

%% /* Codigo C*/
