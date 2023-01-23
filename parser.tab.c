/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include "tableSymbol.h"
// #include "quad.h"



int yylex();
int yyerror();


#line 87 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL__SCAN = 3,                      /* _SCAN  */
  YYSYMBOL__PRINT = 4,                     /* _PRINT  */
  YYSYMBOL__IF = 5,                        /* _IF  */
  YYSYMBOL__ELSE = 6,                      /* _ELSE  */
  YYSYMBOL__COMMA = 7,                     /* _COMMA  */
  YYSYMBOL__SEMICOLON = 8,                 /* _SEMICOLON  */
  YYSYMBOL__DOT = 9,                       /* _DOT  */
  YYSYMBOL__INT = 10,                      /* _INT  */
  YYSYMBOL__FLOAT = 11,                    /* _FLOAT  */
  YYSYMBOL__STRING = 12,                   /* _STRING  */
  YYSYMBOL__BOOL = 13,                     /* _BOOL  */
  YYSYMBOL__TABLEAU = 14,                  /* _TABLEAU  */
  YYSYMBOL__NULL = 15,                     /* _NULL  */
  YYSYMBOL__FUNCTION = 16,                 /* _FUNCTION  */
  YYSYMBOL__CONST = 17,                    /* _CONST  */
  YYSYMBOL__CLASS = 18,                    /* _CLASS  */
  YYSYMBOL__RETURN = 19,                   /* _RETURN  */
  YYSYMBOL__FOR = 20,                      /* _FOR  */
  YYSYMBOL__WHILE = 21,                    /* _WHILE  */
  YYSYMBOL__OPEN_PARENTHESIS = 22,         /* _OPEN_PARENTHESIS  */
  YYSYMBOL__CLOSE_PARENTHESIS = 23,        /* _CLOSE_PARENTHESIS  */
  YYSYMBOL__CURLY_OPEN_BRACKET = 24,       /* _CURLY_OPEN_BRACKET  */
  YYSYMBOL__CURLY_CLOSE_BRACKET = 25,      /* _CURLY_CLOSE_BRACKET  */
  YYSYMBOL__OPEN_BRACKET = 26,             /* _OPEN_BRACKET  */
  YYSYMBOL__CLOSE_BRACKET = 27,            /* _CLOSE_BRACKET  */
  YYSYMBOL__ID = 28,                       /* _ID  */
  YYSYMBOL__EQUAL = 29,                    /* _EQUAL  */
  YYSYMBOL__NON_EQUAL = 30,                /* _NON_EQUAL  */
  YYSYMBOL__AND = 31,                      /* _AND  */
  YYSYMBOL__OR = 32,                       /* _OR  */
  YYSYMBOL__NOT = 33,                      /* _NOT  */
  YYSYMBOL__INFERIOR = 34,                 /* _INFERIOR  */
  YYSYMBOL__SUPERIOR = 35,                 /* _SUPERIOR  */
  YYSYMBOL__INFERIOR_EQUAL = 36,           /* _INFERIOR_EQUAL  */
  YYSYMBOL__SUPERIOR_EQUAL = 37,           /* _SUPERIOR_EQUAL  */
  YYSYMBOL__ADD = 38,                      /* _ADD  */
  YYSYMBOL__SUB = 39,                      /* _SUB  */
  YYSYMBOL__MULT = 40,                     /* _MULT  */
  YYSYMBOL__DIV = 41,                      /* _DIV  */
  YYSYMBOL__MOD = 42,                      /* _MOD  */
  YYSYMBOL__POW = 43,                      /* _POW  */
  YYSYMBOL__ASSIGN = 44,                   /* _ASSIGN  */
  YYSYMBOL__INTVALUE = 45,                 /* _INTVALUE  */
  YYSYMBOL__FLOATVALUE = 46,               /* _FLOATVALUE  */
  YYSYMBOL__BOOLVALUE = 47,                /* _BOOLVALUE  */
  YYSYMBOL__STRINGVALUE = 48,              /* _STRINGVALUE  */
  YYSYMBOL__VOID = 49,                     /* _VOID  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_PROGRAM = 51,                   /* PROGRAM  */
  YYSYMBOL_LINE = 52,                      /* LINE  */
  YYSYMBOL_STATEMENT = 53,                 /* STATEMENT  */
  YYSYMBOL_IF_STATEMENT = 54,              /* IF_STATEMENT  */
  YYSYMBOL_ELSE_STATEMENT = 55,            /* ELSE_STATEMENT  */
  YYSYMBOL_ASSIGN_STATEMENT = 56,          /* ASSIGN_STATEMENT  */
  YYSYMBOL_FOR_STATEMENT = 57,             /* FOR_STATEMENT  */
  YYSYMBOL_WHILE_STATEMENT = 58,           /* WHILE_STATEMENT  */
  YYSYMBOL_FUNCTION_STATEMENT = 59,        /* FUNCTION_STATEMENT  */
  YYSYMBOL_TYPE = 60,                      /* TYPE  */
  YYSYMBOL_PARAMS = 61,                    /* PARAMS  */
  YYSYMBOL_RETURN_STATEMENT = 62,          /* RETURN_STATEMENT  */
  YYSYMBOL_PRINT_STATEMENT = 63,           /* PRINT_STATEMENT  */
  YYSYMBOL_SCAN_STATEMENT = 64,            /* SCAN_STATEMENT  */
  YYSYMBOL_EXPRESSION_STATEMENT = 65,      /* EXPRESSION_STATEMENT  */
  YYSYMBOL_CLASS_STATEMENT = 66,           /* CLASS_STATEMENT  */
  YYSYMBOL_DECLARATION_STATEMENT = 67,     /* DECLARATION_STATEMENT  */
  YYSYMBOL_EXPRESSION = 68,                /* EXPRESSION  */
  YYSYMBOL_FUNCTION_INVOCATION_STATEMENT = 69, /* FUNCTION_INVOCATION_STATEMENT  */
  YYSYMBOL_OBJECT_VALUE = 70,              /* OBJECT_VALUE  */
  YYSYMBOL_ARRAY_ELEMENT = 71,             /* ARRAY_ELEMENT  */
  YYSYMBOL_TABLEVALUE = 72                 /* TABLEVALUE  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

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
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  180

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   304


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    44,    44,    46,    49,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    65,    69,    75,
      80,    94,   102,   107,   110,   114,   117,   120,   123,   126,
     130,   133,   136,   139,   143,   145,   147,   149,   151,   153,
     164,   174,   184,   194,   204,   207,   221,   234,   248,   262,
     276,   288,   318,   326,   334,   342,   350,   358,   366,   374,
     382,   390,   398,   406,   414,   422,   430,   434,   438,   442,
     446,   450,   453,   456,   459,   462,   466,   472,   486,   487,
     489,   499,   500,   502,   503
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "_SCAN", "_PRINT",
  "_IF", "_ELSE", "_COMMA", "_SEMICOLON", "_DOT", "_INT", "_FLOAT",
  "_STRING", "_BOOL", "_TABLEAU", "_NULL", "_FUNCTION", "_CONST", "_CLASS",
  "_RETURN", "_FOR", "_WHILE", "_OPEN_PARENTHESIS", "_CLOSE_PARENTHESIS",
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
  "TABLEVALUE", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-54)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
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

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
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

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -54,   -45,   -24,   -54,   -54,   -30,   -54,   -54,   -54,   -54,
     -54,    -3,   -54,   -54,   -54,   124,   -54,   -53,    -5,   -54,
     -54,    74,   -54
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      57,   111,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    66
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
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

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
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

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
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

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
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


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* PROGRAM: PROGRAM LINE  */
#line 44 "parser.y"
                      {
 }
