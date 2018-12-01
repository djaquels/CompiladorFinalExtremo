#include "codigoIntermedio.h"

typedef struct _expresion{
    char dir[10];
    int type;
    int first;
} expresion;



typedef struct _condition{
    label ltrue;
    label lfalse;  
    int first;  
} condition;


typedef struct _num{
    int type;
    int ival;
    double dval;
} num;

typedef struct _type{
	int dim;
	int num_tipo;
	char* tipo;
} type;

typedef struct _sentence{
    label lnext;
    int first;    
} sentence;

