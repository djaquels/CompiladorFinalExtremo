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
                           Desmadroso desde morro
                           Ya ni modo esta vida me toco

                           Y aquí andamos al millón
                           Bien placoso y malandron - La Escuela No Me Gusto - Adriel Favela


*/
#include "tiposDatos.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define TAMANIOHASH 1500

typedef struct Tipo {
  int pos;
  int tipo;
  int dim;
  int tipo_base;
} Tipo;
typedef struct TablaTipos{
  int id; // LLave
  Tipo tipo; // valor
} TablaTipos;
// Crea una Tabla
TablaTipos* crearTablaTipos(){
  TablaTipos *t;
  t = malloc(sizeof(TablaTipos) * TAMANIOHASH);
  return t;
}
int addTipo(int llave ,Tipo t, TablaTipos ta[]){
 ta[llave].id = llave;
 ta[llave].tipo= t;
 printf("            Key Tipo Tamanio[bits]\n");
 printf("Nuevo Tipo: %d   %d   %d\n",llave,ta[llave].tipo.tipo,ta[llave].tipo.dim);
 return llave += 1;
}
Tipo crearTipo(int p, int t,int d,int tb){
  Tipo tmp;
  tmp.pos = p;
  tmp.tipo = t;
  tmp.dim = d;
  tmp.tipo_base = tb;
  //tmp.argumentos = args;
  return tmp;
}
// PILA DE TABLAS DE TIPOS

