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
                           ;  bug


*/
%{
 #include <stdio.h>
%}
digito [0-9]
id_valido  [a-zA-Z_\-]
%%
/* TOKENS VALIDOS DEL LENGUAJE :3*/
"int" {return INT;}
"float" {return FLOAT;}
"double" {return DOUBLE;}
"char" {return CHAR;}
"void" {return VOID;}
"struct" {return STRUCT;}
"func" {return FUNC}
"if"   {return IF;}
"else" {return ELSE;}
"do" {return DO;}
"while" {return WHILE;}
"for" {return FOR;}
"swich" {return SWICH}
"case" {return CASE;}
"break" {return BREAK;}
"default" {return DEFAULT;}
"return" {return RETURN;}
"(" {return PD;}
")" {return PI;}
"{" {return LD;}
"}" {return LI;}
"[" {return CD;}
"]" {return CI;}
"," {return COMMA;}
";" {return TERMINADOR;}
"true" {return TRUES;}
"false" {return FALSES;}
"!" {return NOT;}
"&&" {return AND;}
"||" {return OR;}
"+" {return OPMAS;}
"-" {return OPMEN;}
"/" {return OPDIV;}
"*" {return OPMULT;}
"=" {return ASIGNACION;}
[\%] {return MODULUS;}
{id_valido}+{id_valido}* {return ID;}
{digito}+ {return ENTERO}
{digito}+.{digito}+"f" {return DECIMAL}
"'"{id_valid}"'" {return CARACTER;}
[\"]{id_valido}*[\"] {return CADENA;}
