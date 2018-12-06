/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 57 "gramatica.y" /* yacc.c:1909  */

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


#line 148 "gramatica.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMATICA_TAB_H_INCLUDED  */