#line 1365 "parser.tab.c"
    break;

  case 3: /* PROGRAM: LINE  */
#line 46 "parser.y"
       {
 }
#line 1372 "parser.tab.c"
    break;

  case 4: /* LINE: STATEMENT _SEMICOLON  */
#line 49 "parser.y"
                           {
}
#line 1379 "parser.tab.c"
    break;

  case 17: /* IF_STATEMENT: _IF _OPEN_PARENTHESIS EXPRESSION _CLOSE_PARENTHESIS _CURLY_OPEN_BRACKET PROGRAM _CURLY_CLOSE_BRACKET  */
#line 65 "parser.y"
                                                                                                                   {
    // int if_start = nextquad();
    // backpatch($3->falselist, if_start);
}
#line 1388 "parser.tab.c"
    break;

  case 18: /* IF_STATEMENT: _IF _OPEN_PARENTHESIS EXPRESSION _CLOSE_PARENTHESIS _CURLY_OPEN_BRACKET PROGRAM _CURLY_CLOSE_BRACKET ELSE_STATEMENT  */
#line 69 "parser.y"
                                                                                                                     {
    // int if_start = nextquad();
    // backpatch($3->falselist, if_start);
    // backpatch($6->place, nextquad());
}
#line 1398 "parser.tab.c"
    break;

  case 19: /* ELSE_STATEMENT: _ELSE _CURLY_OPEN_BRACKET PROGRAM _CURLY_CLOSE_BRACKET  */
