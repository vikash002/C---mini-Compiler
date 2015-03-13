/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
     INT = 258,
     FLOAT = 259,
     CHAR = 260,
     DOUBLE = 261,
     VOID = 262,
     FOR = 263,
     WHILE = 264,
     IF = 265,
     ELSE = 266,
     PRINTF = 267,
     STRUCT = 268,
     NUM = 269,
     ID = 270,
     INCLUDE = 271,
     DOT = 272,
     OR = 273,
     AND = 274,
     GT = 275,
     LT = 276,
     NE = 277,
     EQ = 278,
     GE = 279,
     LE = 280
   };
#endif
/* Tokens.  */
#define INT 258
#define FLOAT 259
#define CHAR 260
#define DOUBLE 261
#define VOID 262
#define FOR 263
#define WHILE 264
#define IF 265
#define ELSE 266
#define PRINTF 267
#define STRUCT 268
#define NUM 269
#define ID 270
#define INCLUDE 271
#define DOT 272
#define OR 273
#define AND 274
#define GT 275
#define LT 276
#define NE 277
#define EQ 278
#define GE 279
#define LE 280




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


