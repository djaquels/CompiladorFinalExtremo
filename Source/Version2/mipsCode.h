/* ESCRIBE CODIGO INTERMEDIO Y MIPS

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
*/
FILE * codintermedio;

void crearSalidaIntermedia(){
    codintermedio = fopen("codigoIntermedio.hippo","w+");
    fclose(codintermedio);
    codintermedio = fopen("codigoIntermedio.hippo","a");
}
void escribirCodigo(char* c1,char*c2,char*c3,char*c4){
    fprintf(codintermedio,"%s %s %s %s\n",c1,c2,c3,c4);
}