#line 75 "parser.y"
                                                                       {
    // int else_start = nextquad();
    // backpatch($3->nextlist, else_start);
}
#line 1407 "parser.tab.c"
    break;

  case 20: /* ASSIGN_STATEMENT: _ID _ASSIGN EXPRESSION  */
#line 80 "parser.y"
                                         {
    // printf('assign statement');
    // struct Symbol* var= lookup_symbol($1);
    // if(var == NULL){
    //     printf("Variable %s not declared \n", $1);
    //     exit(1);
    // }
    // if(var->type != $3->type){
    //     printf("Type mismatch in assignment \n");
    //     exit(1);
    // }
    // gen("EQ", $3->place, -1, var->place);
}
#line 1425 "parser.tab.c"
    break;

  case 21: /* FOR_STATEMENT: _FOR _OPEN_PARENTHESIS DECLARATION_STATEMENT _SEMICOLON EXPRESSION _SEMICOLON EXPRESSION _CLOSE_PARENTHESIS _CURLY_OPEN_BRACKET PROGRAM _CURLY_CLOSE_BRACKET  */
#line 94 "parser.y"
                                                                                                                                                                            {
    // int for_start = nextquad();
    // backpatch($3->nextlist, for_start);
    // int for_end = nextquad();
    // gen("jump", -1, -1, for_start);
    // backpatch($5->truelist, for_end);
}
#line 1437 "parser.tab.c"
    break;

  case 22: /* WHILE_STATEMENT: _WHILE _OPEN_PARENTHESIS EXPRESSION _CLOSE_PARENTHESIS _CURLY_OPEN_BRACKET PROGRAM _CURLY_CLOSE_BRACKET  */
#line 102 "parser.y"
                                                                                                                        {
    // backpatch($3->truelist, nextquad());
    // backpatch($5->falselist, nextquad());
}
#line 1446 "parser.tab.c"
    break;

  case 23: /* FUNCTION_STATEMENT: _FUNCTION TYPE _ID _OPEN_PARENTHESIS _CLOSE_PARENTHESIS _CURLY_OPEN_BRACKET PROGRAM _CURLY_CLOSE_BRACKET  */
#line 107 "parser.y"
                                                                                                                            {
    // backpatch($7->falselist, nextquad());
}
#line 1454 "parser.tab.c"
    break;

  case 24: /* FUNCTION_STATEMENT: _FUNCTION TYPE _ID _OPEN_PARENTHESIS PARAMS _CLOSE_PARENTHESIS _CURLY_OPEN_BRACKET PROGRAM _CURLY_CLOSE_BRACKET  */
#line 110 "parser.y"
                                                                                                                 {
    // backpatch($8->falselist, nextquad());
}
#line 1462 "parser.tab.c"
    break;

  case 25: /* TYPE: _INT  */
#line 114 "parser.y"
          {
    strcpy((yyval.string),(yyvsp[0].string));
}
#line 1470 "parser.tab.c"
    break;

  case 26: /* TYPE: _FLOAT  */
#line 117 "parser.y"
         {
    strcpy((yyval.string),(yyvsp[0].string));
}
#line 1478 "parser.tab.c"
    break;

  case 27: /* TYPE: _STRING  */
#line 120 "parser.y"
         {
    strcpy((yyval.string),(yyvsp[0].string));
}
#line 1486 "parser.tab.c"
    break;

  case 28: /* TYPE: _BOOL  */
#line 123 "parser.y"
       {
    strcpy((yyval.string),(yyvsp[0].string));
}
#line 1494 "parser.tab.c"
    break;

  case 29: /* TYPE: _VOID  */
#line 126 "parser.y"
        {
    strcpy((yyval.string),(yyvsp[0].string));
}
#line 1502 "parser.tab.c"
    break;

  case 30: /* PARAMS: DECLARATION_STATEMENT  */
#line 130 "parser.y"
                              {
    (yyval.symbol) = (yyvsp[0].symbol);
}
#line 1510 "parser.tab.c"
    break;

  case 31: /* PARAMS: PARAMS _COMMA DECLARATION_STATEMENT  */
