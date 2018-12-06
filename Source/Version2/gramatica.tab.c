/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 30 "gramatica.y" /* yacc.c:339  */

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
extern int yylex();
extern int yylineno();
int tipo;
int direccion = 0;
int llavesimbolos = 0;
int reskey;
int toptipo = 5;
int var_temporales = 0;
// VARIABLES GLOBALES


#line 93 "gramatica.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "gramatica.tab.h".  */
#ifndef YY_YY_GRAMATICA_TAB_H_INCLUDED
# define YY_YY_GRAMATICA_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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
    IGUAL = 290,
    DISTINTO = 291,
    GT = 292,
    LT = 293,
    LE = 294,
    GE = 295,
    MAS = 296,
    MENOS = 297,
    MUL = 298,
    DIV = 299,
    MOD = 300,
    LPAR = 301,
    RPAR = 302,
    RKEY = 303,
    LKEY = 304,
    LCOR = 305,
    RCOR = 306,
    IFX = 307
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 57 "gramatica.y" /* yacc.c:355  */

    struct{
     char*numero;
     int direccion;
     int type;
    }numero;
    char *id;
    int line;
    struct {
      char codigo[1050];
    }codigo;
    struct {
      int type;
    }type;
    struct {
      char True[50];
      char False[50];
      char codigo[500];
      int direccion;
    }condicionval;
    struct {
      char Next[50];
      int tipo;
      char codigo[500];
    }sentenciasval;
    struct{
      int type;
      char codigo[500];
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


#line 227 "gramatica.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMATICA_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 244 "gramatica.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   242

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  171

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   138,   138,   140,   138,   143,   143,   144,   144,   144,
     145,   145,   146,   160,   176,   191,   192,   215,   192,   217,
     218,   218,   219,   219,   222,   222,   223,   224,   228,   228,
     237,   237,   242,   243,   244,   245,   256,   267,   270,   271,
     272,   273,   274,   274,   275,   275,   276,   305,   305,   305,
     306,   306,   307,   327,   347,   367,   387,   407,   408,   409,
     410,   416,   417,   447,   450,   453,   456,   475,   479,   486,
     494,   494,   495,   495,   496,   496,   496,   496,   496,   496
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "DOUBLE", "CHAR", "VOID",
  "STRUCT", "IF", "DO", "WHILE", "FOR", "SWICH", "CASE", "BREAK",
  "DEFAULT", "ELSE", "RETURN", "PRINT", "COMA", "PYC", "DP", "PTO", "ID",
  "FUNC", "CADENA", "CARACTER", "NUMERO", "TRUE", "FALSE", "ASIG", "NEG",
  "OR", "AND", "IGUAL", "DISTINTO", "GT", "LT", "LE", "GE", "MAS", "MENOS",
  "MUL", "DIV", "MOD", "LPAR", "RPAR", "RKEY", "LKEY", "LCOR", "RCOR",
  "IFX", "$accept", "programa", "$@1", "$@2", "declaraciones", "tipo",
  "lista", "arreglo", "funciones", "$@3", "$@4", "argumentos",
  "lista_argumentos", "parte_arreglo", "sentencias", "sentencia", "$@5",
  "$@6", "casos", "predeterminado", "parte_izq", "var_arreglo",
  "expresion", "condicion", "parametros", "lista_param", "rel", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
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

#define YYPACT_NINF -52

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-52)))

