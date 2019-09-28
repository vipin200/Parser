
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
     SELECT = 258,
     DISTINCT = 259,
     AS = 260,
     FUNC = 261,
     COUNT = 262,
     FROM = 263,
     WHERE = 264,
     GROUP = 265,
     HAVING = 266,
     ORDER = 267,
     BY = 268,
     LIMIT = 269,
     ASC = 270,
     DESC = 271,
     ID = 272,
     LITERAL = 273,
     OR = 274,
     AND = 275,
     XOR = 276,
     NOT = 277,
     IS = 278,
     NUL = 279,
     ANY = 280,
     ALL = 281,
     CMP = 282,
     IN = 283,
     BETWEEN = 284,
     LIKE = 285,
     REG = 286,
     LS = 287,
     RS = 288,
     DIV = 289,
     MOD = 290,
     EXISTS = 291,
     BOOL = 292,
     INT = 293,
     FLOAT = 294,
     UMINUS = 295
   };
#endif
/* Tokens.  */
#define SELECT 258
#define DISTINCT 259
#define AS 260
#define FUNC 261
#define COUNT 262
#define FROM 263
#define WHERE 264
#define GROUP 265
#define HAVING 266
#define ORDER 267
#define BY 268
#define LIMIT 269
#define ASC 270
#define DESC 271
#define ID 272
#define LITERAL 273
#define OR 274
#define AND 275
#define XOR 276
#define NOT 277
#define IS 278
#define NUL 279
#define ANY 280
#define ALL 281
#define CMP 282
#define IN 283
#define BETWEEN 284
#define LIKE 285
#define REG 286
#define LS 287
#define RS 288
#define DIV 289
#define MOD 290
#define EXISTS 291
#define BOOL 292
#define INT 293
#define FLOAT 294
#define UMINUS 295




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


