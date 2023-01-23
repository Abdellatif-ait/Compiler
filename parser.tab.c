/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include "tableSymbol.h"
#include "quad.h"



int yylex();
int yyerror();



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 16 "parser.y"
{
    int integer;
    float real;
    char string[255];
    struct Symbol* symbol;
}
/* Line 193 of yacc.c.  */
#line 217 "parser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 230 "parser.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  73
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   673

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNRULES -- Number of states.  */
#define YYNSTATES  180

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    11,    13,    15,    17,    19,
      21,    23,    25,    27,    29,    31,    33,    35,    43,    52,
      57,    61,    73,    81,    90,   100,   102,   104,   106,   108,
     110,   112,   116,   120,   122,   125,   130,   135,   137,   143,
     146,   149,   152,   155,   158,   161,   166,   171,   176,   181,
     186,   191,   196,   200,   204,   208,   212,   216,   220,   224,
     228,   232,   236,   240,   244,   248,   252,   256,   259,   261,
     263,   265,   267,   269,   271,   275,   277,   279,   284,   288,
     292,   297,   302,   307,   311
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      51,     0,    -1,    51,    52,    -1,    52,    -1,    53,     8,
      -1,    67,    -1,    55,    -1,    56,    -1,    57,    -1,    58,
      -1,    59,    -1,    62,    -1,    63,    -1,    64,    -1,    65,
      -1,    66,    -1,    54,    -1,     5,    22,    68,    23,    24,
      51,    25,    -1,     5,    22,    68,    23,    24,    51,    25,
      55,    -1,     6,    24,    51,    25,    -1,    28,    44,    68,
      -1,    20,    22,    67,     8,    68,     8,    68,    23,    24,
      51,    25,    -1,    21,    22,    68,    23,    24,    51,    25,
      -1,    16,    60,    28,    22,    23,    24,    51,    25,    -1,
      16,    60,    28,    22,    61,    23,    24,    51,    25,    -1,
      10,    -1,    11,    -1,    12,    -1,    13,    -1,    49,    -1,
      67,    -1,    61,     7,    67,    -1,    61,     7,    28,    -1,
      28,    -1,    19,    68,    -1,     4,    22,    68,    23,    -1,
       3,    22,    28,    23,    -1,    68,    -1,    18,    28,    24,
      51,    25,    -1,    10,    28,    -1,    11,    28,    -1,    12,
      28,    -1,    13,    28,    -1,    14,    28,    -1,    28,    28,
      -1,    10,    28,    44,    68,    -1,    11,    28,    44,    68,
      -1,    12,    28,    44,    68,    -1,    13,    28,    44,    68,
      -1,    14,    28,    44,    68,    -1,    28,    28,    44,    68,
      -1,    17,    28,    44,    68,    -1,    68,    38,    68,    -1,
      68,    39,    68,    -1,    68,    40,    68,    -1,    68,    41,
      68,    -1,    68,    42,    68,    -1,    68,    43,    68,    -1,
      68,    31,    68,    -1,    68,    32,    68,    -1,    68,    34,
      68,    -1,    68,    35,    68,    -1,    68,    36,    68,    -1,
      68,    37,    68,    -1,    68,    29,    68,    -1,    68,    30,
      68,    -1,    22,    68,    23,    -1,    33,    68,    -1,    28,
      -1,    45,    -1,    46,    -1,    47,    -1,    48,    -1,    70,
      -1,    26,    72,    27,    -1,    69,    -1,    71,    -1,    28,
      22,    61,    23,    -1,    70,     9,    28,    -1,    28,     9,
      28,    -1,    28,    26,    45,    27,    -1,    28,    26,    28,
      27,    -1,    28,    26,    71,    27,    -1,    72,     7,    68,
      -1,    65,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    44,    44,    46,    49,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    65,    69,    75,
      80,    94,   102,   107,   110,   114,   117,   120,   123,   126,
     130,   133,   136,   139,   143,   145,   147,   149,   151,   153,
     164,   174,   184,   194,   204,   207,   219,   231,   244,   258,
     272,   284,   312,   320,   328,   336,   344,   352,   360,   368,
     376,   384,   392,   400,   408,   416,   424,   428,   432,   442,
     450,   458,   465,   473,   480,   483,   487,   493,   507,   508,
     510,   520,   521,   523,   524
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_SCAN", "_PRINT", "_IF", "_ELSE",
  "_COMMA", "_SEMICOLON", "_DOT", "_INT", "_FLOAT", "_STRING", "_BOOL",
  "_TABLEAU", "_NULL", "_FUNCTION", "_CONST", "_CLASS", "_RETURN", "_FOR",
  "_WHILE", "_OPEN_PARENTHESIS", "_CLOSE_PARENTHESIS",
  "_CURLY_OPEN_BRACKET", "_CURLY_CLOSE_BRACKET", "_OPEN_BRACKET",
  "_CLOSE_BRACKET", "_ID", "_EQUAL", "_NON_EQUAL", "_AND", "_OR", "_NOT",
  "_INFERIOR", "_SUPERIOR", "_INFERIOR_EQUAL", "_SUPERIOR_EQUAL", "_ADD",
  "_SUB", "_MULT", "_DIV", "_MOD", "_POW", "_ASSIGN", "_INTVALUE",
  "_FLOATVALUE", "_BOOLVALUE", "_STRINGVALUE", "_VOID", "$accept",
  "PROGRAM", "LINE", "STATEMENT", "IF_STATEMENT", "ELSE_STATEMENT",
  "ASSIGN_STATEMENT", "FOR_STATEMENT", "WHILE_STATEMENT",
  "FUNCTION_STATEMENT", "TYPE", "PARAMS", "RETURN_STATEMENT",
  "PRINT_STATEMENT", "SCAN_STATEMENT", "EXPRESSION_STATEMENT",
  "CLASS_STATEMENT", "DECLARATION_STATEMENT", "EXPRESSION",
  "FUNCTION_INVOCATION_STATEMENT", "OBJECT_VALUE", "ARRAY_ELEMENT",
  "TABLEVALUE", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    51,    52,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    54,    54,    55,
      56,    57,    58,    59,    59,    60,    60,    60,    60,    60,
      61,    61,    61,    61,    62,    63,    64,    65,    66,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    69,    70,    70,
      71,    71,    71,    72,    72
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     7,     8,     4,
       3,    11,     7,     8,     9,     1,     1,     1,     1,     1,
       1,     3,     3,     1,     2,     4,     4,     1,     5,     2,
       2,     2,     2,     2,     2,     4,     4,     4,     4,     4,
       4,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     4,     3,     3,
       4,     4,     4,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    68,     0,
      69,    70,    71,    72,     0,     3,     0,    16,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,     5,    37,
      75,    73,    76,     0,     0,     0,     0,    39,    40,    41,
      42,    43,    25,    26,    27,    28,    29,     0,     0,     0,
      68,    34,     0,     0,     0,    84,     0,     0,     0,     0,
      44,     0,    67,     1,     2,     4,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    66,     0,    74,    79,
      33,     0,    30,     0,     0,     0,     0,    20,    64,    65,
      58,    59,    60,    61,    62,    63,    52,    53,    54,    55,
      56,    57,    78,    36,    35,     0,    19,    45,    46,    47,
      48,    49,     0,    51,     0,     0,     0,    83,     0,    77,
      81,    80,    82,    50,     0,     0,     0,    38,     0,     0,
      32,    31,     0,     0,     0,     0,     0,    17,     0,     0,
       0,    22,    18,    23,     0,     0,    24,     0,     0,    21
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      57,   111,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    66
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -54
static const yytype_int16 yypact[] =
{
     474,   -15,   -12,    -4,    -7,    20,    22,    25,    26,    27,
      -8,    31,    37,    82,     2,    30,    82,    82,    77,    82,
     -54,   -54,   -54,   -54,    16,   -54,    38,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   615,
     -54,    59,   -54,    41,    82,    82,   474,    43,    53,    54,
      56,    57,   -54,   -54,   -54,   -54,   -54,    60,    62,    61,
      34,   615,   177,    82,   516,   -54,    18,    79,   223,   -22,
      68,    82,   630,   -54,   -54,   -54,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      85,    93,   537,   558,   152,    82,    82,    82,    82,    82,
      95,    82,   474,    91,   114,   579,   -54,    82,   -54,   -54,
      91,    24,   -54,   -14,    96,    98,    82,   615,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   630,   630,   630,   630,
     630,   630,   -54,   -54,   -54,   102,   -54,   615,   615,   615,
     615,   615,   500,   615,   198,    82,   107,   615,   269,   -54,
     -54,   -54,   -54,   615,   474,   109,    44,   -54,   495,   474,
      91,   -54,   244,   474,   110,    82,   290,   129,   336,   474,
     600,   -54,   -54,   -54,   382,   112,   -54,   474,   428,   -54
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -54,   -45,   -24,   -54,   -54,   -30,   -54,   -54,   -54,   -54,
     -54,    -3,   -54,   -54,   -54,   124,   -54,   -53,    -5,   -54,
     -54,    74,   -54
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      74,    94,    52,    53,    54,    55,   113,    43,    61,   104,
      44,    64,    69,   150,    72,   112,    73,    46,    45,     1,
       2,     3,     4,   114,    62,   107,     5,     6,     7,     8,
       9,   148,    10,    11,    12,    13,    14,    15,    16,    92,
      93,    56,    17,    67,    18,   108,    75,   149,    47,    19,
      48,   148,    63,    49,    50,    51,    68,   144,   105,    58,
      69,    20,    21,    22,    23,    59,   117,   164,    90,    91,
      74,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   102,    67,    95,   100,   112,
     137,   138,   139,   140,   141,   161,   143,    96,    97,    68,
      98,    99,   147,    69,    16,    70,   101,   109,    17,   162,
      60,   153,   116,   132,   166,    19,   133,   142,   168,    70,
      74,    71,   145,   151,   174,   152,   154,    20,    21,    22,
      23,   159,   178,   163,   169,     4,   177,   172,    74,   156,
     158,    65,    74,   115,    74,     0,     0,     0,     0,     0,
      74,     0,     0,     0,    74,     1,     2,     3,     4,     0,
     170,     0,     5,     6,     7,     8,     9,     0,    10,    11,
      12,    13,    14,    15,    16,     0,     0,   136,    17,     0,
      18,     0,     0,     0,     0,    19,     0,     5,     6,     7,
       8,     9,     0,     0,    11,     0,     0,    20,    21,    22,
      23,     1,     2,     3,     4,   103,     0,     0,     5,     6,
       7,     8,     9,     0,    10,    11,    12,    13,    14,    15,
      16,     0,     0,   157,    17,     0,    18,     0,     0,     0,
       0,    19,     0,     5,     6,     7,     8,     9,     0,     0,
      11,     0,     0,    20,    21,    22,    23,     1,     2,     3,
       4,   110,     0,     0,     5,     6,     7,     8,     9,     0,
      10,    11,    12,    13,    14,    15,    16,     0,     0,   167,
      17,     0,    18,     0,     0,     0,     0,    19,     0,     5,
       6,     7,     8,     9,     0,     0,    11,     0,     0,    20,
      21,    22,    23,     1,     2,     3,     4,   160,     0,     0,
       5,     6,     7,     8,     9,     0,    10,    11,    12,    13,
      14,    15,    16,     0,     0,   171,    17,     0,    18,     0,
       0,     0,     0,    19,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,    21,    22,    23,     1,
       2,     3,     4,     0,     0,     0,     5,     6,     7,     8,
       9,     0,    10,    11,    12,    13,    14,    15,    16,     0,
       0,   173,    17,     0,    18,     0,     0,     0,     0,    19,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    20,    21,    22,    23,     1,     2,     3,     4,     0,
       0,     0,     5,     6,     7,     8,     9,     0,    10,    11,
      12,    13,    14,    15,    16,     0,     0,   176,    17,     0,
      18,     0,     0,     0,     0,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,    21,    22,
      23,     1,     2,     3,     4,     0,     0,     0,     5,     6,
       7,     8,     9,     0,    10,    11,    12,    13,    14,    15,
      16,     0,     0,   179,    17,     0,    18,     0,     0,     0,
       0,    19,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    20,    21,    22,    23,     1,     2,     3,
       4,     0,     0,     0,     5,     6,     7,     8,     9,     0,
      10,    11,    12,    13,    14,    15,    16,     0,     0,     0,
      17,     0,    18,   165,     0,     0,     0,    19,     0,     0,
       5,     6,     7,     8,     9,     0,     0,    11,     0,    20,
      21,    22,    23,   155,    76,    77,    78,    79,   110,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,   106,
       0,     0,     0,     0,     0,    76,    77,    78,    79,     0,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
     134,     0,     0,     0,     0,     0,    76,    77,    78,    79,
       0,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,   135,     0,     0,     0,     0,     0,    76,    77,    78,
      79,     0,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,   146,     0,     0,     0,     0,     0,    76,    77,
      78,    79,     0,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,   175,     0,     0,     0,     0,     0,    76,
      77,    78,    79,     0,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    76,    77,    78,    79,     0,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    76,
      77,    78,    79,     0,    80,    81,    82,    83,     0,     0,
       0,     0,     0,    89
};

