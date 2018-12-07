/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     FLOAT = 259,
     DOUBLE = 260,
     CHAR = 261,
     VOID = 262,
     STRUCT = 263,
     IF = 264,
     DO = 265,
     WHILE = 266,
     FOR = 267,
     SWICH = 268,
     CASE = 269,
     BREAK = 270,
     DEFAULT = 271,
     ELSE = 272,
     RETURN = 273,
     PRINT = 274,
     COMA = 275,
     PYC = 276,
     DP = 277,
     PTO = 278,
     ID = 279,
     FUNC = 280,
     CADENA = 281,
     CARACTER = 282,
     NUMERO = 283,
     TRUE = 284,
     FALSE = 285,
     ASIG = 286,
     NEG = 287,
     OR = 288,
     AND = 289,
     DISTINTO = 290,
     IGUAL = 291,
     GE = 292,
     LE = 293,
     LT = 294,
     GT = 295,
     MENOS = 296,
     MAS = 297,
     MOD = 298,
     DIV = 299,
     MUL = 300,
     RCOR = 301,
     LCOR = 302,
     LKEY = 303,
     RKEY = 304,
     RPAR = 305,
     LPAR = 306,
     IFX = 307
   };
#endif
/* Tokens.  */
#define INT 258
#define FLOAT 259
#define DOUBLE 260
#define CHAR 261
#define VOID 262
#define STRUCT 263
#define IF 264
#define DO 265
#define WHILE 266
#define FOR 267
#define SWICH 268
#define CASE 269
#define BREAK 270
#define DEFAULT 271
#define ELSE 272
#define RETURN 273
#define PRINT 274
#define COMA 275
#define PYC 276
#define DP 277
#define PTO 278
#define ID 279
#define FUNC 280
#define CADENA 281
#define CARACTER 282
#define NUMERO 283
#define TRUE 284
#define FALSE 285
#define ASIG 286
#define NEG 287
#define OR 288
#define AND 289
#define DISTINTO 290
#define IGUAL 291
#define GE 292
#define LE 293
#define LT 294
#define GT 295
#define MENOS 296
#define MAS 297
#define MOD 298
#define DIV 299
#define MUL 300
#define RCOR 301
#define LCOR 302
#define LKEY 303
#define RKEY 304
#define RPAR 305
#define LPAR 306
#define IFX 307