#define YYTABLE_NINF -50

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -52,     2,   223,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
      -4,    15,   -27,    38,   223,   -52,    21,   -52,    52,   223,
      54,    24,   -27,   -52,   -52,   -27,   -52,    33,   -52,   223,
      59,    55,    79,    53,    56,   223,    62,   -52,   223,    85,
      53,   133,    53,   -52,    64,   133,    72,    75,    84,   111,
      -2,    58,   -20,   133,    90,   116,   102,    89,   -52,   132,
     130,   132,   133,    58,   -52,   -52,   -35,   -52,   -52,   -52,
      58,    89,    10,    46,   125,    58,   105,   -52,   -52,    58,
      58,   -52,   -52,   132,   132,   131,    40,   108,     9,   134,
     171,    58,   178,   -52,    58,    58,    58,    58,    58,   -52,
     -52,   155,   -52,    15,    51,   160,    40,   148,    73,   -52,
     -52,   -52,   -52,   -52,   -52,    58,   132,   132,   147,   161,
     132,   133,   132,   114,   190,   162,   157,   -52,    -6,    -6,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   190,   145,
     -52,   133,   133,   103,   -52,    14,   166,   -52,    58,   -52,
     164,   186,   133,   182,   201,   190,   133,   -52,   177,   214,
     215,   191,   -52,   133,   133,   133,   -52,   -52,   166,   -52,
     -52
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     6,     1,     7,     8,     9,    10,    11,     3,
       0,    19,    15,     0,     0,     4,     0,    13,     0,     6,
       0,     0,    15,     5,    16,    15,    12,     0,    14,    21,
       0,     0,    20,    25,     0,     0,     0,    23,     6,     0,
      25,    49,    25,    24,     0,    49,     0,     0,     0,     0,
       0,     0,    46,    49,     0,    27,     0,    47,    22,     0,
       0,     0,    49,     0,    40,    37,     0,    59,    61,    60,
       0,    58,     0,     0,     0,     0,     0,    17,    26,     0,
       0,    68,    69,     0,     0,     0,    28,     0,     0,     0,
       0,    70,     0,    36,     0,     0,     0,     0,     0,    41,
      48,     0,    38,    19,     0,     0,    65,     0,     0,    79,
      78,    74,    75,    77,    76,     0,     0,     0,     0,     0,
       0,    49,     0,     0,    73,     0,    71,    57,    52,    53,
      54,    55,    56,    50,    18,    35,    51,    67,    66,    63,
      64,    49,    49,     0,    32,     0,    43,    62,     0,    29,
       0,     0,    49,     0,    45,    72,    49,    33,     0,     0,
       0,     0,    31,    49,    49,    49,    39,    34,    43,    44,
      42
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -52,   -52,   -52,   -52,   -11,    -1,   -52,   -16,   135,   -52,
     -52,   -52,   -52,    28,   -48,   -44,   -52,   -52,    74,   -52,
     -52,   -41,   -34,   -51,   -52,   -52,   -52
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    11,     9,    10,    13,    17,    15,    27,
     103,    31,    32,    37,    54,    55,   118,   119,   154,   161,
      56,    71,    85,    86,   125,   126,   115
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,    60,     3,    74,    57,    76,    26,    78,    23,    28,
      88,    91,    57,    20,    57,    75,    72,    73,    89,    65,
      12,    57,    66,    16,    67,    68,    69,    41,    30,    90,
      75,    93,   106,   108,    39,   152,    92,    96,    97,    98,
      14,   101,   116,   117,    70,   104,   105,   116,   117,    21,
     107,    94,    95,    96,    97,    98,   121,   124,    18,    19,
     128,   129,   130,   131,   132,   139,   140,    99,    43,   143,
      58,   145,   135,   116,   117,    25,    22,   144,    24,    29,
      57,   138,    66,    33,    67,    68,    69,    94,    95,    96,
      97,    98,    94,    95,    96,    97,    98,   149,   150,    35,
      57,    57,    34,    36,    70,    38,   116,   117,   158,    42,
      59,    57,   162,    40,   155,    57,   168,   169,    61,   167,
     137,    62,    57,    57,    57,    44,    45,    46,    47,    48,
      63,    49,    64,    79,    50,    51,   116,   117,    77,    80,
      52,    87,    44,    45,    46,    47,    48,   -49,    49,   100,
     151,    50,    51,   102,   120,   122,    66,    52,    67,    68,
      69,    81,    82,   146,    83,    53,   109,   110,   111,   112,
     113,   114,    94,    95,    96,    97,    98,   148,    84,   117,
     153,   156,    53,   109,   110,   111,   112,   113,   114,    94,
      95,    96,    97,    98,   141,   127,    94,    95,    96,    97,
      98,    94,    95,    96,    97,    98,   133,   157,   142,   147,
     159,   136,    94,    95,    96,    97,    98,   160,   123,    94,
      95,    96,    97,    98,   163,   127,     4,     5,     6,     7,
       8,    94,    95,    96,    97,    98,   164,   165,   134,   166,
       0,     0,   170
};

