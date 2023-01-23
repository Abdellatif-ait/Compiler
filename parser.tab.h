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
     _SCAN = 258,
     _PRINT = 259,
     _IF = 260,
     _ELSE = 261,
     _COMMA = 262,
     _SEMICOLON = 263,
     _DOT = 264,
     _INT = 265,
     _FLOAT = 266,
     _STRING = 267,
     _BOOL = 268,
     _TABLEAU = 269,
     _NULL = 270,
     _FUNCTION = 271,
     _CONST = 272,
     _CLASS = 273,
     _RETURN = 274,
     _FOR = 275,
     _WHILE = 276,
     _OPEN_PARENTHESIS = 277,
     _CLOSE_PARENTHESIS = 278,
     _CURLY_OPEN_BRACKET = 279,
     _CURLY_CLOSE_BRACKET = 280,
     _OPEN_BRACKET = 281,
     _CLOSE_BRACKET = 282,
     _ID = 283,
     _EQUAL = 284,
     _NON_EQUAL = 285,
     _AND = 286,
     _OR = 287,
     _NOT = 288,
     _INFERIOR = 289,
     _SUPERIOR = 290,
     _INFERIOR_EQUAL = 291,
     _SUPERIOR_EQUAL = 292,
     _ADD = 293,
     _SUB = 294,
     _MULT = 295,
     _DIV = 296,
     _MOD = 297,
     _POW = 298,
     _ASSIGN = 299,
     _INTVALUE = 300,
     _FLOATVALUE = 301,
     _BOOLVALUE = 302,
     _STRINGVALUE = 303,
     _VOID = 304
   };
#endif
/* Tokens.  */
#define _SCAN 258
#define _PRINT 259
#define _IF 260
#define _ELSE 261
#define _COMMA 262
#define _SEMICOLON 263
#define _DOT 264
#define _INT 265
#define _FLOAT 266
#define _STRING 267
#define _BOOL 268
#define _TABLEAU 269
#define _NULL 270
#define _FUNCTION 271
#define _CONST 272
#define _CLASS 273
#define _RETURN 274
#define _FOR 275
#define _WHILE 276
#define _OPEN_PARENTHESIS 277
#define _CLOSE_PARENTHESIS 278
#define _CURLY_OPEN_BRACKET 279
#define _CURLY_CLOSE_BRACKET 280
#define _OPEN_BRACKET 281
#define _CLOSE_BRACKET 282
#define _ID 283
#define _EQUAL 284
#define _NON_EQUAL 285
#define _AND 286
#define _OR 287
#define _NOT 288
#define _INFERIOR 289
#define _SUPERIOR 290
#define _INFERIOR_EQUAL 291
#define _SUPERIOR_EQUAL 292
#define _ADD 293
#define _SUB 294
#define _MULT 295
#define _DIV 296
#define _MOD 297
#define _POW 298
#define _ASSIGN 299
#define _INTVALUE 300
#define _FLOATVALUE 301
#define _BOOLVALUE 302
#define _STRINGVALUE 303
#define _VOID 304




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 16 "parser.y"
{
    int integer;
    float real;
    char string[255];
    struct Symbol* symbol;
}
/* Line 1529 of yacc.c.  */
#line 154 "parser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

