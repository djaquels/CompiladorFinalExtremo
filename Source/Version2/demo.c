// Para pruebas
// hjacales
#include <stdio.h>
#include "tablaSimbolos.h"
#include "tablaTipos.h"
#include "Pilas.h"

int i = 0; // La llave

int main(){
  TablaSimbolos *tablasim_global = crearTablaSimbolos();
  TablaTipos  * tablatipos_global = crearTablaTipos();
  char* args[0];
  struct PilaSimbolosNodo* simbolos = NULL;
  struct PilaTiposNodo* tipos = NULL;
    // TIPOS
  Tipo entero = crearTipo(0,0,4,NULL);
  addTipo(0,entero,tablatipos_global);
  //--------------------------------------------
  Lexema token = crearLexema(INT,"x",0,variable,NULL);
  addSimbolo(0,token,tablasim_global);
  pushSimbolo(&simbolos,tablasim_global);
  pushTipo(&tipos,tablatipos_global);
  TablaSimbolos * last = topSimbolos(simbolos);
  printf("%d\n",last[0].id);
}
//🍺 🍺 🍺 🍺
