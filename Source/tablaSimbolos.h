/* Biblioteca para la tabla de Simbolos */
#include "tiposDatos.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define TAMANIOHASH 1500

typedef struct Lexema {
  char* tipo; // int,float,double,char,bool o void
  int direccion; // direccion en memoria
  int tipo_variable; // funcion,variable,parametro
  char* argumentos[]; // lista de argumentos en caso de ser una funcion.
} Lexema;
typedef struct TablaSimbolos {
  int id; // LLave
  Lexema lexema; // valor
} TablaSimbolos;

TablaSimbolos* crearTabla(){
  TablaSimbolos *t;
  t = malloc(sizeof(TablaSimbolos) * TAMANIOHASH);
  return t;
}
int addSimbolo(int llave ,Lexema l, TablaSimbolos t[]){
 t[llave].id = llave;
 t[llave].lexema = l;
 printf("id:%i-> tipo:%s dir:%i tipo:%i \n",t[llave].id,t[llave].lexema.tipo,t[llave].lexema.direccion,t[llave].lexema.tipo_variable);
 return llave += 1;
}
Lexema crearLexema(char* t,int d, int t_var,char* args[]){
  Lexema tmp;
  tmp.tipo = t;
  tmp.direccion = d;
  tmp.tipo_variable = t_var;
  //tmp.argumentos = args;
  return tmp;
}