#line 133 "parser.y"
                                      {
    (yyval.symbol) = (yyvsp[-2].symbol);
}
#line 1518 "parser.tab.c"
    break;

  case 32: /* PARAMS: PARAMS _COMMA _ID  */
#line 136 "parser.y"
                    {
    (yyval.symbol) = (yyvsp[-2].symbol);
}
#line 1526 "parser.tab.c"
    break;

  case 33: /* PARAMS: _ID  */
#line 139 "parser.y"
      {
    (yyval.symbol) = (yyvsp[0].string);
}
#line 1534 "parser.tab.c"
    break;

  case 39: /* DECLARATION_STATEMENT: _INT _ID  */
#line 153 "parser.y"
                                {
    // printf('declaration int statement');
    // struct Symbol* var = lookup_symbol($2);
    // if(var != NULL){
    //     printf("Variable %s already declared \n", $2);
    //     exit(1);
    // }
    // int* value = malloc(sizeof(int));
    // *value = 0;
    // add_symbol($2, INT, 0, value);
}
#line 1550 "parser.tab.c"
    break;

  case 40: /* DECLARATION_STATEMENT: _FLOAT _ID  */
#line 164 "parser.y"
             {
    // struct Symbol* var = lookup_symbol($2);
    // if(var != NULL){
    //     printf("Variable %s already declared \n", $2);
    //     exit(1);
    // }
    // float* value = malloc(sizeof(float));
    // *value = 0;
    // add_symbol($2, REAL, 0, value);
}
#line 1565 "parser.tab.c"
    break;

  case 41: /* DECLARATION_STATEMENT: _STRING _ID  */
#line 174 "parser.y"
              {
    // struct Symbol* var = lookup_symbol($2);
    // if(var != NULL){
    //     printf("Variable %s already declared \n", $2);
    //     exit(1);
    // }
    // char* value = malloc(sizeof(char)*100);
    // strcpy(value, "");
    // add_symbol($2, STRING, 0, value);
}
#line 1580 "parser.tab.c"
    break;

  case 42: /* DECLARATION_STATEMENT: _BOOL _ID  */
#line 184 "parser.y"
            {
    // struct Symbol* var = lookup_symbol($2);
    // if(var != NULL){
    //     printf("Variable %s already declared \n", $2);
    //     exit(1);
    // }
    // bool* value = malloc(sizeof(bool));
    // *value = false;
    // add_symbol($2, BOOL, 0, value);
}
#line 1595 "parser.tab.c"
    break;

  case 43: /* DECLARATION_STATEMENT: _TABLEAU _ID  */
#line 194 "parser.y"
               {
    // struct Symbol* var = lookup_symbol($2);
    // if(var != NULL){
    //     printf("Variable %s already declared \n", $2);
    //     exit(1);
    // }
    // int* value = malloc(sizeof(int));
    // *value = 0;
    // add_symbol($2, TABLEAU, 0, value);
}
#line 1610 "parser.tab.c"
    break;

  case 44: /* DECLARATION_STATEMENT: _ID _ID  */
#line 204 "parser.y"
         {
  // TODO
}
#line 1618 "parser.tab.c"
    break;

  case 45: /* DECLARATION_STATEMENT: _INT _ID _ASSIGN EXPRESSION  */
#line 207 "parser.y"
                              {
    // struct Symbol* var = lookup_symbol($2);
    // if(var != NULL){
    //     printf("Variable %s already declared \n", $2);
    //     exit(1);
    // }
    // if($4->type != INT){
    //     printf("Type mismatch in assignment \n");
    //     exit(1);
    // }
    // int* value = malloc(sizeof(int));
    // *value = $4->value;
    // add_symbol($2, INT, 0, value);
}
#line 1637 "parser.tab.c"
    break;

  case 46: /* DECLARATION_STATEMENT: _FLOAT _ID _ASSIGN EXPRESSION  */
#line 221 "parser.y"
                                {
    // struct Symbol* var = lookup_symbol($2);
    // if(var != NULL){
    //     printf("Variable %s already declared \n", $2);
    //     exit(1);
    // }
    // if($4->type != REAL){
    //     printf("Type mismatch in assignment \n");
    //     exit(1);
    // }
    // add_symbol($2, REAL, 0, 0);
    // gen("EQ", $2, $4->value, -1);
}
#line 1655 "parser.tab.c"
    break;

  case 47: /* DECLARATION_STATEMENT: _STRING _ID _ASSIGN EXPRESSION  */