static const yytype_int16 yycheck[] =
{
      41,    45,     0,    23,    45,    53,    22,    55,    19,    25,
      61,    46,    53,    14,    55,    50,    50,    51,    62,    21,
      24,    62,    24,    50,    26,    27,    28,    38,    29,    63,
      50,    21,    83,    84,    35,    21,    70,    43,    44,    45,
      25,    75,    33,    34,    46,    79,    80,    33,    34,    28,
      84,    41,    42,    43,    44,    45,    47,    91,    20,    21,
      94,    95,    96,    97,    98,   116,   117,    21,    40,   120,
      42,   122,    21,    33,    34,    51,    24,   121,    24,    46,
     121,   115,    24,    24,    26,    27,    28,    41,    42,    43,
      44,    45,    41,    42,    43,    44,    45,   141,   142,    20,
     141,   142,    47,    50,    46,    49,    33,    34,   152,    24,
      46,   152,   156,    51,   148,   156,   164,   165,    46,   163,
      47,    46,   163,   164,   165,     9,    10,    11,    12,    13,
      46,    15,    21,    31,    18,    19,    33,    34,    48,    50,
      24,    11,     9,    10,    11,    12,    13,    31,    15,    24,
      47,    18,    19,    48,    46,    21,    24,    24,    26,    27,
      28,    29,    30,    49,    32,    49,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    20,    46,    34,
      14,    17,    49,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    47,    47,    41,    42,    43,    44,
      45,    41,    42,    43,    44,    45,    51,    21,    47,    47,
      28,    51,    41,    42,    43,    44,    45,    16,    47,    41,
      42,    43,    44,    45,    47,    47,     3,     4,     5,     6,
       7,    41,    42,    43,    44,    45,    22,    22,   103,    48,
      -1,    -1,   168
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    54,    55,     0,     3,     4,     5,     6,     7,    57,
      58,    56,    24,    59,    25,    61,    50,    60,    20,    21,
      58,    28,    24,    57,    24,    51,    60,    62,    60,    46,
      58,    64,    65,    24,    47,    20,    50,    66,    49,    58,
      51,    57,    24,    66,     9,    10,    11,    12,    13,    15,
      18,    19,    24,    49,    67,    68,    73,    74,    66,    46,
      68,    46,    46,    46,    21,    21,    24,    26,    27,    28,
      46,    74,    75,    75,    23,    50,    67,    48,    67,    31,
      50,    29,    30,    32,    46,    75,    76,    11,    76,    68,
      75,    46,    75,    21,    41,    42,    43,    44,    45,    21,
      24,    75,    48,    63,    75,    75,    76,    75,    76,    35,
      36,    37,    38,    39,    40,    79,    33,    34,    69,    70,
      46,    47,    21,    47,    75,    77,    78,    47,    75,    75,
      75,    75,    75,    51,    61,    21,    51,    47,    75,    76,
      76,    47,    47,    76,    68,    76,    49,    47,    20,    68,
      68,    47,    21,    14,    71,    75,    17,    21,    68,    28,
      16,    72,    68,    47,    22,    22,    48,    68,    67,    67,
      71
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    55,    56,    54,    57,    57,    58,    58,    58,
      58,    58,    59,    59,    60,    60,    62,    63,    61,    61,
      64,    64,    65,    65,    66,    66,    67,    67,    69,    68,
      70,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    71,    71,    72,    72,    73,    73,    73,    73,
      74,    74,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    76,    76,    76,    76,    76,    76,    76,
      77,    77,    78,    78,    79,    79,    79,    79,    79,    79
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     4,     4,     0,     1,     1,     1,
       1,     1,     4,     2,     4,     0,     0,     0,    13,     0,
       1,     0,     5,     3,     3,     0,     2,     1,     0,     6,
       0,     8,     5,     7,     9,     4,     3,     2,     3,     8,
       2,     3,     5,     0,     3,     0,     1,     1,     3,     0,
       4,     4,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     4,     3,     3,     2,     3,     3,     1,     1,
       0,     1,     3,     1,     1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 138 "gramatica.y" /* yacc.c:1646  */
    {
  direccion = 0;
  init();}
#line 1454 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 140 "gramatica.y" /* yacc.c:1646  */
    {
    printf("Aquí comienza el analicis de funciones\n");
  }
#line 1462 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 143 "gramatica.y" /* yacc.c:1646  */
    {printf("Fin De declaraciones\n");}
#line 1468 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 144 "gramatica.y" /* yacc.c:1646  */
    { (yyval.type).type = 0; tipo = 0;}
#line 1474 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 144 "gramatica.y" /* yacc.c:1646  */
    {(yyval.type).type = 1; tipo = 1;}
#line 1480 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 144 "gramatica.y" /* yacc.c:1646  */
    {(yyval.type).type = 2; tipo = 2;}
#line 1486 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 145 "gramatica.y" /* yacc.c:1646  */
    {(yyval.type).type = 3; tipo = 3;}
#line 1492 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 145 "gramatica.y" /* yacc.c:1646  */
    {(yyval.type).type = 4; tipo = 4;}
#line 1498 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 146 "gramatica.y" /* yacc.c:1646  */
    {
 printf("Añadiendo Simbolo: %s\n", (yyvsp[-1].id));
 //$$.type = $4.type;
 Lexema l;
 TablaTipos * t; 
 t = topTipos(tipos); 
 TablaSimbolos * tablasim = crearTablaSimbolos();
 tablasim = topSimbolos(simbolos);
 char * tempid = malloc(sizeof(char*));
 strcpy(tempid,(yyvsp[-1].id));
 l = crearLexema((yyvsp[0].type).type,tempid,direccion,variable,NULL); // Nuevo Lexema
 llavesimbolos = addSimbolo(llavesimbolos,l,tablasim); // Añadimos simbolo a la tabla de simbolos
 free(yylval.id);
 direccion = direccion + t[(yyvsp[0].type).type].tipo.dim;
}
#line 1518 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 160 "gramatica.y" /* yacc.c:1646  */
    {
 printf("Añadiendo Simbolo : %s\n",(yyvsp[-1].id));
 //$$.type = $2.type;
 Lexema l;
 TablaTipos * t; 
 t = topTipos(tipos);
 TablaSimbolos * tablasim = crearTablaSimbolos();
 tablasim = topSimbolos(simbolos); 
 //printf("%i\n",t[tipo].tipo.tipo);
 char * tempid = malloc(sizeof(char*));
 strcpy(tempid,(yyvsp[-1].id));
 l = crearLexema((yyvsp[0].type).type,tempid,direccion,variable,NULL); // Nuevo Lexema
 llavesimbolos = addSimbolo(llavesimbolos,l,tablasim); // Añadimos simbolo a la tabla de simbolos
 free(yylval.id);
 direccion = direccion + t[(yyvsp[0].type).type].tipo.dim;
}
#line 1539 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 176 "gramatica.y" /* yacc.c:1646  */
    {
  int dimarr ;
  TablaTipos * t = topTipos(tipos);
  int n = atoi((yyvsp[-2].numero).numero);
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
}
#line 1560 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 191 "gramatica.y" /* yacc.c:1646  */
    {(yyval.type).type = tipo;}
#line 1566 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 192 "gramatica.y" /* yacc.c:1646  */
    {
  crearSalidaIntermedia();
  //Buscamos en la tabla de simbolos
  char * tempid = malloc(sizeof(char*));
  strcpy(tempid,(yyvsp[0].id));
  int existe = 0;
  TablaSimbolos * last = topSimbolos(simbolos);
  existe = existeID(tempid,last);
  if(existe == 0){
    // Se crea una tabla de simbolos;
    reskey = llavesimbolos;
    llavesimbolos = 0;
    TablaSimbolos * FTS = crearTablaSimbolos();
    pushSimbolo(&simbolos,FTS);
    //escribirCodigo(tempid,":","","");
    newLabel();
    pushNext(&nextpila,actualLabel);
    escribirCodigo(tempid,"","",actualLabel);

  }else{
    yyerror("ID Duplicado, se necesita cambiar el identificador de la funcion");
    exit(-1);
  }
}
#line 1595 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 215 "gramatica.y" /* yacc.c:1646  */
    {
  // Salimos de la tabla de simbolos de la funcion :3
  popSimbolos(&simbolos);}
#line 1603 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 217 "gramatica.y" /* yacc.c:1646  */
    { printf("Exito!\n");}
#line 1609 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 218 "gramatica.y" /* yacc.c:1646  */
    { strcpy((yyval.codigo).codigo,(yyvsp[0].codigo).codigo);}
#line 1615 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 218 "gramatica.y" /* yacc.c:1646  */
    {}
#line 1621 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 219 "gramatica.y" /* yacc.c:1646  */
    {
  TablaSimbolos * t = crearTablaSimbolos();
}
#line 1629 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 223 "gramatica.y" /* yacc.c:1646  */
    { 
  }
#line 1636 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 224 "gramatica.y" /* yacc.c:1646  */
    {
  printf("%s\n",(yyvsp[0].sentenciasval).codigo);
  escribirCodigo((yyvsp[0].sentenciasval).codigo,"","","");
  }
#line 1645 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 228 "gramatica.y" /* yacc.c:1646  */
    {
  newLabel();
  strcpy((yyvsp[0].condicionval).True,actualLabel);
  pushTrue(&truepila,actualLabel);
  }
#line 1655 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 232 "gramatica.y" /* yacc.c:1646  */
    {
    char c[25];
   // strcpy(c,$5.codigo);
    printf("SIGO CON LO MIO");
  }
#line 1665 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 237 "gramatica.y" /* yacc.c:1646  */
    {
  newLabel();
  strcpy((yyvsp[0].condicionval).True,actualLabel);
  pushTrue(&truepila,actualLabel);
  }
#line 1675 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 245 "gramatica.y" /* yacc.c:1646  */
    { 
    //printf("%d\n",$1.direccion);
    //printf("%s\n",$3.temporal);
    char c[10];
    char cod[50];
    sprintf(c,"t%d := ",var_temporales);
    strcat(cod,c);
    strcat(cod,(yyvsp[-1].exprval).temporal);
    strcpy((yyval.sentenciasval).codigo,cod);
    printf("Se realizo operacion\n");
  }
#line 1691 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 256 "gramatica.y" /* yacc.c:1646  */
    {
    printf("Retornando\n");
    char c[100] ="";
    char ds[10];
    strcat(c,"return ");
    sprintf(ds, "%dD ", (yyvsp[-1].exprval).direccion);
    strcat(c,ds); 
    strcat(c,"goto ");
    strcat(c,actualLabel);
    strcpy((yyval.sentenciasval).codigo,c);
    }
#line 1707 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 267 "gramatica.y" /* yacc.c:1646  */
    { 
    char c[50] = "return goto "; strcat(c,popNext(&nextpila)); strcpy((yyval.sentenciasval).codigo,c);
    }
#line 1715 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 276 "gramatica.y" /* yacc.c:1646  */
    {
  //printf("%s\n",$1);
  // Buscamos en la tabla de simbolos global
  int existe = 0;
  int j = 0;
  for(int i = 0; i < reskey ; i++){
    //printf("%s\n",tablasim_global[i].lexema.tokens);
    if(strcmp((yyvsp[0].id),tablasim_global[i].lexema.tokens) == 0){
      printf("%s encontrado en la tabla global de simbolos\n",(yyvsp[0].id));
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
    int r = existeID((yyvsp[0].id),t);
    if( r >= 1){
     int a = t[r].lexema.direccion;
     (yyval.p_izq).direccion = a;
    }else{
      printf("No se ha declarado el id: %s\n", (yyvsp[0].id));
      exit(-1);
    }
  }
}
#line 1750 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 307 "gramatica.y" /* yacc.c:1646  */
    {
  if((yyvsp[-2].exprval).type == (yyvsp[0].exprval).type){
    char c[100];
    char t[10];
    sprintf(t, "t%d", var_temporales);
    strcpy((yyval.exprval).temporal,t);
    sprintf(t, "t%d := ", var_temporales);
    strcat(c,t);
    sprintf(t,"%dD + ",(yyvsp[-2].exprval).direccion);
    strcat(c,t);
    sprintf(t,"%dD\n",(yyvsp[0].exprval).direccion);
    strcat(c,t);
    strcpy((yyval.exprval).codigo,c);
    escribirCodigo(c,"","","");
    var_temporales++;
  }else{
    printf("Error no son del mismo tipo\n");
    exit(-1);
  }
   
}
#line 1776 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 327 "gramatica.y" /* yacc.c:1646  */
    {
  if((yyvsp[-2].exprval).type == (yyvsp[0].exprval).type){
    char c[100];
    char t[10];
    sprintf(t, "t%d", var_temporales);
    strcpy((yyval.exprval).temporal,t);
    sprintf(t, "t%d := ", var_temporales);
    strcat(c,t);
    sprintf(t,"%dD - ",(yyvsp[-2].exprval).direccion);
    strcat(c,t);
    sprintf(t,"%dD \n",(yyvsp[0].exprval).direccion);
    strcat(c,t);
    strcpy((yyval.exprval).codigo,c);
    escribirCodigo(c,"","","");
    var_temporales++;
  }else{
    printf("Error no son del mismo tipo\n");
    exit(-1);
  }
}
#line 1801 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 347 "gramatica.y" /* yacc.c:1646  */
    {
    if((yyvsp[-2].exprval).type == (yyvsp[0].exprval).type){
    char c[100];
    char t[10];
    sprintf(t, "t%d", var_temporales);
    strcpy((yyval.exprval).temporal,t);
    sprintf(t, "t%d := ", var_temporales);
    strcat(c,t);
    sprintf(t,"%dD * ",(yyvsp[-2].exprval).direccion);
    strcat(c,t);
    sprintf(t,"%dD \n",(yyvsp[0].exprval).direccion);
    strcat(c,t);
    strcpy((yyval.exprval).codigo,c);
    escribirCodigo(c,"","","");
    var_temporales++;
  }else{
    printf("Error no son del mismo tipo\n");
    exit(-1);
  }
  }
#line 1826 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 367 "gramatica.y" /* yacc.c:1646  */
    {
  if((yyvsp[-2].exprval).type == (yyvsp[0].exprval).type){
    char c[100];
    char t[10];
    sprintf(t, "t%d", var_temporales);
    strcpy((yyval.exprval).temporal,t);
    sprintf(t, "t%d := ", var_temporales);
    strcat(c,t);
    sprintf(t,"%dD / ",(yyvsp[-2].exprval).direccion);
    strcat(c,t);
    sprintf(t,"%dD \n",(yyvsp[0].exprval).direccion);
    strcat(c,t);
    strcpy((yyval.exprval).codigo,c);
    escribirCodigo(c,"","","");
    var_temporales++;
  }else{
    printf("Error no son del mismo tipo\n");
    exit(-1);
   }
  }
#line 1851 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 387 "gramatica.y" /* yacc.c:1646  */
    {
  if((yyvsp[-2].exprval).type == (yyvsp[0].exprval).type){
    char c[100];
    char t[10];
    sprintf(t, "t%d", var_temporales);
    strcpy((yyval.exprval).temporal,t);
    sprintf(t, "t%d := ", var_temporales);
    strcat(c,t);
    sprintf(t,"%dD % ",(yyvsp[-2].exprval).direccion);
    strcat(c,t);
    sprintf(t,"%dD \n",(yyvsp[0].exprval).direccion);
    strcat(c,t);
    strcpy((yyval.exprval).codigo,c);
    escribirCodigo(c,"","","");
    var_temporales++;
  }else{
    printf("Error no son del mismo tipo\n");
    exit(-1);
  }
}
#line 1876 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 410 "gramatica.y" /* yacc.c:1646  */
    { 
    (yyvsp[0].numero).direccion =  direccion + 4;
    direccion = direccion + 4 ;
    (yyval.exprval).direccion = (yyvsp[0].numero).direccion;
    (yyval.exprval).type = (yyvsp[0].numero).type;
    }
#line 1887 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 417 "gramatica.y" /* yacc.c:1646  */
    {
    //printf("%s\n",$1);
  // Buscamos en la tabla de simbolos global
  int existe = 0;
  int j = 0;
  for(int i = 0; i < reskey ; i++){
    //printf("%s\n",tablasim_global[i].lexema.tokens);
    if(strcmp((yyvsp[-3].id),tablasim_global[i].lexema.tokens) == 0){
      printf("%s encontrado en la tabla global de simbolos\n",(yyvsp[-3].id));
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
    int r = existeID((yyvsp[-3].id),t);
    if( r >= 1){
     int a = t[r].lexema.direccion;
     (yyval.exprval).direccion = a;
    }else{
      printf("No se ha declarado el id: %s\n", (yyvsp[-3].id));
      exit(-1);
    }
  }
  }
#line 1922 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 447 "gramatica.y" /* yacc.c:1646  */
    {

  }
#line 1930 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 450 "gramatica.y" /* yacc.c:1646  */
    {

  }
#line 1938 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 453 "gramatica.y" /* yacc.c:1646  */
    {

  }
#line 1946 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 456 "gramatica.y" /* yacc.c:1646  */
    {
  newLabel();
  strcpy((yyval.condicionval).True,actualLabel);
  newLabel();
  strcpy((yyval.condicionval).False,actualLabel);
  char c[200];
  char aux[50];
  strcat(c,(yyvsp[-2].exprval).codigo);
  strcat(c," ");
  strcat(c,(yyvsp[0].exprval).codigo);
  strcat(c," ");
  sprintf(aux,"\n if %d %s %d goto %s\n",(yyvsp[-2].exprval).direccion,(yyvsp[-1].relacionalop).operador,(yyvsp[0].exprval).direccion,(yyval.condicionval).True);
  strcat(c,aux);
  sprintf(aux,"goto %s\n",(yyval.condicionval).False);
  strcat(c,aux);
  strcpy((yyval.condicionval).codigo,c);
  escribirCodigo(c,"","","");

  }
#line 1970 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 475 "gramatica.y" /* yacc.c:1646  */
    {
    (yyval.condicionval).direccion = (yyvsp[-1].condicionval).direccion;
    strcpy((yyval.condicionval).codigo,(yyvsp[-1].condicionval).codigo);
  }
#line 1979 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 479 "gramatica.y" /* yacc.c:1646  */
    {
  char temp[10] = "goto ";  
  newLabel();
  strcpy((yyval.condicionval).True,actualLabel);
  pushTrue(&truepila,actualLabel);
  strcat(temp,actualLabel);
  strcpy((yyval.condicionval).codigo,temp);
  }
#line 1992 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 486 "gramatica.y" /* yacc.c:1646  */
    { 
    char temp[10] = "goto ";
    newLabel();
    strcpy((yyval.condicionval).False,actualLabel);    
    pushFalse(&falsepila,actualLabel);
    strcat(temp,actualLabel);
    strcpy((yyval.condicionval).codigo,temp);
  }
#line 2005 "gramatica.tab.c" /* yacc.c:1646  */
    break;


#line 2009 "gramatica.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 498 "gramatica.y" /* yacc.c:1906  */

void yyerror(char *s) {
	printf("Error: %s  %d\n ",s,yylval.line);
}

void init(){
  crearPilaTablaTipos(); //Crea la Pila De Tipos
  crearPilaTablaSimbolos(); //Crea la Pila de Simbolos
}
int existeID(char* id, TablaSimbolos* t){
  int resultado = 0;
  for(int i = 0; i < llavesimbolos;i++){
    if(strcmp(id,t[i].lexema.tokens) == 0){
      //printf("omg ya existe\n");
      resultado = i;
    }
    //printf("%s ==? %s\n",id,t[i].lexema.tokens);
  }
  return resultado;
}
