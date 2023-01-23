/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    _SCAN = 258,                   /* _SCAN  */
    _PRINT = 259,                  /* _PRINT  */
    _IF = 260,                     /* _IF  */
    _ELSE = 261,                   /* _ELSE  */
    _COMMA = 262,                  /* _COMMA  */
    _SEMICOLON = 263,              /* _SEMICOLON  */
    _DOT = 264,                    /* _DOT  */
    _INT = 265,                    /* _INT  */
    _FLOAT = 266,                  /* _FLOAT  */
    _STRING = 267,                 /* _STRING  */
    _BOOL = 268,                   /* _BOOL  */
    _TABLEAU = 269,                /* _TABLEAU  */
    _NULL = 270,                   /* _NULL  */
    _FUNCTION = 271,               /* _FUNCTION  */
    _CONST = 272,                  /* _CONST  */
    _CLASS = 273,                  /* _CLASS  */
    _RETURN = 274,                 /* _RETURN  */
    _FOR = 275,                    /* _FOR  */
    _WHILE = 276,                  /* _WHILE  */
    _OPEN_PARENTHESIS = 277,       /* _OPEN_PARENTHESIS  */
    _CLOSE_PARENTHESIS = 278,      /* _CLOSE_PARENTHESIS  */
    _CURLY_OPEN_BRACKET = 279,     /* _CURLY_OPEN_BRACKET  */
    _CURLY_CLOSE_BRACKET = 280,    /* _CURLY_CLOSE_BRACKET  */
    _OPEN_BRACKET = 281,           /* _OPEN_BRACKET  */
    _CLOSE_BRACKET = 282,          /* _CLOSE_BRACKET  */
    _ID = 283,                     /* _ID  */
    _EQUAL = 284,                  /* _EQUAL  */
    _NON_EQUAL = 285,              /* _NON_EQUAL  */
    _AND = 286,                    /* _AND  */
    _OR = 287,                     /* _OR  */
    _NOT = 288,                    /* _NOT  */
    _INFERIOR = 289,               /* _INFERIOR  */
    _SUPERIOR = 290,               /* _SUPERIOR  */
    _INFERIOR_EQUAL = 291,         /* _INFERIOR_EQUAL  */
    _SUPERIOR_EQUAL = 292,         /* _SUPERIOR_EQUAL  */
    _ADD = 293,                    /* _ADD  */
    _SUB = 294,                    /* _SUB  */
    _MULT = 295,                   /* _MULT  */
    _DIV = 296,                    /* _DIV  */
    _MOD = 297,                    /* _MOD  */
    _POW = 298,                    /* _POW  */
    _ASSIGN = 299,                 /* _ASSIGN  */
    _INTVALUE = 300,               /* _INTVALUE  */
    _FLOATVALUE = 301,             /* _FLOATVALUE  */
    _BOOLVALUE = 302,              /* _BOOLVALUE  */
    _STRINGVALUE = 303,            /* _STRINGVALUE  */
    _VOID = 304                    /* _VOID  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "parser.y"

    int integer;
    float real;
    char string[255];
    struct Symbol* symbol;

#line 120 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