#line 234 "parser.y"
                                 {
    // struct Symbol* var = lookup_symbol($2);
    // if(var != NULL){
    //     printf("Variable %s already declared \n", $2);
    //     exit(1);
    // }
    // if($4->type != STRING){
    //     printf("Type mismatch in assignment \n");
    //     exit(1);
    // }
    // char* value = malloc(sizeof(char)*100);
    // strcpy(value, $4->value);
    // add_symbol($2, STRING, 0, value);
}
#line 1674 "parser.tab.c"
    break;

  case 48: /* DECLARATION_STATEMENT: _BOOL _ID _ASSIGN EXPRESSION  */
#line 248 "parser.y"
                               {
    // struct Symbol* var = lookup_symbol($2);
    // if(var != NULL){
    //     printf("Variable %s already declared \n", $2);
    //     exit(1);
    // }
    // if($4->type != BOOL){
    //     printf("Type mismatch in assignment \n");
    //     exit(1);
    // }
    // bool* value = malloc(sizeof(bool));
    // *value = $4->value;
    // add_symbol($2, BOOL, 0, value);
}
#line 1693 "parser.tab.c"
    break;

  case 49: /* DECLARATION_STATEMENT: _TABLEAU _ID _ASSIGN EXPRESSION  */
#line 262 "parser.y"
                                  {
    // struct Symbol* var = lookup_symbol($2);
    // if(var != NULL){
    //     printf("Variable %s already declared \n", $2);
    //     exit(1);
    // }
    // if($4->type != TABLEAU){
    //     printf("Type mismatch in assignment \n");
    //     exit(1);
    // }
    // int* value = malloc(sizeof(int));
    // *value = $4->value;
    // add_symbol($2, TABLEAU, 0, value);
}
#line 1712 "parser.tab.c"
    break;

  case 50: /* DECLARATION_STATEMENT: _ID _ID _ASSIGN EXPRESSION  */
#line 276 "parser.y"
                             {
    // struct Symbol* var = lookup_symbol($2);
    // if(var == NULL){
    //     printf("Variable %s not declared \n", $2);
    //     exit(1);
    // }
    // if(var->type != $4->type){
    //     printf("Type mismatch in assignment \n");
    //     exit(1);
    // }
    /////////////////////////////// TODO 
}
#line 1729 "parser.tab.c"
    break;

  case 51: /* DECLARATION_STATEMENT: _CONST _ID _ASSIGN EXPRESSION  */
#line 288 "parser.y"
                                {
    //const declaration
    // struct Symbol* var = lookup_symbol($2);
    // if(var != NULL){
    //     printf("Variable %s already declared \n", $2);
    //     exit(1);
    // }
    // switch ($4->type)
    // {
    // case INT:
    //     add_symbol($2, INT, 0, $4->value);
    //     break;
    // case REAL:
    //     add_symbol($2, REAL, 0, $4->value);
    //     break;
    // case STRING:
    //     add_symbol($2, STRING, 0, $4->value);
    //     break;
    // case BOOL:
    //     add_symbol($2, BOOL, 0, $4->value);
    //     break;
    // case TABLEAU:
    //     add_symbol($2, TABLEAU, 0, $4->value);
    //     break;
    // default:
    //     break;
    // }
}
#line 1762 "parser.tab.c"
    break;

  case 52: /* EXPRESSION: EXPRESSION _ADD EXPRESSION  */
#line 318 "parser.y"
                                       { 
    // if($1->type != $3->type){
    //     printf("Type mismatch in addition \n");
    //     exit(1);
    // }
    // int quad= nextquad();
    // gen("ADD", $1->place, $3->place, quad);
}
#line 1775 "parser.tab.c"
    break;

  case 53: /* EXPRESSION: EXPRESSION _SUB EXPRESSION  */
#line 326 "parser.y"
                             { 
//   if($1->type != $3->type){
//         printf("Type mismatch in addition \n");
//         exit(1);
//     }
//     int quad= nextquad();
    // gen("SUB", $1->place, $3->place, quad);
}
#line 1788 "parser.tab.c"
    break;

  case 54: /* EXPRESSION: EXPRESSION _MULT EXPRESSION  */
