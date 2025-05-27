
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
     DEFAULT = 260,
     CASE = 261,
     SWITCH = 262,
     BREAK = 263,
     LIRE = 264,
     ECRIRE = 265,
     CONST = 266,
     INT = 267,
     BOOL = 268,
     IDF = 269,
     FLOAT = 270,
     FOR = 271,
     WHILE = 272,
     DO = 273,
     IF = 274,
     ELSE = 275,
     TRU = 276,
     FALS = 277,
     INTEGER_N = 278,
     FLOAT_N = 279,
     F = 280,
     D = 281,
     PER = 282,
     SYMB = 283,
     TURN = 284,
     FUNC = 285,
     VOID = 286,
     AF = 287,
     AO = 288,
     FP = 289,
     EQ = 290,
     OP = 291,
     DIV = 292,
     MUL = 293,
     SUB = 294,
     ADD = 295,
     MOD = 296,
     PUI = 297,
     AFF = 298,
     INF = 299,
     SUP = 300,
     DIFF = 301,
     EG = 302,
     SE = 303,
     IE = 304,
     INCR = 305,
     DEC = 306,
     VRG = 307,
     PVG = 308,
     DP = 309
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 15 "QL.y"
  
int num;  
float numf;  
char* str;  



/* Line 1676 of yacc.c  */
#line 114 "QL.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


