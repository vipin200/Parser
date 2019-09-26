
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
     W = 258,
     SELECT = 259,
     DISTINCT = 260,
     AS = 261,
     FUNC = 262,
     COUNT = 263,
     FROM = 264,
     WHERE = 265,
     GROUP = 266,
     HAVING = 267,
     ORDER = 268,
     BY = 269,
     LIMIT = 270,
     ASC = 271,
     DESC = 272,
     NUM = 273,
     ID = 274,
     LITERAL = 275,
     OR = 276,
     AND = 277,
     XOR = 278,
     NOT = 279,
     IS = 280,
     NUL = 281,
     ANY = 282,
     ALL = 283,
     LE = 284,
     GE = 285,
     NE = 286,
     IN = 287,
     BETWEEN = 288,
     LIKE = 289,
     REG = 290,
     LS = 291,
     RS = 292,
     DIV = 293,
     MOD = 294,
     EXISTS = 295,
     TRUE = 296,
     FALSE = 297,
     UNKNOWN = 298,
     UNARY = 299,
     EQ = 300
   };
#endif
/* Tokens.  */
#define W 258
#define SELECT 259
#define DISTINCT 260
#define AS 261
#define FUNC 262
#define COUNT 263
#define FROM 264
#define WHERE 265
#define GROUP 266
#define HAVING 267
#define ORDER 268
#define BY 269
#define LIMIT 270
#define ASC 271
#define DESC 272
#define NUM 273
#define ID 274
#define LITERAL 275
#define OR 276
#define AND 277
#define XOR 278
#define NOT 279
#define IS 280
#define NUL 281
#define ANY 282
#define ALL 283
#define LE 284
#define GE 285
#define NE 286
#define IN 287
#define BETWEEN 288
#define LIKE 289
#define REG 290
#define LS 291
#define RS 292
#define DIV 293
#define MOD 294
#define EXISTS 295
#define TRUE 296
#define FALSE 297
#define UNKNOWN 298
#define UNARY 299
#define EQ 300




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