#line 334 "parser.y"
                              { 
//   if($1->type != $3->type){
//         printf("Type mismatch in addition \n");
//         exit(1);
//     }
//     int quad= nextquad();
    // gen("MUL", $1->place, $3->place, quad);
}
#line 1801 "parser.tab.c"
    break;

  case 55: /* EXPRESSION: EXPRESSION _DIV EXPRESSION  */
#line 342 "parser.y"
                             { 
//   if($1->type != $3->type){
//         printf("Type mismatch in addition \n");
//         exit(1);
//     }
//     int quad= nextquad();
    // gen("DIV", $1->place, $3->place, quad);
}
#line 1814 "parser.tab.c"
    break;

  case 56: /* EXPRESSION: EXPRESSION _MOD EXPRESSION  */
#line 350 "parser.y"
                             { 
//   if($1->type != $3->type){
//         printf("Type mismatch in addition \n");
//         exit(1);
//     }
//     int quad= nextquad();
    // gen("MOD", $1->place, $3->place, quad);
}
#line 1827 "parser.tab.c"
    break;

  case 57: /* EXPRESSION: EXPRESSION _POW EXPRESSION  */
#line 358 "parser.y"
                             { 
//   if($1->type != $3->type){
//         printf("Type mismatch in addition \n");
//         exit(1);
//     }
//     int quad= nextquad();
    // gen("POW", $1->place, $3->place, quad);
}
#line 1840 "parser.tab.c"
    break;

  case 58: /* EXPRESSION: EXPRESSION _AND EXPRESSION  */
#line 366 "parser.y"
                             { 
//   if($1->type != $3->type){
//         printf("Type mismatch in addition \n");
//         exit(1);
//     }
//     int quad= nextquad();
    // gen("AND", $1->place, $3->place, quad);
}
#line 1853 "parser.tab.c"
    break;

  case 59: /* EXPRESSION: EXPRESSION _OR EXPRESSION  */
#line 374 "parser.y"
                             { 
//   if($1->type != $3->type){
//         printf("Type mismatch in addition \n");
//         exit(1);
//     }
//     int quad= nextquad();
    // gen("OR", $1->place, $3->place, quad);
}
#line 1866 "parser.tab.c"
    break;

  case 60: /* EXPRESSION: EXPRESSION _INFERIOR EXPRESSION  */
#line 382 "parser.y"
                                  { 
//   if($1->type != $3->type){
//         printf("Type mismatch in addition \n");
//         exit(1);
//     }
//     int quad= nextquad();
    // gen("INF", $1->place, $3->place, quad);
}
#line 1879 "parser.tab.c"
    break;

  case 61: /* EXPRESSION: EXPRESSION _SUPERIOR EXPRESSION  */
#line 390 "parser.y"
                                  { 
//   if($1->type != $3->type){
//         printf("Type mismatch in addition \n");
//         exit(1);
//     }
//     int quad= nextquad();
    // gen("SUP", $1->place, $3->place, quad);
}
#line 1892 "parser.tab.c"
    break;

  case 62: /* EXPRESSION: EXPRESSION _INFERIOR_EQUAL EXPRESSION  */
#line 398 "parser.y"
                                        { 
//   if($1->type != $3->type){
//         printf("Type mismatch in addition \n");
//         exit(1);
//     }
//     int quad= nextquad();
    // gen("INFE", $1->place, $3->place, quad);
}
#line 1905 "parser.tab.c"
    break;

  case 63: /* EXPRESSION: EXPRESSION _SUPERIOR_EQUAL EXPRESSION  */
#line 406 "parser.y"
                                        { 
//   if($1->type != $3->type){
//         printf("Type mismatch in addition \n");
//         exit(1);
//     }
//     int quad= nextquad();
    // gen("SUPPE", $1->place, $3->place, quad);
}
#line 1918 "parser.tab.c"
    break;

  case 64: /* EXPRESSION: EXPRESSION _EQUAL EXPRESSION  */
#line 414 "parser.y"
                               { 
//   if($1->type != $3->type){
//         printf("Type mismatch in addition \n");
//         exit(1);
//     }
//     int quad= nextquad();
    // gen("EQUAL", $1->place, $3->place, quad);
}
#line 1931 "parser.tab.c"
    break;

  case 65: /* EXPRESSION: EXPRESSION _NON_EQUAL EXPRESSION  */
