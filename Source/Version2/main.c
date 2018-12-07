/* Archivo Principal Para Proyecto Final

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
EQUIPO :
1.- Santiago Lopez Ricardo
2.- Jacales Rojas Héctor Daniel
3.- Moreloz Alquezada Mario David
4.- Pina Lopez Christian
*/
#include <stdio.h>
#include <stdlib.h>
extern int yyparse();
extern FILE * yyin;
int main(int argc, char const *argv[]) {
  /* code */
  if(argc < 2) {
    return -1;
    printf("%s\n","Falta Nombre Del Archivo" );
    exit(-1);
  }
  yyin = fopen(argv[1],"r");
  if(!yyin){
    printf("%s\n", "Archivo Corrupto u.u" );
    exit(-1);
  }
  yyparse();
  fclose(yyin);
  return 0;
}