/* Copy the first part of user declarations.  */
#line 32 "gramatica.y"

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "tablaTipos.h"
#include "tablaSimbolos.h"
#include "Pilas.h"
#include "mipsCode.h"
// BISON NECESITA SABER DE ESTAS FUNCIONES
extern int yylex();
extern int yyparse();
extern FILE *yyin;
void yyerror(char *s);
void init();
int existeID(char*id,TablaSimbolos *t);//Verifica si un id ya existe en la Tabla de Simbolos
void printTablaSimbolos(TablaSimbolos*t);
extern int yylex();
extern int yylineno();
int tipo;
int direccion = 0;
int llavesimbolos = 0;
int reskey;
int toptipo = 5;
int var_temporales = 0;
// VARIABLES GLOBALES



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 60 "gramatica.y"
{
    struct{
     char*numero;
     int direccion;
     int type;
    }numero;
    char *id;
    int line;
    struct {
      char codigo[10050];
    }codigo;
    struct {
      int type;
    }type;
    struct {
      char True[50];
      char False[50];
      char codigo[5000];
      int direccion;
    }condicionval;
    struct {
      char Next[50];
      int tipo;
      char codigo[5000];
    }sentenciasval;
    struct{
      int type;
      char codigo[5000];
      int direccion;
      char temporal[10];
    }exprval;
    struct {
      int direccion;
      int type;
    }p_izq;
    struct {
      char operador[3];
    }relacionalop;

}
/* Line 193 of yacc.c.  */
#line 269 "gramatica.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 282 "gramatica.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   232

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNRULES -- Number of states.  */
#define YYNSTATES  169

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     5,    10,    15,    16,    18,    20,
      22,    24,    26,    31,    34,    39,    40,    41,    42,    43,
      58,    59,    61,    62,    68,    72,    76,    77,    78,    82,
      84,    90,    98,   104,   112,   122,   127,   131,   134,   138,
     147,   150,   154,   160,   161,   165,   166,   168,   170,   174,
     175,   180,   185,   189,   193,   197,   201,   205,   209,   211,
     213,   215,   217,   219,   224,   228,   232,   235,   239,   243,
     245,   247,   248,   250,   254,   256,   258,   260,   262,   264,
     266
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    -1,    -1,    55,    57,    56,    61,    -1,
      58,    59,    21,    57,    -1,    -1,     3,    -1,     4,    -1,
       5,    -1,     6,    -1,     7,    -1,    59,    20,    24,    60,
      -1,    24,    60,    -1,    47,    28,    46,    60,    -1,    -1,
      -1,    -1,    -1,    25,    58,    24,    62,    51,    65,    50,
      48,    57,    63,    68,    49,    64,    61,    -1,    -1,    66,
      -1,    -1,    66,    20,    58,    24,    67,    -1,    58,    24,
      67,    -1,    47,    46,    67,    -1,    -1,    -1,    70,    69,
      68,    -1,    70,    -1,     9,    51,    76,    50,    70,    -1,
       9,    51,    76,    50,    70,    17,    70,    -1,    11,    51,
      76,    50,    70,    -1,    10,    70,    11,    51,    76,    50,
      21,    -1,    12,    51,    70,    21,    76,    21,    70,    50,
      70,    -1,    73,    31,    75,    21,    -1,    18,    75,    21,
      -1,    18,    21,    -1,    48,    68,    49,    -1,    13,    51,
      75,    50,    48,    71,    72,    49,    -1,    15,    21,    -1,
      19,    75,    21,    -1,    14,    28,    22,    68,    71,    -1,
      -1,    16,    22,    68,    -1,    -1,    24,    -1,    74,    -1,
      24,    23,    24,    -1,    -1,    24,    47,    75,    46,    -1,
      74,    47,    75,    46,    -1,    75,    42,    75,    -1,    75,
      41,    75,    -1,    75,    45,    75,    -1,    75,    44,    75,
      -1,    75,    43,    75,    -1,    51,    75,    50,    -1,    74,
      -1,    26,    -1,    28,    -1,    27,    -1,    24,    -1,    24,
      51,    77,    50,    -1,    76,    33,    76,    -1,    76,    34,
      76,    -1,    32,    76,    -1,    75,    79,    75,    -1,    51,
      76,    50,    -1,    29,    -1,    30,    -1,    -1,    78,    -1,
      78,    20,    75,    -1,    75,    -1,    40,    -1,    39,    -1,
      37,    -1,    38,    -1,    35,    -1,    36,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   141,   141,   145,   141,   149,   149,   150,   150,   150,
     151,   151,   152,   166,   182,   197,   198,   218,   221,   198,
     226,   228,   228,   229,   229,   232,   232,   233,   233,   237,
     242,   258,   278,   291,   304,   305,   330,   343,   346,   349,
     350,   351,   352,   352,   353,   353,   354,   383,   383,   383,
     384,   384,   385,   404,   420,   436,   451,   471,   472,   473,
     474,   484,   485,   513,   544,   555,   566,   572,   595,   599,
     606,   614,   614,   615,   615,   616,   616,   616,   616,   616,
     616
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "DOUBLE", "CHAR", "VOID",
  "STRUCT", "IF", "DO", "WHILE", "FOR", "SWICH", "CASE", "BREAK",
  "DEFAULT", "ELSE", "RETURN", "PRINT", "COMA", "PYC", "DP", "PTO", "ID",
  "FUNC", "CADENA", "CARACTER", "NUMERO", "TRUE", "FALSE", "ASIG", "NEG",
  "OR", "AND", "DISTINTO", "IGUAL", "GE", "LE", "LT", "GT", "MENOS", "MAS",
  "MOD", "DIV", "MUL", "RCOR", "LCOR", "LKEY", "RKEY", "RPAR", "LPAR",
  "IFX", "$accept", "programa", "@1", "@2", "declaraciones", "tipo",
  "lista", "arreglo", "funciones", "@3", "@4", "@5", "argumentos",
  "lista_argumentos", "parte_arreglo", "sentencias", "@6", "sentencia",
  "casos", "predeterminado", "parte_izq", "var_arreglo", "expresion",
  "condicion", "parametros", "lista_param", "rel", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    55,    56,    54,    57,    57,    58,    58,    58,
      58,    58,    59,    59,    60,    60,    62,    63,    64,    61,
      61,    65,    65,    66,    66,    67,    67,    69,    68,    68,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    71,    71,    72,    72,    73,    73,    73,    73,
      74,    74,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    76,    76,    76,    76,    76,    76,
      76,    77,    77,    78,    78,    79,    79,    79,    79,    79,
      79
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     4,     4,     0,     1,     1,     1,
       1,     1,     4,     2,     4,     0,     0,     0,     0,    14,
       0,     1,     0,     5,     3,     3,     0,     0,     3,     1,
       5,     7,     5,     7,     9,     4,     3,     2,     3,     8,
       2,     3,     5,     0,     3,     0,     1,     1,     3,     0,
       4,     4,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     4,     3,     3,     2,     3,     3,     1,
       1,     0,     1,     3,     1,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     6,     1,     7,     8,     9,    10,    11,     3,
       0,    20,    15,     0,     0,     4,     0,    13,     0,     6,
       0,     0,    15,     5,    16,    15,    12,     0,    14,    22,
       0,     0,    21,    26,     0,     0,     0,    24,     6,     0,
      26,    17,    26,    25,    49,    23,     0,    49,     0,     0,
       0,     0,     0,     0,    46,    49,     0,    27,     0,    47,
       0,     0,     0,    49,     0,    40,    37,    62,    59,    61,
      60,     0,    58,     0,     0,     0,     0,     0,    18,    49,
       0,     0,    69,    70,     0,     0,     0,     0,     0,     0,
       0,     0,    71,     0,    36,     0,     0,     0,     0,     0,
      41,    48,     0,    38,    20,    28,     0,     0,    66,     0,
       0,    79,    80,    77,    78,    76,    75,     0,     0,     0,
      49,     0,    49,     0,     0,    74,     0,    72,    57,    53,
      52,    56,    55,    54,    50,    19,    35,    51,    68,    67,
      64,    65,    30,     0,    32,     0,    43,    63,     0,    49,
       0,    49,     0,    45,    73,    31,    33,     0,     0,     0,
       0,    49,    49,    49,    39,    34,    43,    44,    42
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    11,     9,    10,    13,    17,    15,    27,
      44,   104,    31,    32,    37,    56,    79,    57,   153,   160,
      58,    72,    86,    87,   126,   127,   117
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -56
static const yytype_int16 yypact[] =
{
     -56,    27,   207,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
      16,    18,    10,    -6,   207,   -56,    31,   -56,    36,   207,
      41,    24,    10,   -56,   -56,    10,   -56,    28,   -56,   207,
      57,    32,    64,    42,    44,   207,    48,   -56,   207,    79,
      42,   -56,    42,   -56,    43,   -56,    76,    43,    77,    80,
      86,   126,    59,    87,   -13,    43,   105,    -8,   124,   142,
      69,   160,    69,    43,    87,   -56,   -56,   -38,   -56,   -56,
     -56,    87,   142,    81,    91,   166,    87,   150,   -56,    43,
      87,    87,   -56,   -56,    69,    69,   138,    38,   140,    40,
     171,   143,    87,   153,   -56,    87,    87,    87,    87,    87,
     -56,   -56,   107,   -56,    18,   -56,   100,   163,    12,   122,
      96,   -56,   -56,   -56,   -56,   -56,   -56,    87,    69,    69,
      43,    69,    43,    69,   152,   174,   151,   182,   -56,   125,
     125,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   174,
     186,   -56,   204,   106,   -56,     5,   208,   -56,    87,    43,
     202,    43,   196,   209,   174,   -56,   -56,   176,   205,   206,
     180,    43,    43,    43,   -56,   -56,   208,   -56,   -56
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -56,   -56,   -56,   -56,    -7,     7,   -56,    -5,   127,   -56,
     -56,   -56,   -56,   -56,   -18,   -54,   -56,   -45,    66,   -56,
     -56,   -44,   -48,   -55,   -56,   -56,   -56
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -30
static const yytype_int16 yytable[] =
{
      59,    77,    61,    59,    73,    74,   -29,    89,   -29,    76,
      75,    59,    23,    92,    18,    19,    91,    26,    90,    59,
      28,    20,    43,    93,    45,   105,   151,     3,   102,   108,
     110,    41,   106,   107,    76,    59,    30,   109,   118,   119,
      12,   -29,    39,    14,   125,   118,   119,   129,   130,   131,
     132,   133,    46,    47,    48,    49,    50,    16,    51,    21,
      22,    52,    53,   140,   141,    24,   143,    54,   145,   139,
      25,   118,   119,   118,   119,   142,    59,   144,    59,    29,
      66,    33,    34,    67,    35,    68,    69,    70,   120,    36,
     122,    55,    38,    67,    40,    68,    69,    70,    82,    83,
     154,    84,    94,    42,   155,    59,   157,    59,   166,   167,
      71,    67,   100,    68,    69,    70,   165,    59,    59,    59,
      85,   136,    95,    96,    97,    98,    99,    60,    62,   118,
     119,    63,    95,    96,    97,    98,    99,    64,    71,   118,
     119,    95,    96,    97,    98,    99,   138,    65,    95,    96,
      97,    98,    99,   134,    78,    80,   150,   111,   112,   113,
     114,   115,   116,    95,    96,    97,    98,    99,    97,    98,
      99,    88,   128,   111,   112,   113,   114,   115,   116,    95,
      96,    97,    98,    99,    95,    96,    97,    98,    99,    81,
     101,   121,   123,   124,    95,    96,    97,    98,    99,   103,
     146,   147,   148,   128,    95,    96,    97,    98,    99,   137,
       4,     5,     6,     7,     8,    95,    96,    97,    98,    99,
     119,   149,   152,   156,   158,   159,   161,   162,   163,   164,
       0,   135,   168
};

static const yytype_int16 yycheck[] =
{
      44,    55,    47,    47,    52,    53,    14,    62,    16,    47,
      23,    55,    19,    51,    20,    21,    64,    22,    63,    63,
      25,    14,    40,    71,    42,    79,    21,     0,    76,    84,
      85,    38,    80,    81,    47,    79,    29,    85,    33,    34,
      24,    49,    35,    25,    92,    33,    34,    95,    96,    97,
      98,    99,     9,    10,    11,    12,    13,    47,    15,    28,
      24,    18,    19,   118,   119,    24,   121,    24,   123,   117,
      46,    33,    34,    33,    34,   120,   120,   122,   122,    51,
      21,    24,    50,    24,    20,    26,    27,    28,    50,    47,
      50,    48,    48,    24,    46,    26,    27,    28,    29,    30,
     148,    32,    21,    24,   149,   149,   151,   151,   162,   163,
      51,    24,    21,    26,    27,    28,   161,   161,   162,   163,
      51,    21,    41,    42,    43,    44,    45,    51,    51,    33,
      34,    51,    41,    42,    43,    44,    45,    51,    51,    33,
      34,    41,    42,    43,    44,    45,    50,    21,    41,    42,
      43,    44,    45,    46,    49,    31,    50,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    43,    44,
      45,    11,    50,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    41,    42,    43,    44,    45,    47,
      24,    51,    21,    50,    41,    42,    43,    44,    45,    49,
      48,    50,    20,    50,    41,    42,    43,    44,    45,    46,
       3,     4,     5,     6,     7,    41,    42,    43,    44,    45,
      34,    17,    14,    21,    28,    16,    50,    22,    22,    49,
      -1,   104,   166
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    54,    55,     0,     3,     4,     5,     6,     7,    57,
      58,    56,    24,    59,    25,    61,    47,    60,    20,    21,
      58,    28,    24,    57,    24,    46,    60,    62,    60,    51,
      58,    65,    66,    24,    50,    20,    47,    67,    48,    58,
      46,    57,    24,    67,    63,    67,     9,    10,    11,    12,
      13,    15,    18,    19,    24,    48,    68,    70,    73,    74,
      51,    70,    51,    51,    51,    21,    21,    24,    26,    27,
      28,    51,    74,    75,    75,    23,    47,    68,    49,    69,
      31,    47,    29,    30,    32,    51,    75,    76,    11,    76,
      70,    75,    51,    75,    21,    41,    42,    43,    44,    45,
      21,    24,    75,    49,    64,    68,    75,    75,    76,    75,
      76,    35,    36,    37,    38,    39,    40,    79,    33,    34,
      50,    51,    50,    21,    50,    75,    77,    78,    50,    75,
      75,    75,    75,    75,    46,    61,    21,    46,    50,    75,
      76,    76,    70,    76,    70,    76,    48,    50,    20,    17,
      50,    21,    14,    71,    75,    70,    21,    70,    28,    16,
      72,    50,    22,    22,    49,    70,    68,    68,    71
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 141 "gramatica.y"
    {
  direccion = 0;
  init();
  crearSalidaIntermedia();
  ;}
    break;

  case 3:
#line 145 "gramatica.y"
    {
    printf("Aquí comienza el analicis de funciones\n");
    printTablaSimbolos(tablasim_global);
  ;}
    break;

  case 6:
#line 149 "gramatica.y"
    {printf("Fin De declaraciones\n");;}
    break;

  case 7:
#line 150 "gramatica.y"
    { (yyval.type).type = 0; tipo = 0;;}
    break;

  case 8:
#line 150 "gramatica.y"
    {(yyval.type).type = 1; tipo = 1;;}
    break;

  case 9:
#line 150 "gramatica.y"
    {(yyval.type).type = 2; tipo = 2;;}
    break;

  case 10:
#line 151 "gramatica.y"
    {(yyval.type).type = 3; tipo = 3;;}
    break;

  case 11:
#line 151 "gramatica.y"
    {(yyval.type).type = 4; tipo = 4;;}
    break;

  case 12:
#line 152 "gramatica.y"
    {
 printf("Añadiendo Simbolo: %s\n", (yyvsp[(3) - (4)].id));
 //$$.type = $4.type;
 Lexema l;
 TablaTipos * t; 
 t = topTipos(tipos); 
 TablaSimbolos * tablasim = crearTablaSimbolos();
 tablasim = topSimbolos(simbolos);
 char * tempid = malloc(sizeof(char*));
 strcpy(tempid,(yyvsp[(3) - (4)].id));
 l = crearLexema((yyvsp[(4) - (4)].type).type,tempid,direccion,variable,NULL); // Nuevo Lexema
 llavesimbolos = addSimbolo(llavesimbolos,l,tablasim); // Añadimos simbolo a la tabla de simbolos
 free(yylval.id);
 direccion = direccion + t[(yyvsp[(4) - (4)].type).type].tipo.dim;
;}
    break;

  case 13:
#line 166 "gramatica.y"
    {
 printf("Añadiendo Simbolo : %s\n",(yyvsp[(1) - (2)].id));
 //$$.type = $2.type;
 Lexema l;
 TablaTipos * t; 
 t = topTipos(tipos);
 TablaSimbolos * tablasim = crearTablaSimbolos();
 tablasim = topSimbolos(simbolos); 
 //printf("%i\n",t[tipo].tipo.tipo);
 char * tempid = malloc(sizeof(char*));
 strcpy(tempid,(yyvsp[(1) - (2)].id));
 l = crearLexema((yyvsp[(2) - (2)].type).type,tempid,direccion,variable,NULL); // Nuevo Lexema
 llavesimbolos = addSimbolo(llavesimbolos,l,tablasim); // Añadimos simbolo a la tabla de simbolos
 free(yylval.id);
 direccion = direccion + t[(yyvsp[(2) - (2)].type).type].tipo.dim;
;}
    break;

  case 14:
#line 182 "gramatica.y"
    {
  int dimarr ;
  TablaTipos * t = topTipos(tipos);
  int n = atoi((yyvsp[(2) - (4)].numero).numero);
  dimarr = t[tipo].tipo.dim * n;
  Tipo nuevoarreglo;
  //printf("%d %d \n\n",t[toptipo - 1 ].tipo.tipo_base,tipo);
  if( t[toptipo - 1 ].tipo.tipo_base == tipo && t[toptipo - 1 ].tipo.dim == dimarr){
    toptipo = toptipo - 1;
  }else{
    nuevoarreglo = crearTipo(toptipo,toptipo,dimarr,t[tipo].tipo.tipo);
    addTipo(toptipo,nuevoarreglo,topTipos(tipos));
  }
  toptipo += 1;
  (yyval.type).type = toptipo - 1 ;
;}
    break;

  case 15:
#line 197 "gramatica.y"
    {(yyval.type).type = tipo;;}
    break;

  case 16:
#line 198 "gramatica.y"
    {
  char * tempid = malloc(sizeof(char*));
  strcpy(tempid,(yyvsp[(3) - (3)].id));
  int existe = 0;
  TablaSimbolos * last = topSimbolos(simbolos);
  existe = existeID(tempid,last);
  if(existe < 0){
    // Se crea una tabla de simbolos;
    reskey = llavesimbolos;
    llavesimbolos = 0;
    TablaSimbolos * FTS = crearTablaSimbolos();
    pushSimbolo(&simbolos,FTS);
    char l[20];
    sprintf(l,"%s:",tempid);
    escribirCodigo(l,"","","");
    newLabel();
    pushNext(&nextpila,actualLabel);
  }else{
    yyerror("ID Duplicado, se necesita cambiar el identificador de la funcion");
    exit(-1);
  } ;}
    break;

  case 17:
#line 218 "gramatica.y"
    {
    printf("Tabla De Simbolos Local\n");
    printTablaSimbolos(topSimbolos(simbolos));
  ;}
    break;

  case 18:
#line 221 "gramatica.y"
    {
    escribirCodigo("",popNext(&nextpila),"","");
  // Salimos de la tabla de simbolos de la funcion :3
  popSimbolos(&simbolos);
  llavesimbolos = reskey;
  ;}
    break;

  case 20:
#line 226 "gramatica.y"
    { printf("Exito!\n");
  ;}
    break;

  case 21:
#line 228 "gramatica.y"
    { strcpy((yyval.codigo).codigo,(yyvsp[(1) - (1)].codigo).codigo);;}
    break;

  case 22:
#line 228 "gramatica.y"
    {;}
    break;

  case 24:
#line 229 "gramatica.y"
    {
  TablaSimbolos * t = crearTablaSimbolos();
;}
    break;

  case 27:
#line 233 "gramatica.y"
    {
  escribirCodigo((yyvsp[(1) - (1)].sentenciasval).codigo,"","","");
  //strcpy($$.codigo,$1.codigo);
  //printf("%s",$1.codigo);
;}
    break;

  case 28:
#line 237 "gramatica.y"
    {;}
    break;

  case 29:
#line 237 "gramatica.y"
    {
  strcpy((yyval.sentenciasval).codigo,(yyvsp[(1) - (1)].sentenciasval).codigo);
  escribirCodigo((yyvsp[(1) - (1)].sentenciasval).codigo,"","","");
  //printf("%s",$1.codigo);
;}
    break;

  case 30:
#line 242 "gramatica.y"
    {
  //newLabel();
  //strcpy($3.True,actualLabel);
  pushTrue(&truepila,actualLabel);
  strcpy((yyval.sentenciasval).Next,(yyvsp[(3) - (5)].condicionval).False);
  strcat((yyval.sentenciasval).Next,(yyvsp[(5) - (5)].sentenciasval).Next);
  char cod[5000];
  strcat(cod,(yyvsp[(3) - (5)].condicionval).codigo);
  strcat(cod,(yyvsp[(3) - (5)].condicionval).True);
  strcat(cod,"\n");
  strcat(cod,(yyvsp[(5) - (5)].sentenciasval).codigo);
  //printf("%s",cod);
  strcpy((yyval.sentenciasval).codigo,cod);
  //printf("%s u.u\n",cod);
  strcpy(cod,"");
  ;}
    break;

  case 31:
#line 258 "gramatica.y"
    {
  //pushTrue(&truepila,actualLabel);
  strcpy((yyval.sentenciasval).Next,(yyvsp[(5) - (7)].sentenciasval).Next);
  strcat((yyval.sentenciasval).Next,(yyvsp[(7) - (7)].sentenciasval).Next);
  char cod[5000];
  strcat(cod,(yyvsp[(3) - (7)].condicionval).codigo);
  strcat(cod,(yyvsp[(3) - (7)].condicionval).True);
  strcat(cod,"\n");
  strcat(cod,(yyvsp[(5) - (7)].sentenciasval).codigo);
  strcat(cod,"\n");
  //strcat(cod,"\n goto");
  //strcat(cod,$$.Next);
  strcat(cod,(yyvsp[(3) - (7)].condicionval).False);
  strcat(cod,"\n");
  strcat(cod,(yyvsp[(7) - (7)].sentenciasval).codigo);
  //printf("%s",cod);
  strcpy((yyval.sentenciasval).codigo,cod);
  //escribirCodigo($$.codigo,"","","");
  strcpy(cod,"");
  ;}
    break;

  case 32:
#line 278 "gramatica.y"
    {
    char codigos[5000];
    strcat(codigos,(yyvsp[(5) - (5)].sentenciasval).Next);
    strcat(codigos,(yyvsp[(3) - (5)].condicionval).codigo);
    strcat(codigos,(yyvsp[(3) - (5)].condicionval).True);
    strcat(codigos,"\n");
    strcat(codigos,(yyvsp[(5) - (5)].sentenciasval).codigo);
    strcat(codigos,"\n");
    strcat(codigos,"goto ");
    strcat(codigos,(yyvsp[(5) - (5)].sentenciasval).Next);
    strcpy((yyval.sentenciasval).codigo,codigos);
    strcpy(codigos,"");
  ;}
    break;

  case 33:
#line 291 "gramatica.y"
    {
    strcpy((yyval.sentenciasval).Next,(yyvsp[(5) - (7)].condicionval).False);
    char cod[5000];
    char aux[50];
    strcat(cod,(yyvsp[(2) - (7)].sentenciasval).Next);
    strcat(cod,(yyvsp[(5) - (7)].condicionval).codigo);
    strcat(cod,(yyvsp[(5) - (7)].condicionval).True);
    strcat(cod,(yyvsp[(2) - (7)].sentenciasval).codigo);
    sprintf(aux,"goto %s\n",(yyvsp[(2) - (7)].sentenciasval).Next);
    strcat(cod,aux);
    strcpy((yyval.sentenciasval).codigo,cod);
    strcpy(aux,"");
  ;}
    break;

  case 34:
#line 304 "gramatica.y"
    {;}
    break;

  case 35:
#line 305 "gramatica.y"
    { 
    //printf("%d\n",$1.direccion);
    //printf("%s\n",$3.temporal);
    strcpy((yyval.sentenciasval).Next,"label0:");
    char c[10];
    char cod[50];
    char direccions[15];
    //strcat(cod,$3.codigo);
    sprintf(c,"t%d := ",var_temporales);
    sprintf(direccions,"%dD\n",(yyvsp[(3) - (4)].exprval).direccion);
    if(strcmp("",(yyvsp[(3) - (4)].exprval).temporal) == 0){
      strcat(cod,c);
      strcat(cod,direccions);
    }else{
      strcat(cod,(yyvsp[(3) - (4)].exprval).codigo);
      strcat(cod,c);
      strcat(cod,(yyvsp[(3) - (4)].exprval).temporal);
      strcat(cod,"\n");
    }
    //printf("u.u: %s",cod);
    strcpy((yyval.sentenciasval).codigo,cod);
    //printf("Se realizo operacion de asignacion\n");
    strcpy(cod,"");
    var_temporales++;
  ;}
    break;

  case 36:
#line 330 "gramatica.y"
    {
    printf("Retornando\n");
    newLabel();
    char c[100] ="";
    char ds[100];
    strcat(c,"return ");
    sprintf(ds, " %dD\n ", (yyvsp[(2) - (3)].exprval).direccion);
    strcat(c,ds); 
    strcat(c,"goto ");
    strcat(c,actualLabel);
    strcpy((yyval.sentenciasval).codigo,c);
    strcpy(c,"");
    ;}
    break;

  case 37:
#line 343 "gramatica.y"
    { 
    char c[50] = "return\n goto "; strcat(c,(yyval.sentenciasval).Next); strcpy((yyval.sentenciasval).codigo,c);
    ;}
    break;

  case 38:
#line 346 "gramatica.y"
    {
    strcpy((yyval.sentenciasval).codigo,(yyvsp[(2) - (3)].sentenciasval).codigo);
  ;}
    break;

  case 39:
#line 349 "gramatica.y"
    {;}
    break;

  case 40:
#line 350 "gramatica.y"
    {;}
    break;

  case 41:
#line 351 "gramatica.y"
    {;}
    break;

  case 46:
#line 354 "gramatica.y"
    {
  //printf("%s %d\n",$1,reskey);
  // Buscamos en la tabla de simbolos global
  int existe = 0;
  int j = 0;
  for(int i = 0; i < reskey ; i++){
    //printf("%s\n",tablasim_global[i].lexema.tokens);
    if(strcmp((yyvsp[(1) - (1)].id),tablasim_global[i].lexema.tokens) == 0){
      //printf("%s encontrado en la tabla global de simbolos\n",$1);
      existe = 1;
      j = i;
      break;
    }
  }
  // Si no, se busca en la tabla local
  if( existe == 1){
     (yyval.p_izq).direccion = tablasim_global[j].lexema.direccion;
  }else{
    TablaSimbolos *t;
    t = topSimbolos(simbolos);
    int r = existeID((yyvsp[(1) - (1)].id),t);
    if( r >= 0){
     int a = t[r].lexema.direccion;
     (yyval.p_izq).direccion = a;
    }else{
      printf("No se ha declarado el id: %s\n", (yyvsp[(1) - (1)].id));
      exit(-1);
    }
  }
;}
    break;

  case 52:
#line 385 "gramatica.y"
    {
  printf("sumando\n");
    char c[100];
    char t[10];
    sprintf(t, "t%d", var_temporales);
    strcpy((yyval.exprval).temporal,t);
    sprintf(t, "t%d := ", var_temporales);
    strcat(c,t);
    sprintf(t,"%dD + ",(yyvsp[(1) - (3)].exprval).direccion);
    strcat(c,t);
    sprintf(t,"%dD\n",(yyvsp[(3) - (3)].exprval).direccion);
    strcat(c,t);
    strcpy((yyval.exprval).codigo,c);
    //printf("%s\n",c);
    //escribirCodigo(c,"","","");
    strcpy(c,"");
    var_temporales++;
    //printf("Error no son del mismo tipo\n");
    //exit(-1);
;}
    break;

  case 53:
#line 404 "gramatica.y"
    {
    char c[100];
    char t[10];
    sprintf(t, "t%d", var_temporales);
    strcpy((yyval.exprval).temporal,t);
    sprintf(t, "t%d := ", var_temporales);
    strcat(c,t);
    sprintf(t,"%dD - ",(yyvsp[(1) - (3)].exprval).direccion);
    strcat(c,t);
    sprintf(t,"%dD \n",(yyvsp[(3) - (3)].exprval).direccion);
    strcat(c,t);
    strcpy((yyval.exprval).codigo,c);
    strcpy(c,"");
    //escribirCodigo(c,"","","");
    var_temporales++;
;}
    break;

  case 54:
#line 420 "gramatica.y"
    {
    char c[100];
    char t[10];
    sprintf(t, "t%d", var_temporales);
    strcpy((yyval.exprval).temporal,t);
    sprintf(t, "t%d := ", var_temporales);
    strcat(c,t);
    sprintf(t,"%dD * ",(yyvsp[(1) - (3)].exprval).direccion);
    strcat(c,t);
    sprintf(t,"%dD \n",(yyvsp[(3) - (3)].exprval).direccion);
    strcat(c,t);
    strcpy((yyval.exprval).codigo,c);
    strcpy(c,"");
    //escribirCodigo(c,"","","");
    var_temporales++;
  ;}
    break;

  case 55:
#line 436 "gramatica.y"
    {
    char c[100];
    char t[10];
    sprintf(t, "t%d", var_temporales);
    strcpy((yyval.exprval).temporal,t);
    sprintf(t, "t%d := ", var_temporales);
    strcat(c,t);
    sprintf(t,"%dD / ",(yyvsp[(1) - (3)].exprval).direccion);
    strcat(c,t);
    sprintf(t,"%dD \n",(yyvsp[(3) - (3)].exprval).direccion);
    strcat(c,t);
    strcpy((yyval.exprval).codigo,c);
    //escribirCodigo(c,"","","");
    var_temporales++;
  ;}
    break;

  case 56:
#line 451 "gramatica.y"
    {
  if((yyvsp[(1) - (3)].exprval).type == (yyvsp[(3) - (3)].exprval).type){
    char c[100];
    char t[10];
    sprintf(t, "t%d", var_temporales);
    strcpy((yyval.exprval).temporal,t);
    sprintf(t, "t%d := ", var_temporales);
    strcat(c,t);
    sprintf(t,"%dD",(yyvsp[(1) - (3)].exprval).direccion);
    strcat(c,t);
    sprintf(t,"%dD \n",(yyvsp[(3) - (3)].exprval).direccion);
    strcat(c,t);
    strcpy((yyval.exprval).codigo,c);
    //escribirCodigo(c,"","","");
    var_temporales++;
  }else{
    printf("Error no son del mismo tipo\n");
    exit(-1);
  }
;}
    break;

  case 60:
#line 474 "gramatica.y"
    { 
    (yyvsp[(1) - (1)].numero).type = 0;
    (yyvsp[(1) - (1)].numero).direccion =  direccion + 4;
    direccion = direccion + 4 ;
    (yyval.exprval).direccion = direccion + 4;
    char s[10];
    sprintf(s,"%dD",(yyval.exprval).direccion);
    strcpy((yyval.exprval).codigo,s);
    (yyval.exprval).type = (yyvsp[(1) - (1)].numero).type;
    ;}
    break;

  case 62:
#line 485 "gramatica.y"
    {
  int existe = 0;
  int j = 0;
  for(int i = 0; i < reskey ; i++){
    //printf("%s\n",tablasim_global[i].lexema.tokens);
    if(strcmp((yyvsp[(1) - (1)].id),tablasim_global[i].lexema.tokens) == 0){
      //printf("%s encontrado en la tabla global de simbolos\n",$1);
      existe = 1;
      j = i;
      break;
    }
  }
  // Si no, se busca en la tabla local
  if( existe == 1){
     (yyval.exprval).direccion = tablasim_global[j].lexema.direccion;
  }else{
    TablaSimbolos *t;
    t = topSimbolos(simbolos);
    int r = existeID((yyvsp[(1) - (1)].id),t);
    if( r >= 0){
     int a = t[r].lexema.direccion;
     (yyval.exprval).direccion = a;
    }else{
      printf("No se ha declarado el id: %s\n", (yyvsp[(1) - (1)].id));
      exit(-1);
    }
   }
  ;}
    break;

  case 63:
#line 513 "gramatica.y"
    {
    //printf("%s\n",$1);
  // Buscamos en la tabla de simbolos global
  int existe = 0;
  int j = 0;
  for(int i = 0; i < reskey ; i++){
    //printf("%s\n",tablasim_global[i].lexema.tokens);
    if(strcmp((yyvsp[(1) - (4)].id),tablasim_global[i].lexema.tokens) == 0){
      //printf("%s encontrado en la tabla global de simbolos\n",$1);
      existe = 1;
      j = i;
      break;
    }
  }
  // Si no, se busca en la tabla local
  if( existe >= 1){
     (yyval.exprval).direccion = tablasim_global[j].lexema.direccion;
  }else{
    TablaSimbolos *t;
    t = topSimbolos(simbolos);
    int r = existeID((yyvsp[(1) - (4)].id),t);
    printf("%d\n",r);
    if( r >= 0){
     int a = t[r].lexema.direccion;
     (yyval.exprval).direccion = a;
    }else{
      printf("No se ha declarado el id: %s\n", (yyvsp[(1) - (4)].id));
      exit(-1);
    }
  }
  ;}
    break;

  case 64:
#line 544 "gramatica.y"
    {
    strcpy((yyval.condicionval).True,(yyvsp[(1) - (3)].condicionval).True);
    char codigo[1000];
    strcpy((yyval.condicionval).True,(yyvsp[(3) - (3)].condicionval).True);
    strcpy((yyval.condicionval).False,(yyvsp[(3) - (3)].condicionval).False);
    strcat(codigo,(yyvsp[(1) - (3)].condicionval).codigo);
    strcat(codigo,(yyvsp[(1) - (3)].condicionval).False);
    strcat(codigo,(yyvsp[(3) - (3)].condicionval).codigo);
    strcpy((yyval.condicionval).codigo,codigo);
    printf("%s\n",codigo);
  ;}
    break;

  case 65:
#line 555 "gramatica.y"
    {
    strcpy((yyval.condicionval).False,(yyvsp[(1) - (3)].condicionval).False);
    char codigo[1000];
    strcpy((yyval.condicionval).False,(yyvsp[(3) - (3)].condicionval).False);
    strcpy((yyval.condicionval).True,(yyvsp[(3) - (3)].condicionval).True);
    strcat(codigo,(yyvsp[(1) - (3)].condicionval).codigo);
    strcat(codigo,(yyvsp[(1) - (3)].condicionval).True);
    strcat(codigo,(yyvsp[(3) - (3)].condicionval).codigo);
    strcpy((yyval.condicionval).codigo,codigo);
    //printf("%s\n",codigo);
  ;}
    break;

  case 66:
#line 566 "gramatica.y"
    {
    strcpy((yyval.condicionval).True,(yyvsp[(2) - (2)].condicionval).False);
    strcpy((yyval.condicionval).False,(yyvsp[(2) - (2)].condicionval).True);
    strcpy((yyval.condicionval).codigo,(yyvsp[(2) - (2)].condicionval).codigo);
    //printf("Negando el codigo\n");
  ;}
    break;

  case 67:
#line 572 "gramatica.y"
    {
  pushNext(&nextpila,actualLabel);
  newLabel();
  strcpy((yyval.condicionval).True,actualLabel);
  pushTrue(&truepila,actualLabel);
  newLabel();
  strcpy((yyval.condicionval).False,actualLabel);
  pushFalse(&falsepila,actualLabel);
  char c[2000];
  char aux[500];
  //strcat(c,$1.codigo);
  //strcat(c," ");
  //strcat(c,$3.codigo);
  //strcat(c," ");
  sprintf(aux,"\n if %d %s %d goto %s\n",(yyvsp[(1) - (3)].exprval).direccion,(yyvsp[(2) - (3)].relacionalop).operador,(yyvsp[(3) - (3)].exprval).direccion,(yyval.condicionval).True);
  strcat(c,aux);
  sprintf(aux,"goto %s\n",(yyval.condicionval).False);
  strcat(c,aux);
  strcpy((yyval.condicionval).codigo,c);
  //printf("%s\n",c);
  strcpy(c,"");
  //escribirCodigo(c,"","","");
  ;}
    break;

  case 68:
#line 595 "gramatica.y"
    {
    (yyval.condicionval).direccion = (yyvsp[(2) - (3)].condicionval).direccion;
    strcpy((yyval.condicionval).codigo,(yyvsp[(2) - (3)].condicionval).codigo);
  ;}
    break;

  case 69:
#line 599 "gramatica.y"
    {
  char temp[10] = "goto ";  
  newLabel();
  strcpy((yyval.condicionval).True,actualLabel);
  pushTrue(&truepila,actualLabel);
  strcat(temp,actualLabel);
  strcpy((yyval.condicionval).codigo,temp);
  ;}
    break;

  case 70:
#line 606 "gramatica.y"
    { 
    char temp[10] = "goto ";
    newLabel();
    strcpy((yyval.condicionval).False,actualLabel);    
    pushFalse(&falsepila,actualLabel);
    strcat(temp,actualLabel);
    strcpy((yyval.condicionval).codigo,temp);
  ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2315 "gramatica.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 618 "gramatica.y"

void yyerror(char *s) {
	printf("Error: %s  %d\n ",s,yylval.line);
}

void init(){
  crearPilaTablaTipos(); //Crea la Pila De Tipos
  crearPilaTablaSimbolos(); //Crea la Pila de Simbolos
}

// Implementacion de funcion que busca un identificador en una Tabla de Simbolos
// Retorna -1 si no se encuentra;
int existeID(char* id, TablaSimbolos* t){
  int resultado = -1;
  for(int i = 0; i < llavesimbolos;i++){
    if(strcmp(id,t[i].lexema.tokens) == 0){
      //printf("omg ya existe\n");
      resultado = i;
    }
    //printf("%s ==? %s\n",id,t[i].lexema.tokens);
  }
  //printf("%d",resultado);
  return resultado;
}
// Procedimieto auxiliar que imprime una Tabla De Simbolos
void printTablaSimbolos(TablaSimbolos* t){
  printf("\t\t\tTabla De Simbolos\n");
  printf("id dir tipo tipo_var\n");
  int i = llavesimbolos;
  for(int j = 0; j < i ; j++){
    printf("%s %d %d %d\n",t[j].lexema.tokens,t[j].lexema.direccion,t[j].lexema.tipo,t[j].lexema.tipo_variable);
  }
}