#line 422 "parser.y"
                                   { 
//   if($1->type != $3->type){
//         printf("Type mismatch in addition \n");
//         exit(1);
//     }
//     int quad= nextquad();
    // gen("NEQUAL", $1->place, $3->place, quad);
}
#line 1944 "parser.tab.c"
    break;

  case 66: /* EXPRESSION: _OPEN_PARENTHESIS EXPRESSION _CLOSE_PARENTHESIS  */
#line 430 "parser.y"
                                                  { 
    // int quad= nextquad();
    // gen("EQ", $2->place,-1, quad);
}
#line 1953 "parser.tab.c"
    break;

  case 67: /* EXPRESSION: _NOT EXPRESSION  */
#line 434 "parser.y"
                  { 
    // int quad= nextquad();
    // gen("NOT", $2->place,-1, quad);
}
#line 1962 "parser.tab.c"
    break;

  case 68: /* EXPRESSION: _ID  */
#line 438 "parser.y"
      {
    // int quad= nextquad();
    // gen("EQ", $1->place,-1, quad);
}
#line 1971 "parser.tab.c"
    break;

  case 69: /* EXPRESSION: _INTVALUE  */
#line 442 "parser.y"
            {
    // $$->type="INT";
    // $$->value=$1;
}
#line 1980 "parser.tab.c"
    break;

  case 70: /* EXPRESSION: _FLOATVALUE  */
#line 446 "parser.y"
              {
    // $$->type="FLOAT";
    // $$->value=$1;
}
#line 1989 "parser.tab.c"
    break;

  case 71: /* EXPRESSION: _BOOLVALUE  */
#line 450 "parser.y"
             {
    // $$->type="BOOL";
}
#line 1997 "parser.tab.c"
    break;

  case 72: /* EXPRESSION: _STRINGVALUE  */
#line 453 "parser.y"
               {

}
#line 2005 "parser.tab.c"
    break;

  case 73: /* EXPRESSION: OBJECT_VALUE  */
#line 456 "parser.y"
               {
    // $$=$1;
}
#line 2013 "parser.tab.c"
    break;

  case 74: /* EXPRESSION: _OPEN_BRACKET TABLEVALUE _CLOSE_BRACKET  */
#line 459 "parser.y"
                                          {
    // $$=$2;
}
#line 2021 "parser.tab.c"
    break;

  case 75: /* EXPRESSION: FUNCTION_INVOCATION_STATEMENT  */
#line 462 "parser.y"
                                {
    // int quad= nextquad();
    // // gen("EQ", $1->place,-1, quad);
}
#line 2030 "parser.tab.c"
    break;

  case 76: /* EXPRESSION: ARRAY_ELEMENT  */
#line 466 "parser.y"
                {
    // int quad= nextquad();
    // // gen("EQ", $1->place,-1, quad);
}
#line 2039 "parser.tab.c"
    break;

  case 77: /* FUNCTION_INVOCATION_STATEMENT: _ID _OPEN_PARENTHESIS PARAMS _CLOSE_PARENTHESIS  */
#line 472 "parser.y"
                                                                                {
    // struct Symbol* var = lookup_symbol($1);
    // if(var == NULL){
    //     printf("Function %s not declared \n", $1);
    //     exit(1);
    // }
    // if(var->is_function != 1){
    //     printf("Variable %s is not a function \n", $1);
    //     exit(1);
    // }
    // int quad= nextquad();
    // // gen("EQ", var->place, -1, quad);
}
#line 2057 "parser.tab.c"
    break;

  case 78: /* OBJECT_VALUE: OBJECT_VALUE _DOT _ID  */
#line 486 "parser.y"
                                     {}
#line 2063 "parser.tab.c"
    break;

  case 79: /* OBJECT_VALUE: _ID _DOT _ID  */
#line 487 "parser.y"
              {}
#line 2069 "parser.tab.c"
    break;

  case 80: /* ARRAY_ELEMENT: _ID _OPEN_BRACKET _INTVALUE _CLOSE_BRACKET  */
#line 489 "parser.y"
                                                           {
    // struct Symbol* var = lookup_symbol($1);
    // if(var == NULL){
    //     printf("Variable %s not declared \n", $1);
    //     exit(1);
    // }
    
    // int quad= nextquad();
    // //gen("EQ", $1->place,-1, quad);
}
#line 2084 "parser.tab.c"
    break;


#line 2088 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 508 "parser.y"

main(int argc, char **argv)
{
    init_symbol_table();
    yyparse();
  // init symbol table
    
}

yyerror(char *s)
{
  fprintf(stderr, "Error: %s\n", s);
}
