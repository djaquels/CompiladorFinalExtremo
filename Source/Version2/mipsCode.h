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
int labelcounter = 0;
char actualLabel[50] ;
typedef struct tripleta
{
	char op[20];
	char arg1[50];
	char arg2[20];
} tresdireciones;
// Estructura Para Codigo Intermedio
void crearSalidaIntermedia(){
    strcpy(actualLabel,"label0:");
    codintermedio = fopen("codigoIntermedio.hippo","w+");
    fclose(codintermedio);
    codintermedio = fopen("codigoIntermedio.hippo","a");
}
void escribirCodigo(char* c1,char*c2,char*c3,char*c4){
    fprintf(codintermedio,"%s %s %s %s\n",c1,c2,c3,c4);
}
void newLabel(){
  char l[50];
  sprintf(l, "label%d:", labelcounter);
  labelcounter += 1;
  strcpy(actualLabel,l);
}