/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 57 "gramatica.y"
{
    struct{
     char*numero;
     int direccion;
     int type;
    }numero;
    char *id;
    int line;
    struct {
      char codigo[250];
    }codigo;
    struct {
      int type;
    }type;
    struct {
      char True[50];
      char False[50];
      char codigo[50];
      int direccion;
    }condicionval;
    struct {
      char Next[50];
      int tipo;
      char codigo[100];
    }sentenciasval;
    struct{
      int type;
      char codigo[100];
      int direccion;
      char temporal[10];
    }exprval;
    struct {
      int direccion;
      int type;
    }p_izq;

}
/* Line 1529 of yacc.c.  */
#line 191 "gramatica.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

