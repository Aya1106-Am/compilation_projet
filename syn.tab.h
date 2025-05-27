
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     BEGINN = 258,
     END = 259,
     CONST = 260,
     INT = 261,
     BOOL = 262,
     IDF = 263,
     FLOAT = 264,
     FOR = 265,
     WHILE = 266,
     DO = 267,
     IF = 268,
     ELSE = 269,
     SWITCH = 270,
     CASE = 271,
     BREAK = 272,
     DEFAULT = 273,
     LIRE = 274,
     ECRIRE = 275,
     TRU = 276,
     FALS = 277,
     INTEGER_N = 278,
     FLOAT_N = 279,
     AF = 280,
     AO = 281,
     FP = 282,
     EQ = 283,
     OP = 284,
     DIV = 285,
     MUL = 286,
     SUB = 287,
     ADD = 288,
     AFF = 289,
     INF = 290,
     SUP = 291,
     DIFF = 292,
     EG = 293,
     SE = 294,
     IE = 295,
     INCR = 296,
     DEC = 297,
     VRG = 298,
     DP = 299,
     PVG = 300,
     SYMB = 301,
     PER = 302,
     D = 303,
     F = 304,
     STRG = 305
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 11 "syn.y"

int num;
float numf;
char* str;



/* Line 1676 of yacc.c  */
#line 110 "syn.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


