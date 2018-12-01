/* Biblioteca para la tabla de Simbolos */
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
                           Yo no conosco la línea pues trabajo sin parar y al cuerpo doy lo que me pida
                           solo una vida hay que vivirla
                           ese problema lo traigo pendiente estalla póngase pilas ..
                            - El problema . Cornelio Vega y Su Dinastia (FT. Adriel Favela)


*/
#include "tiposDatos.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define TAMANIOHASH 1500

typedef struct Lexema {
  int tipo; // int,float,double,char,bool o void
  char* tokens;
  int direccion; // direccion en memoria
  int tipo_variable; // funcion,variable,parametro
  char* argumentos[]; // lista de argumentos en caso de ser una funcion.
} Lexema;
typedef struct TablaSimbolos {
  int id; // LLave
  Lexema lexema; // valor
} TablaSimbolos;
// Crea una tabla
TablaSimbolos* crearTablaSimbolos(){
  TablaSimbolos *t;
  t = malloc(sizeof(TablaSimbolos) * TAMANIOHASH);
  return t;
}
int addSimbolo(int llave ,Lexema l, TablaSimbolos t[]){
 t[llave].id = llave;
 t[llave].lexema = l;
 printf("id:%i-> tipo:%d identificador:%s dir:%i tipo_var:%i \n",t[llave].id,t[llave].lexema.tipo,t[llave].lexema.tokens,t[llave].lexema.direccion,t[llave].lexema.tipo_variable);
 return llave += 1;
}
Lexema crearLexema(int t,char* id,int d, int t_var,char* args[]){
  Lexema tmp;
  tmp.tipo = t;
  tmp.direccion = d;
  tmp.tipo_variable = t_var;
  tmp.tokens = id;
  //tmp.argumentos = args;
  printf("Lexema %s creado \n",id);
  return tmp;
}
// PILA DE TABLA DE SIMBOLOS
