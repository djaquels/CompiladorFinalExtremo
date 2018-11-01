// Para pruebas
// hjacales
#include <stdio.h>
#include "tablaSimbolos.h"

int i = 0; // La llave

int main(){
  TablaSimbolos * tabla;
  char* args[0];
  Lexema a = crearLexema(CHAR,0,variable,args);
  Lexema b = crearLexema(FLOAT,8,variable,args);
  Lexema c = crearLexema(VOID,16,parametro,args);
  tabla = crearTabla();
  i = addSimbolo(i,a,tabla);
  //printf("%i\n",i);
  i = addSimbolo(i,b,tabla);
  i = addSimbolo(i,c,tabla);
  return 0;

}