static const yytype_int16 yycheck[] =
{
      24,    46,    10,    11,    12,    13,    28,    22,    13,    62,
      22,    16,    26,    27,    19,    68,     0,    24,    22,     3,
       4,     5,     6,    45,    22,     7,    10,    11,    12,    13,
      14,     7,    16,    17,    18,    19,    20,    21,    22,    44,
      45,    49,    26,     9,    28,    27,     8,    23,    28,    33,
      28,     7,    22,    28,    28,    28,    22,   102,    63,    28,
      26,    45,    46,    47,    48,    28,    71,    23,     9,    28,
      94,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    24,     9,    44,    28,   142,
      95,    96,    97,    98,    99,   148,   101,    44,    44,    22,
      44,    44,   107,    26,    22,    28,    44,    28,    26,   154,
      28,   116,    44,    28,   159,    33,    23,    22,   163,    28,
     144,    44,     8,    27,   169,    27,    24,    45,    46,    47,
      48,    24,   177,    24,    24,     6,    24,   167,   162,   142,
     145,    17,   166,    69,   168,    -1,    -1,    -1,    -1,    -1,
     174,    -1,    -1,    -1,   178,     3,     4,     5,     6,    -1,
     165,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    25,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    -1,    10,    11,    12,
      13,    14,    -1,    -1,    17,    -1,    -1,    45,    46,    47,
      48,     3,     4,     5,     6,    28,    -1,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,
      -1,    33,    -1,    10,    11,    12,    13,    14,    -1,    -1,
      17,    -1,    -1,    45,    46,    47,    48,     3,     4,     5,
       6,    28,    -1,    -1,    10,    11,    12,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    25,
      26,    -1,    28,    -1,    -1,    -1,    -1,    33,    -1,    10,
      11,    12,    13,    14,    -1,    -1,    17,    -1,    -1,    45,
      46,    47,    48,     3,     4,     5,     6,    28,    -1,    -1,
      10,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    25,    26,    -1,    28,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,     3,
       4,     5,     6,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    25,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    48,     3,     4,     5,     6,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    25,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      48,     3,     4,     5,     6,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,     3,     4,     5,
       6,    -1,    -1,    -1,    10,    11,    12,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      26,    -1,    28,     8,    -1,    -1,    -1,    33,    -1,    -1,
      10,    11,    12,    13,    14,    -1,    -1,    17,    -1,    45,
      46,    47,    48,    23,    29,    30,    31,    32,    28,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    23,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    23,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    29,    30,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    10,    11,    12,    13,    14,
      16,    17,    18,    19,    20,    21,    22,    26,    28,    33,
      45,    46,    47,    48,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    22,    22,    22,    24,    28,    28,    28,
      28,    28,    10,    11,    12,    13,    49,    60,    28,    28,
      28,    68,    22,    22,    68,    65,    72,     9,    22,    26,
      28,    44,    68,     0,    52,     8,    29,    30,    31,    32,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
       9,    28,    68,    68,    51,    44,    44,    44,    44,    44,
      28,    44,    24,    28,    67,    68,    23,     7,    27,    28,
      28,    61,    67,    28,    45,    71,    44,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    28,    23,    23,    23,    25,    68,    68,    68,
      68,    68,    22,    68,    51,     8,    23,    68,     7,    23,
      27,    27,    27,    68,    24,    23,    61,    25,    68,    24,
      28,    67,    51,    24,    23,     8,    51,    25,    51,    24,
      68,    25,    55,    25,    51,    23,    25,    24,    51,    25
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

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
#line 44 "parser.y"
    {
 ;}
    break;

  case 3:
#line 46 "parser.y"
    {
 ;}
    break;

  case 4:
#line 49 "parser.y"
    {
;}
    break;

  case 17:
#line 65 "parser.y"
    {
    // int if_start = nextquad();
    // backpatch($3->falselist, if_start);
;}
    break;

  case 18:
#line 69 "parser.y"
    {
    // int if_start = nextquad();
    // backpatch($3->falselist, if_start);
    // // backpatch($6->place, nextquad());
;}
    break;

  case 19:
#line 75 "parser.y"
    {
    // int else_start = nextquad();
    // backpatch($3->nextlist, else_start);
;}
    break;

  case 20:
#line 80 "parser.y"
    {
    printf('assign statement');
    struct Symbol* var= lookup_symbol((yyvsp[(1) - (3)].string));
    if(var == NULL){
        printf("Variable %s not declared \n", (yyvsp[(1) - (3)].string));
        exit(1);
    }
    if(var->type != (yyvsp[(3) - (3)].symbol)->type){
        printf("Type mismatch in assignment \n");
        exit(1);
    }
    // gen("EQ", $3->place, -1, var->place);
;}
    break;

  case 21:
#line 94 "parser.y"
    {
    // int for_start = nextquad();
    // backpatch($3->nextlist, for_start);
    // int for_end = nextquad();
    // gen("jump", -1, -1, for_start);
    // backpatch($5->truelist, for_end);
;}
    break;

  case 22:
#line 102 "parser.y"
    {
    // // // backpatch($3->truelist, nextquad());
    // // // backpatch($5->falselist, nextquad());
;}
    break;

  case 23:
#line 107 "parser.y"
    {
    // // backpatch($7->falselist, nextquad());
;}
    break;

  case 24:
#line 110 "parser.y"
    {
    // // backpatch($8->falselist, nextquad());
;}
    break;

  case 25:
#line 114 "parser.y"
    {
    strcpy((yyval.string),(yyvsp[(1) - (1)].string));
;}
    break;

  case 26:
#line 117 "parser.y"
    {
    strcpy((yyval.string),(yyvsp[(1) - (1)].string));
;}
    break;

  case 27:
#line 120 "parser.y"
    {
    strcpy((yyval.string),(yyvsp[(1) - (1)].string));
;}
    break;

  case 28:
#line 123 "parser.y"
    {
    strcpy((yyval.string),(yyvsp[(1) - (1)].string));
;}
    break;

  case 29:
#line 126 "parser.y"
    {
    strcpy((yyval.string),(yyvsp[(1) - (1)].string));
;}
    break;

  case 30:
#line 130 "parser.y"
    {
    (yyval.symbol) = (yyvsp[(1) - (1)].symbol);
;}
    break;

  case 31:
#line 133 "parser.y"
    {
    (yyval.symbol) = (yyvsp[(1) - (3)].symbol);
;}
    break;

  case 32:
#line 136 "parser.y"
    {
    (yyval.symbol) = (yyvsp[(1) - (3)].symbol);
;}
    break;

  case 33:
#line 139 "parser.y"
    {
    (yyval.symbol) = (yyvsp[(1) - (1)].string);
;}
    break;

  case 39:
#line 153 "parser.y"
    {

    struct Symbol* var = lookup_symbol((yyvsp[(2) - (2)].string));
    if(var != NULL){
        printf("Variable %s already declared \n", (yyvsp[(2) - (2)].string));
        exit(1);
    }
    int* value = malloc(sizeof(int));
    *value = 0;
    add_symbol((yyvsp[(2) - (2)].string), INT, 0, value);
;}
    break;

  case 40:
#line 164 "parser.y"
    {
    struct Symbol* var = lookup_symbol((yyvsp[(2) - (2)].string));
    if(var != NULL){
        printf("Variable %s already declared \n", (yyvsp[(2) - (2)].string));
        exit(1);
    }
    float* value = malloc(sizeof(float));
    *value = 0;
    add_symbol((yyvsp[(2) - (2)].string), REAL, 0, value);
;}
    break;

  case 41:
#line 174 "parser.y"
    {
    struct Symbol* var = lookup_symbol((yyvsp[(2) - (2)].string));
    if(var != NULL){
        printf("Variable %s already declared \n", (yyvsp[(2) - (2)].string));
        exit(1);
    }
    char* value = malloc(sizeof(char)*100);
    strcpy(value, "");
    add_symbol((yyvsp[(2) - (2)].string), STRING, 0, value);
;}
    break;

  case 42:
#line 184 "parser.y"
    {
    struct Symbol* var = lookup_symbol((yyvsp[(2) - (2)].string));
    if(var != NULL){
        printf("Variable %s already declared \n", (yyvsp[(2) - (2)].string));
        exit(1);
    }
    bool* value = malloc(sizeof(bool));
    *value = false;
    add_symbol((yyvsp[(2) - (2)].string), BOOL, 0, value);
;}
    break;

  case 43:
#line 194 "parser.y"
    {
    struct Symbol* var = lookup_symbol((yyvsp[(2) - (2)].string));
    if(var != NULL){
        printf("Variable %s already declared \n", (yyvsp[(2) - (2)].string));
        exit(1);
    }
    int* value = malloc(sizeof(int));
    *value = 0;
    add_symbol((yyvsp[(2) - (2)].string), TABLEAU, 0, value);
;}
    break;

  case 44:
#line 204 "parser.y"
    {
//   TODO
;}
    break;

  case 45:
#line 207 "parser.y"
    {
    struct Symbol* var = lookup_symbol((yyvsp[(2) - (4)].string));
    if(var != NULL){
        printf("Variable %s already declared \n", (yyvsp[(2) - (4)].string));
        exit(1);
    }
    if((yyvsp[(4) - (4)].symbol)->type != INT){
        printf("Type %s mismatch in assignment \n", (yyvsp[(2) - (4)].string));
        exit(1);
    }
    add_symbol((yyvsp[(2) - (4)].string), INT, 0, (yyvsp[(4) - (4)].symbol)->value);
;}
    break;

  case 46:
#line 219 "parser.y"
    {
    struct Symbol* var = lookup_symbol((yyvsp[(2) - (4)].string));
    if(var != NULL){
        printf("Variable %s already declared \n", (yyvsp[(2) - (4)].string));
        exit(1);
    }
    if((yyvsp[(4) - (4)].symbol)->type != REAL){
        printf("Type mismatch in assignment \n");
        exit(1);
    }
    add_symbol((yyvsp[(2) - (4)].string), REAL, 0, (yyvsp[(4) - (4)].symbol)->value);
;}
    break;

  case 47:
#line 231 "parser.y"
    {
    struct Symbol* var = lookup_symbol((yyvsp[(2) - (4)].string));
    if(var != NULL){
        printf("Variable %s already declared \n", (yyvsp[(2) - (4)].string));
        exit(1);
    }
    if((yyvsp[(4) - (4)].symbol)->type != STRING){
        printf("Type mismatch in assignment \n");
        exit(1);
    }
    char* value = malloc(sizeof(char)*100);
    add_symbol((yyvsp[(2) - (4)].string), STRING, 0, (yyvsp[(4) - (4)].symbol)->value);
;}
    break;

  case 48:
#line 244 "parser.y"
    {
    struct Symbol* var = lookup_symbol((yyvsp[(2) - (4)].string));
    if(var != NULL){
        printf("Variable %s already declared \n", (yyvsp[(2) - (4)].string));
        exit(1);
    }
    if((yyvsp[(4) - (4)].symbol)->type != BOOL){
        printf("Type mismatch in assignment \n");
        exit(1);
    }
    bool* value = malloc(sizeof(bool));
    *value = (yyvsp[(4) - (4)].symbol)->value;
    add_symbol((yyvsp[(2) - (4)].string), BOOL, 0, value);
;}
    break;

  case 49:
#line 258 "parser.y"
    {
    struct Symbol* var = lookup_symbol((yyvsp[(2) - (4)].string));
    if(var != NULL){
        printf("Variable %s already declared \n", (yyvsp[(2) - (4)].string));
        exit(1);
    }
    if((yyvsp[(4) - (4)].symbol)->type != TABLEAU){
        printf("Type mismatch in assignment \n");
        exit(1);
    }
    int* value = malloc(sizeof(int));
    *value = (yyvsp[(4) - (4)].symbol)->value;
    add_symbol((yyvsp[(2) - (4)].string), TABLEAU, 0, value);
;}
    break;

  case 50:
#line 272 "parser.y"
    {
    struct Symbol* var = lookup_symbol((yyvsp[(2) - (4)].string));
    if(var == NULL){
        printf("Variable %s not declared \n", (yyvsp[(2) - (4)].string));
        exit(1);
    }
    if(var->type != (yyvsp[(4) - (4)].symbol)->type){
        printf("Type mismatch in assignment \n");
        exit(1);
    }
    ///////////////////////////// TODO 
;}
    break;

  case 51:
#line 284 "parser.y"
    {
    struct Symbol* var = lookup_symbol((yyvsp[(2) - (4)].string));
    if(var != NULL){
        printf("Variable %s already declared \n", (yyvsp[(2) - (4)].string));
        exit(1);
    }
    switch ((yyvsp[(4) - (4)].symbol)->type)
    {
    case INT:
        add_symbol((yyvsp[(2) - (4)].string), INT, 0, (yyvsp[(4) - (4)].symbol)->value);
        break;
    case REAL:
        add_symbol((yyvsp[(2) - (4)].string), REAL, 0, (yyvsp[(4) - (4)].symbol)->value);
        break;
    case STRING:
        add_symbol((yyvsp[(2) - (4)].string), STRING, 0, (yyvsp[(4) - (4)].symbol)->value);
        break;
    case BOOL:
        add_symbol((yyvsp[(2) - (4)].string), BOOL, 0, (yyvsp[(4) - (4)].symbol)->value);
        break;
    case TABLEAU:
        add_symbol((yyvsp[(2) - (4)].string), TABLEAU, 0, (yyvsp[(4) - (4)].symbol)->value);
        break;
    default:
        break;
    }
;}
    break;

  case 52:
#line 312 "parser.y"
    { 
    if((yyvsp[(1) - (3)].symbol)->type != (yyvsp[(3) - (3)].symbol)->type){
        printf("Type mismatch in addition \n");
        exit(1);
    }
    // int quad= nextquad();
    // gen("ADD", $1->place, $3->place, quad);
;}
    break;

  case 53:
#line 320 "parser.y"
    { 
  if((yyvsp[(1) - (3)].symbol)->type != (yyvsp[(3) - (3)].symbol)->type){
        printf("Type mismatch in addition \n");
        exit(1);
    }
    // int quad= nextquad();
    // gen("SUB", $1->place, $3->place, quad);
;}
    break;

  case 54:
#line 328 "parser.y"
    { 
  if((yyvsp[(1) - (3)].symbol)->type != (yyvsp[(3) - (3)].symbol)->type){
        printf("Type mismatch in addition \n");
        exit(1);
    }
    // int quad= nextquad();
    // gen("MUL", $1->place, $3->place, quad);
;}
    break;

  case 55:
#line 336 "parser.y"
    { 
  if((yyvsp[(1) - (3)].symbol)->type != (yyvsp[(3) - (3)].symbol)->type){
        printf("Type mismatch in addition \n");
        exit(1);
    }
    // int quad= nextquad();
    // gen("DIV", $1->place, $3->place, quad);
;}
    break;

  case 56:
#line 344 "parser.y"
    { 
  if((yyvsp[(1) - (3)].symbol)->type != (yyvsp[(3) - (3)].symbol)->type){
        printf("Type mismatch in addition \n");
        exit(1);
    }
    // int quad= nextquad();
    // gen("MOD", $1->place, $3->place, quad);
;}
    break;

  case 57:
#line 352 "parser.y"
    { 
  if((yyvsp[(1) - (3)].symbol)->type != (yyvsp[(3) - (3)].symbol)->type){
        printf("Type mismatch in addition \n");
        exit(1);
    }
    // int quad= nextquad();
    // gen("POW", $1->place, $3->place, quad);
;}
    break;

  case 58:
#line 360 "parser.y"
    { 
  if((yyvsp[(1) - (3)].symbol)->type != (yyvsp[(3) - (3)].symbol)->type){
        printf("Type mismatch in addition \n");
        exit(1);
    }
    // int quad= nextquad();
    // gen("AND", $1->place, $3->place, quad);
;}
    break;

  case 59:
#line 368 "parser.y"
    { 
  if((yyvsp[(1) - (3)].symbol)->type != (yyvsp[(3) - (3)].symbol)->type){
        printf("Type mismatch in addition \n");
        exit(1);
    }
    // int quad= nextquad();
    // gen("OR", $1->place, $3->place, quad);
;}
    break;

  case 60:
#line 376 "parser.y"
    { 
  if((yyvsp[(1) - (3)].symbol)->type != (yyvsp[(3) - (3)].symbol)->type){
        printf("Type mismatch in addition \n");
        exit(1);
    }
    // int quad= nextquad();
    // gen("INF", $1->place, $3->place, quad);
;}
    break;

  case 61:
#line 384 "parser.y"
    { 
  if((yyvsp[(1) - (3)].symbol)->type != (yyvsp[(3) - (3)].symbol)->type){
        printf("Type mismatch in addition \n");
        exit(1);
    }
    // int quad= nextquad();
    // gen("SUP", $1->place, $3->place, quad);
;}
    break;

  case 62:
#line 392 "parser.y"
    { 
  if((yyvsp[(1) - (3)].symbol)->type != (yyvsp[(3) - (3)].symbol)->type){
        printf("Type mismatch in addition \n");
        exit(1);
    }
    // int quad= nextquad();
    // gen("INFE", $1->place, $3->place, quad);
;}
    break;

  case 63:
#line 400 "parser.y"
    { 
  if((yyvsp[(1) - (3)].symbol)->type != (yyvsp[(3) - (3)].symbol)->type){
        printf("Type mismatch in addition \n");
        exit(1);
    }
    // int quad= nextquad();
    // gen("SUPPE", $1->place, $3->place, quad);
;}
    break;

  case 64:
#line 408 "parser.y"
    { 
  if((yyvsp[(1) - (3)].symbol)->type != (yyvsp[(3) - (3)].symbol)->type){
        printf("Type mismatch in addition \n");
        exit(1);
    }
    // int quad= nextquad();
    // gen("EQUAL", $1->place, $3->place, quad);
;}
    break;

  case 65:
#line 416 "parser.y"
    { 
  if((yyvsp[(1) - (3)].symbol)->type != (yyvsp[(3) - (3)].symbol)->type){
        printf("Type mismatch in addition \n");
        exit(1);
    }
    // int quad= nextquad();
    // gen("NEQUAL", $1->place, $3->place, quad);
;}
    break;

  case 66:
#line 424 "parser.y"
    { 
    // int quad= nextquad();
    // gen("EQ", $2->place,-1, quad);
;}
    break;

  case 67:
#line 428 "parser.y"
    { 
    // int quad= nextquad();
    // gen("NOT", $2->place,-1, quad);
;}
    break;

  case 68:
#line 432 "parser.y"
    {
    struct Symbol* var = lookup_symbol((yyvsp[(1) - (1)].string));
    if(var != NULL){
        printf("Variable %s already declared \n", (yyvsp[(1) - (1)].string));
        exit(1);
    }
    (yyval.symbol)=&var;
    // int quad= nextquad();
    // // gen("EQ", $1->place,-1, quad);
;}
    break;

  case 69:
#line 442 "parser.y"
    {
    struct Symbol symbol;
    (yyval.symbol)=&symbol;
    (yyval.symbol)->type=INT;
    int* value = malloc(sizeof(int));
    *value = (yyvsp[(1) - (1)].integer);
    (yyval.symbol)->value=value;
;}
    break;

  case 70:
#line 450 "parser.y"
    {
    struct Symbol symbol;
    (yyval.symbol)=&symbol;
    (yyval.symbol)->type=REAL;
    float* value = malloc(sizeof(float));
    *value = (yyvsp[(1) - (1)].real);
    (yyval.symbol)->value = value;
;}
    break;

  case 71:
#line 458 "parser.y"
    {
    struct Symbol symbol;
    (yyval.symbol)=&symbol;
    bool* value = malloc(sizeof(bool));
    *value = (yyvsp[(1) - (1)].string);
    (yyval.symbol)->value=value;
;}
    break;

  case 72:
#line 465 "parser.y"
    {
    struct Symbol symbol;
     (yyval.symbol)=&symbol;
    bool* value = malloc(sizeof(char[255]));
    *value = (yyvsp[(1) - (1)].string);
    (yyval.symbol)->value=value;

;}
    break;

  case 73:
#line 473 "parser.y"
    {
    // struct Symbol symbol;
    // $$=&symbol;
    // int* value = malloc(sizeof(int));
    // *value = $1;
    // $$->value=value;
;}
    break;

  case 74:
#line 480 "parser.y"
    {
    // $$=$2;
;}
    break;

  case 75:
#line 483 "parser.y"
    {
    // int quad= nextquad();
    //  gen("EQ", $1->place,-1, quad);
;}
    break;

  case 76:
#line 487 "parser.y"
    {
    // // int quad= nextquad();
    // //  gen("EQ", $1->place,-1, quad);
;}
    break;

  case 77:
#line 493 "parser.y"
    {
    struct Symbol* var = lookup_symbol((yyvsp[(1) - (4)].string));
    if(var == NULL){
        printf("Function %s not declared \n", (yyvsp[(1) - (4)].string));
        exit(1);
    }
    if(var->is_function != 1){
        printf("Variable %s is not a function \n", (yyvsp[(1) - (4)].string));
        exit(1);
    }
    // int quad= nextquad();
    //  gen("EQ", var->place, -1, quad);
;}
    break;

  case 78:
#line 507 "parser.y"
    {;}
    break;

  case 79:
#line 508 "parser.y"
    {;}
    break;

  case 80:
#line 510 "parser.y"
    {
    struct Symbol* var = lookup_symbol((yyvsp[(1) - (4)].string));
    if(var == NULL){
        printf("Variable %s not declared \n", (yyvsp[(1) - (4)].string));
        exit(1);
    }
    
    // int quad= nextquad();
    // //gen("EQ", $1->place,-1, quad);
;}
    break;


/* Line 1267 of yacc.c.  */
#line 2370 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 529 "parser.y"

main(int argc, char **argv)
{
    init_symbol_table(); 
    yyparse();
    print_table();
}

yyerror(char *s)
{
  fprintf(stderr, "Error: %s\n", s);

}
