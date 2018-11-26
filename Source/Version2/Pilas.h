// Pilas Que Vamos a Usar en El Proyecto
/*

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
                           Mujer tan bella y yo con una botella
                           Me dejé enredar fácil, caí en las garras de ella
                           Mujer tan bella y yo con una botella
                           Me dejé enredar fácil, caí en las garras de ella - Wolfine


*/
//#include "tablaSimbolos.h"
//#include "tablaTipos.h"
// Pila De Tablas De Simbolos;
struct PilaSimbolosNodo {
 TablaSimbolos * tabla;
 struct PilaSimbolosNodo* next;
};
struct PilaTiposNodo {
  TablaTipos * tabla;
  struct PilaTiposNodo * next;

};
struct TruePilaNodo {
  char* label;
  struct TruePilaNodo* next;
};
struct FalsePilaNodo {
  char* label;
  struct FalsePilaNodo* next;
};
struct NextPilaNodo {
  char* label;
  struct NextPilaNodo* next;
};
// FUNCIONES PUSH,POP,TOP Y CREAR;
// NODO SIMBOLOS
struct PilaSimbolosNodo* nuevoNodoSim(TablaSimbolos *t){
  struct PilaSimbolosNodo* nodo = (struct PilaSimbolosNodo*) malloc(sizeof(struct PilaSimbolosNodo));
  nodo -> tabla = t;
  nodo -> next = NULL;
  return nodo;
}
// NODO TIPOS
struct PilaTiposNodo* nuevoNodoTipos(TablaTipos *t){
  struct PilaTiposNodo* nodo = (struct PilaTiposNodo*) malloc(sizeof(struct PilaTiposNodo));
  nodo -> tabla = t;
  nodo -> next = NULL;
  return nodo;
}
// NODO Next
struct NextPilaNodo* nuevoNodoNext(char* l){
  struct NextPilaNodo* nodo = (struct NextPilaNodo*) malloc(sizeof(struct NextPilaNodo));
  nodo -> label = l;
  nodo -> next = NULL;
  return nodo;
}
// NODO FALSE
struct FalsePilaNodo* nuevoNodoFalse(char* l){
  struct FalsePilaNodo* nodo = (struct FalsePilaNodo*) malloc(sizeof(struct FalsePilaNodo));
  nodo -> label = l;
  nodo -> next = NULL;
  return nodo;
}
// NODO TRUE
struct TruePilaNodo* nuevoNodoTrue(char* l){
  struct TruePilaNodo* nodo = (struct TruePilaNodo*) malloc(sizeof(struct TruePilaNodo));
  nodo -> label = l;
  nodo -> next = NULL;
  return nodo;
}
int esVaciaSimbolos(struct PilaSimbolosNodo *raiz){
 return !raiz;
}
int esVaciaTipos(struct PilaTiposNodo *raiz){
 return !raiz;
}
int esVaciaNext(struct NextPilaNodo *raiz){
 return !raiz;
}
int esVaciaTrue(struct TruePilaNodo *raiz){
 return !raiz;
}
int esVaciaFalse(struct FalsePilaNodo *raiz){
 return !raiz;
}
/* PUSH*/
void pushSimbolo(struct PilaSimbolosNodo** p, TablaSimbolos *t){
 struct PilaSimbolosNodo* nodo = nuevoNodoSim(t);
 nodo->next = *p;
 *p = nodo;
  //printf("%d Puesta En La Pila\n",v);
}
void pushTipo(struct PilaTiposNodo** p, TablaTipos *t){
 struct PilaTiposNodo* nodo = nuevoNodoTipos(t);
 nodo->next = *p;
 *p = nodo;
  //printf("%d Puesta En La Pila\n",v);
}
void pushNext(struct NextPilaNodo** p, char* l){
 struct NextPilaNodo* nodo = nuevoNodoNext(l);
 nodo->next = *p;
 *p = nodo;
  //printf("%d Puesta En La Pila\n",v);
}
void pushFalse(struct FalsePilaNodo** p, char* l){
 struct FalsePilaNodo* nodo = nuevoNodoFalse(l);
 nodo->next = *p;
 *p = nodo;
  //printf("%d Puesta En La Pila\n",v);
}
void pushTrue(struct TruePilaNodo** p, char* l){
 struct TruePilaNodo* nodo = nuevoNodoTrue(l);
 nodo->next = *p;
 *p = nodo;
  //printf("%d Puesta En La Pila\n",v);
}
/* POP */
TablaSimbolos* popSimbolos(struct PilaSimbolosNodo** p){
 if(esVaciaSimbolos(*p)){
   perror("u.u");
   printf("La Pila Esta Vacia Y No Se Puede hacer pop!\n");
   }

 struct PilaSimbolosNodo* temp = *p;
 *p = (*p)->next;
 TablaSimbolos* popped = temp->tabla;
 free(temp);
 return popped;
}
TablaTipos* popTipos(struct PilaTiposNodo** p){
 if(esVaciaTipos(*p)){
   perror("u.u");
   printf("La Pila Esta Vacia Y No Se Puede hacer pop!\n");
   }

 struct PilaTiposNodo* temp = *p;
 *p = (*p)->next;
 TablaTipos* popped = temp->tabla;
 free(temp);
 return popped;
}
char* popNext(struct NextPilaNodo** p){
 if(esVaciaNext(*p)){
   perror("u.u");
   printf("La Pila Esta Vacia Y No Se Puede hacer pop!\n");
   }

 struct NextPilaNodo* temp = *p;
 *p = (*p)->next;
 char * popped = temp->label;
 free(temp);
 return popped;
}
char* popFalse(struct FalsePilaNodo** p){
 if(esVaciaFalse(*p)){
   perror("u.u");
   printf("La Pila Esta Vacia Y No Se Puede hacer pop!\n");
   }

 struct FalsePilaNodo* temp = *p;
 *p = (*p)->next;
 char * popped = temp->label;
 free(temp);
 return popped;
}
char* popTrue(struct TruePilaNodo** p){
 if(esVaciaTrue(*p)){
   perror("u.u");
   printf("La Pila Esta Vacia Y No Se Puede hacer pop!\n");
   }

 struct TruePilaNodo* temp = *p;
 *p = (*p)->next;
 char * popped = temp->label;
 free(temp);
 return popped;
}
/* TOP */
TablaSimbolos* topSimbolos(struct PilaSimbolosNodo* root)
{
    if (esVaciaSimbolos(root))
        perror("u.u");
    return root->tabla;
}
TablaTipos* topTipos(struct PilaTiposNodo* root)
{
    if (esVaciaTipos(root))
        perror("u.u");
    return root->tabla;
}
char* topNext(struct NextPilaNodo* root)
{
    if (esVaciaNext(root))
        perror("u.u");
    return root->label;
}
char* topFalse(struct FalsePilaNodo* root)
{
    if (esVaciaFalse(root))
        perror("u.u");
    return root->label;
}
char* topTrue(struct TruePilaNodo* root)
{
    if (esVaciaTrue(root))
        perror("u.u");
    return root->label;
}
