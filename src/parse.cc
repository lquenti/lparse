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
#line 21 "parse.yy"

#include "parsetree.h"
#include "debug.h"
#include "term.h"
#include "symbol.h"
#include "global.h"
#ifndef ERROR_H
#include "error.h"
#endif
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#ifdef MS_WINDOWS
#include <malloc.h>
#define alloca _alloca
#endif

extern int yylex(void);
extern ParseNode *logic_program;

void read_option(char *);

ParseNode *tmp_node;


// Turn YYDEBUG on while debugging
#if DEBUG & DBG_PARSE
#define YYDEBUG 1
#else
#define YYDEBUG 0
#endif

//#define YYERROR_VERBOSE

long lineno = 1;
long lval1 = 0, lval2 = 0;
int return_symbol = 0;
int return_funcsymbol = 1;

extern char *yytext;

void yyerror(const char *st)
{
  sys_data.num_errors++;
  fprintf(stderr, "%s: %s", error_file_and_line(lineno), st);
  if (strlen(yytext))
    fprintf(stderr, " before '%s'", yytext);
  fprintf(stderr, "\n");
}


#line 124 "parse.cc"

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

#include "parse.cc.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUMBER = 3,                     /* NUMBER  */
  YYSYMBOL_WEIGHT = 4,                     /* WEIGHT  */
  YYSYMBOL_MINIMIZE = 5,                   /* MINIMIZE  */
  YYSYMBOL_MAXIMIZE = 6,                   /* MAXIMIZE  */
  YYSYMBOL_HIDE = 7,                       /* HIDE  */
  YYSYMBOL_EXP = 8,                        /* EXP  */
  YYSYMBOL_FUNCTION = 9,                   /* FUNCTION  */
  YYSYMBOL_FUNCSYMBOL = 10,                /* FUNCSYMBOL  */
  YYSYMBOL_IF = 11,                        /* IF  */
  YYSYMBOL_NOT = 12,                       /* NOT  */
  YYSYMBOL_COMPUTE = 13,                   /* COMPUTE  */
  YYSYMBOL_IDENTIFIER = 14,                /* IDENTIFIER  */
  YYSYMBOL_VARIABLE = 15,                  /* VARIABLE  */
  YYSYMBOL_CONST = 16,                     /* CONST  */
  YYSYMBOL_EXTERNAL = 17,                  /* EXTERNAL  */
  YYSYMBOL_SHOW = 18,                      /* SHOW  */
  YYSYMBOL_OPTION = 19,                    /* OPTION  */
  YYSYMBOL_VARIABLEDEF = 20,               /* VARIABLEDEF  */
  YYSYMBOL_LE = 21,                        /* LE  */
  YYSYMBOL_GE = 22,                        /* GE  */
  YYSYMBOL_EQ = 23,                        /* EQ  */
  YYSYMBOL_NEQ = 24,                       /* NEQ  */
  YYSYMBOL_DOTS = 25,                      /* DOTS  */
  YYSYMBOL_LT = 26,                        /* LT  */
  YYSYMBOL_GT = 27,                        /* GT  */
  YYSYMBOL_ASSIGN = 28,                    /* ASSIGN  */
  YYSYMBOL_MOD = 29,                       /* MOD  */
  YYSYMBOL_COMMAS = 30,                    /* COMMAS  */
  YYSYMBOL_NORM = 31,                      /* NORM  */
  YYSYMBOL_METAPRIORITY = 32,              /* METAPRIORITY  */
  YYSYMBOL_TYPE = 33,                      /* TYPE  */
  YYSYMBOL_PREDICATE = 34,                 /* PREDICATE  */
  YYSYMBOL_NONDOMAIN = 35,                 /* NONDOMAIN  */
  YYSYMBOL_36_ = 36,                       /* '&'  */
  YYSYMBOL_37_ = 37,                       /* '|'  */
  YYSYMBOL_38_ = 38,                       /* '^'  */
  YYSYMBOL_39_ = 39,                       /* '+'  */
  YYSYMBOL_40_ = 40,                       /* '-'  */
  YYSYMBOL_41_ = 41,                       /* '*'  */
  YYSYMBOL_42_ = 42,                       /* '/'  */
  YYSYMBOL_UMINUS = 43,                    /* UMINUS  */
  YYSYMBOL_44_ = 44,                       /* '~'  */
  YYSYMBOL_45_ = 45,                       /* '('  */
  YYSYMBOL_46_ = 46,                       /* ')'  */
  YYSYMBOL_47_ = 47,                       /* ':'  */
  YYSYMBOL_48_ = 48,                       /* ','  */
  YYSYMBOL_49_ = 49,                       /* '.'  */
  YYSYMBOL_50_ = 50,                       /* '['  */
  YYSYMBOL_51_ = 51,                       /* ']'  */
  YYSYMBOL_52_ = 52,                       /* '{'  */
  YYSYMBOL_53_ = 53,                       /* '}'  */
  YYSYMBOL_54_ = 54,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 55,                  /* $accept  */
  YYSYMBOL_program = 56,                   /* program  */
  YYSYMBOL_rules = 57,                     /* rules  */
  YYSYMBOL_statement = 58,                 /* statement  */
  YYSYMBOL_directive = 59,                 /* directive  */
  YYSYMBOL_declaration = 60,               /* declaration  */
  YYSYMBOL_rule = 61,                      /* rule  */
  YYSYMBOL_head = 62,                      /* head  */
  YYSYMBOL_tail = 63,                      /* tail  */
  YYSYMBOL_basic_tail = 64,                /* basic_tail  */
  YYSYMBOL_special_tail = 65,              /* special_tail  */
  YYSYMBOL_special_head = 66,              /* special_head  */
  YYSYMBOL_headlist = 67,                  /* headlist  */
  YYSYMBOL_ordered_disjunction = 68,       /* ordered_disjunction  */
  YYSYMBOL_basic_literal = 69,             /* basic_literal  */
  YYSYMBOL_literal = 70,                   /* literal  */
  YYSYMBOL_condition_list = 71,            /* condition_list  */
  YYSYMBOL_weight_def = 72,                /* weight_def  */
  YYSYMBOL_atom = 73,                      /* atom  */
  YYSYMBOL_bound = 74,                     /* bound  */
  YYSYMBOL_function = 75,                  /* function  */
  YYSYMBOL_arguments = 76,                 /* arguments  */
  YYSYMBOL_arglist = 77,                   /* arglist  */
  YYSYMBOL_term = 78,                      /* term  */
  YYSYMBOL_constant = 79,                  /* constant  */
  YYSYMBOL_range = 80,                     /* range  */
  YYSYMBOL_expr = 81,                      /* expr  */
  YYSYMBOL_nc_expr = 82,                   /* nc_expr  */
  YYSYMBOL_literal_list = 83,              /* literal_list  */
  YYSYMBOL_compute_list = 84,              /* compute_list  */
  YYSYMBOL_compute_stmt = 85,              /* compute_stmt  */
  YYSYMBOL_optimize_stmt = 86,             /* optimize_stmt  */
  YYSYMBOL_models = 87                     /* models  */
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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1010

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  136
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  264

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   291


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
       2,     2,     2,     2,     2,     2,     2,     2,    36,     2,
      45,    46,    41,    39,    48,    40,    49,    42,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    47,    54,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,    51,    38,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,    37,    53,    44,     2,     2,     2,
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
      35,    43
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   109,   109,   113,   115,   117,   119,   122,   125,   127,
     129,   133,   137,   139,   142,   144,   146,   194,   200,   212,
     215,   217,   220,   222,   224,   228,   230,   232,   236,   238,
     241,   244,   246,   248,   252,   254,   256,   259,   264,   269,
     276,   280,   284,   287,   291,   296,   303,   305,   310,   318,
     324,   326,   328,   330,   335,   337,   342,   344,   347,   350,
     354,   356,   362,   364,   368,   371,   375,   377,   380,   383,
     389,   391,   395,   397,   401,   403,   413,   425,   445,   454,
     459,   463,   474,   476,   479,   482,   484,   488,   490,   492,
     494,   496,   498,   500,   502,   504,   506,   508,   510,   515,
     517,   519,   521,   524,   526,   528,   532,   534,   537,   541,
     543,   545,   547,   549,   551,   553,   555,   557,   559,   561,
     563,   568,   570,   572,   574,   577,   582,   584,   588,   591,
     595,   600,   603,   606,   609,   614,   637
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
  "\"end of file\"", "error", "\"invalid token\"", "NUMBER", "WEIGHT",
  "MINIMIZE", "MAXIMIZE", "HIDE", "EXP", "FUNCTION", "FUNCSYMBOL", "IF",
  "NOT", "COMPUTE", "IDENTIFIER", "VARIABLE", "CONST", "EXTERNAL", "SHOW",
  "OPTION", "VARIABLEDEF", "LE", "GE", "EQ", "NEQ", "DOTS", "LT", "GT",
  "ASSIGN", "MOD", "COMMAS", "NORM", "METAPRIORITY", "TYPE", "PREDICATE",
  "NONDOMAIN", "'&'", "'|'", "'^'", "'+'", "'-'", "'*'", "'/'", "UMINUS",
  "'~'", "'('", "')'", "':'", "','", "'.'", "'['", "']'", "'{'", "'}'",
  "';'", "$accept", "program", "rules", "statement", "directive",
  "declaration", "rule", "head", "tail", "basic_tail", "special_tail",
  "special_head", "headlist", "ordered_disjunction", "basic_literal",
  "literal", "condition_list", "weight_def", "atom", "bound", "function",
  "arguments", "arglist", "term", "constant", "range", "expr", "nc_expr",
  "literal_list", "compute_list", "compute_stmt", "optimize_stmt",
  "models", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-123)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-126)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -123,    50,   283,  -123,    17,  -123,    -3,    29,    38,   105,
      53,    26,   603,    62,   641,   577,  -123,     5,   105,   105,
    -123,   105,    72,   105,   105,   105,   656,   641,   641,   641,
      73,  -123,  -123,    76,    88,  -123,    84,   112,     8,   117,
    -123,  -123,   858,  -123,  -123,  -123,    72,    86,   680,   104,
    -123,   109,   115,   105,   105,   105,   105,   115,  -123,   695,
     121,    22,   641,   641,   641,   641,  -123,   127,   130,  -123,
     124,    45,   880,  -123,   134,  -123,   641,   858,   142,   695,
     160,   169,   641,   115,   115,   115,   175,   115,   115,   115,
     902,   -19,   201,   201,   783,  -123,  -123,   603,    72,    72,
      72,   105,   105,   641,   641,   641,   641,   641,   641,   641,
     641,   641,   641,   641,   641,   641,   641,   641,   641,   163,
     719,   176,   166,  -123,   835,   695,   734,   105,   115,   164,
     165,   168,   167,   136,  -123,   924,   151,   257,   809,   603,
     603,   603,   603,   641,   641,   641,   641,   641,   641,   641,
     641,   641,   641,   641,   641,   641,   641,   641,   695,   105,
     -23,   181,   641,   641,   858,  -123,   758,  -123,  -123,  -123,
    -123,  -123,   112,  -123,   -18,   -32,   201,    -1,    -1,    -1,
      -1,    -1,    -1,   946,   201,   968,   968,   968,    27,    27,
     201,   201,   734,   178,   190,   641,  -123,   641,   641,  -123,
    -123,   858,   191,  -123,   880,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,   695,   177,   184,  -123,  -123,  -123,    49,    11,
      36,   219,   414,   439,   456,   481,   558,   301,   317,   361,
     397,   498,   523,   326,   381,   137,   192,  -123,   695,   858,
     858,   641,   641,   191,   695,  -123,   858,   858,   858,   734,
    -123,   641,   641,  -123,  -123,   181,  -123,  -123,   159,  -123,
    -123,  -123,  -123,  -123
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,     0,     0,     1,     0,    79,     0,     0,     0,    15,
       0,     0,    65,     0,   136,    78,   105,     0,     0,     0,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     6,     8,     0,    25,    29,    42,    43,    28,     0,
     103,   104,    64,     9,    10,     5,     0,    63,     0,    54,
     127,    50,    13,   129,   129,   129,   129,    14,    12,     0,
       0,     0,     0,     0,     0,     0,    27,    32,    33,    35,
       0,   103,    64,    37,     0,    78,     0,   135,     0,     0,
      78,     0,     0,    19,    20,    21,     0,    22,    23,    24,
       0,     0,    86,    98,     0,     4,     3,    65,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    51,
       0,    76,     0,    74,    75,     0,     0,     0,   128,     0,
       0,     0,     0,     0,    73,     0,    86,    98,     0,     0,
      65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   129,
       0,    70,     0,     0,    17,    84,    83,    45,    82,    26,
      46,    48,    44,    49,     0,     0,    85,    95,    97,    92,
      93,    94,    96,   102,    91,    99,   100,   101,    87,    88,
      89,    90,     0,     0,     0,     0,    68,     0,     0,    55,
      61,    60,    52,    57,     0,    58,   126,   134,   133,   132,
     131,    66,     0,    83,    82,    34,    36,    31,     0,     0,
      95,    97,    92,    93,    94,    96,   124,    91,    99,   100,
     101,    87,    88,    89,    90,     0,     0,    62,     0,    16,
      18,    65,    65,    53,     0,    69,    77,    80,    81,     0,
      72,    65,    65,    67,   130,    71,    41,    40,     0,    56,
      59,    38,    39,    66
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,   -92,   -84,
    -123,  -123,  -123,   144,  -123,    31,    54,  -123,   155,     0,
      -6,  -123,   -76,   -47,   239,  -123,    -2,  -122,    28,   -41,
    -123,  -123,  -123
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    30,    31,    32,    33,    34,    66,    67,
      68,    35,    36,    37,    49,    50,   202,   199,    51,    70,
      40,   160,   133,   134,    41,   123,   124,    73,   128,   129,
      43,    44,    78
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,   122,    39,   161,   205,   169,    71,   103,     5,    46,
      72,    47,    77,   130,   131,   132,   127,   216,   167,    80,
      81,   242,   -49,   237,    90,    92,    93,    94,   111,   127,
     127,   238,    74,   241,    52,   103,    47,    57,   115,   116,
     117,   118,    48,    69,   103,   -47,    83,    84,   217,    85,
       3,    87,    88,    89,    91,   100,   111,   218,   219,   139,
     135,   136,   137,   138,   252,   111,    45,    58,   117,   118,
     205,    59,    74,   194,    90,   115,   116,   117,   118,    53,
     164,    54,   235,  -117,  -117,  -117,    47,  -117,    55,  -117,
      56,    71,  -125,  -125,  -125,    72,  -125,   139,  -125,    97,
     251,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,    46,   236,    47,
      71,    98,    95,   201,   204,    96,    99,   260,    69,   174,
     175,    79,   125,    71,    71,    71,    71,   204,    72,   204,
     204,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   126,    38,   206,   103,
     239,   240,   255,   127,   186,   250,    48,   101,   258,   102,
     215,    69,    69,    69,   141,   139,   142,    86,   140,   158,
       5,    60,   211,   253,   212,   212,    71,    11,   162,    13,
     204,    75,    16,   246,   159,   247,   248,   163,  -108,  -108,
    -108,   119,  -108,   121,  -108,   263,   165,   212,    22,   103,
     192,   186,   196,   195,   121,   207,   119,    27,   208,   209,
     210,    28,    29,   244,  -107,  -107,  -107,   103,  -107,   212,
    -107,  -106,  -106,  -106,   121,  -106,   245,  -106,   249,    42,
      42,   256,   257,    71,   172,   254,   243,   204,   111,    42,
      42,   261,   262,   170,   171,   173,    82,     0,   115,   116,
     117,   118,     0,     0,     0,   103,  -119,  -119,  -119,     0,
    -119,     0,  -119,     0,     0,   121,     0,     0,     0,     0,
     200,   203,     0,    -2,     4,     0,     5,     6,     7,     8,
       9,     0,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,  -120,  -120,  -120,     0,  -120,   103,
    -120,     0,     0,   121,    22,     0,    23,    24,    25,     0,
      26,     0,     0,    27,     0,   103,     0,    28,    29,     0,
       0,     0,   -30,   -65,   103,   -65,     0,     0,   104,   105,
     106,   107,     0,   108,   109,     0,   111,   203,  -113,  -113,
    -113,     0,  -113,     0,  -113,     0,   115,   116,   117,   118,
       0,     0,     0,     0,  -121,  -121,  -121,   121,  -121,   103,
    -121,     0,     0,  -111,  -111,  -111,     0,  -111,     0,  -111,
       0,     0,   104,   105,   106,   107,     0,   108,   109,   103,
     111,     0,     0,   121,     0,     0,     0,     0,     0,   121,
     115,   116,   117,   118,   259,   103,     0,     0,  -122,  -122,
    -122,     0,  -122,     0,  -122,     0,     0,     0,   104,   105,
     106,   107,   103,   108,   109,     0,   111,     0,  -112,  -112,
    -112,     0,  -112,     0,  -112,     0,   115,   116,   117,   118,
       0,     0,     0,   111,  -123,  -123,  -123,   103,  -123,     0,
    -123,     0,     0,   115,   116,   117,   118,     0,     0,     0,
       0,  -114,  -114,  -114,   103,  -114,     0,  -114,   111,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   115,   116,
     117,   118,     0,     0,     0,   111,  -115,  -115,  -115,   103,
    -115,     0,  -115,     0,     0,   115,   116,   117,   118,     0,
       0,     0,     0,  -116,  -116,  -116,   103,  -116,     0,  -116,
     111,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     115,   116,   117,   118,     0,     0,     0,   111,  -118,  -118,
    -118,   103,  -118,     0,  -118,     0,     0,     0,     0,   117,
     118,     0,     0,     0,     0,  -109,  -109,  -109,     0,  -109,
       0,  -109,   111,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   117,   118,   103,     0,     0,     0,
    -110,  -110,  -110,     0,  -110,     0,  -110,     0,     0,   104,
     105,   106,   107,     0,   108,   109,  -102,   111,   -63,     0,
       0,   -63,     0,     0,   112,   113,   114,   115,   116,   117,
     118,     0,     0,     0,     0,   -63,     5,    60,  -102,     0,
    -102,     0,     0,    11,   -63,    61,     0,    15,    16,     0,
       0,     0,    79,   -63,   -63,   -63,   -63,     0,   -63,     0,
     -63,   -63,     0,     0,    22,     0,     0,     0,     0,     0,
      62,     0,     0,    63,     5,    60,     0,    64,    65,     0,
       0,    11,     0,    13,     0,    75,    16,     0,     0,     5,
      60,     0,     0,     0,     0,     0,    11,     0,    61,     0,
      15,    16,    22,     0,     0,     0,     0,     0,    76,     0,
       0,    27,     0,     5,    60,    28,    29,    22,     0,     0,
      11,     0,   120,    76,    15,    16,    27,     0,     5,    60,
      28,    29,     0,     0,     0,    11,     0,    13,     0,    15,
      16,    22,     0,     0,     0,     0,     0,    76,     0,     0,
      27,     0,     5,    60,    28,    29,    22,     0,     0,   193,
       0,    13,    76,    15,    16,    27,     0,     5,    60,    28,
      29,     0,     0,     0,    11,     0,    13,     0,    15,    16,
      22,     0,     0,     0,     0,     0,    76,     0,     0,    27,
       0,     5,    60,    28,    29,    22,     0,     0,    11,     0,
      13,    62,    75,    16,    63,     0,     0,     0,    64,    65,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
       0,   103,     0,     0,     0,     0,     0,     0,    27,     0,
       0,     0,    28,    29,   104,   105,   106,   107,     0,   108,
     109,   110,   111,     0,     0,     0,     0,   103,     0,   112,
     113,   114,   115,   116,   117,   118,     0,     0,     0,   168,
     104,   105,   106,   107,     0,   108,   109,   110,   111,     0,
       0,     0,     0,   103,     0,   112,   113,   114,   115,   116,
     117,   118,     0,     0,     0,   214,   104,   105,   106,   107,
     197,   108,   109,   110,   111,   198,   103,     0,     0,     0,
       0,   112,   113,   114,   115,   116,   117,   118,     0,   104,
     105,   106,   107,     0,   108,   109,   110,   111,   103,     0,
       0,     0,     0,     0,   112,   113,   114,   115,   116,   117,
     118,   143,   144,   145,   146,     0,   147,   148,   149,   150,
     103,     0,     0,     0,     0,     0,   151,   152,   153,   154,
     155,   156,   157,   104,   105,   106,   107,     0,   108,   109,
     110,   111,   103,     0,     0,     0,     0,     0,   112,   166,
     114,   115,   116,   117,   118,   104,   105,   106,   107,     0,
     108,   109,   110,   111,   103,     0,     0,     0,     0,     0,
     112,   213,   114,   115,   116,   117,   118,   104,   105,   106,
     107,     0,   108,   109,     0,   111,   103,     0,     0,     0,
       0,     0,   112,   113,   114,   115,   116,   117,   118,   104,
     105,   106,   107,     0,   108,   109,     0,   111,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   115,   116,   117,
     118
};

static const yytype_int16 yycheck[] =
{
       2,    48,     2,    79,   126,    97,    12,     8,     3,    12,
      12,    14,    14,    54,    55,    56,    48,   139,    37,    14,
      15,    53,    14,    46,    26,    27,    28,    29,    29,    48,
      48,    54,    10,    51,     6,     8,    14,     9,    39,    40,
      41,    42,    45,    12,     8,    37,    18,    19,   140,    21,
       0,    23,    24,    25,    26,    47,    29,   141,   142,    48,
      62,    63,    64,    65,    53,    29,    49,    14,    41,    42,
     192,    45,    10,   120,    76,    39,    40,    41,    42,    50,
      82,    52,   158,    47,    48,    49,    14,    51,    50,    53,
      52,    97,    47,    48,    49,    97,    51,    48,    53,    11,
      51,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,    12,   159,    14,
     126,    37,    49,   125,   126,    49,    14,   249,    97,   101,
     102,    45,    28,   139,   140,   141,   142,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,    47,     2,   127,     8,
     162,   163,   238,    48,   166,   212,    45,    50,   244,    52,
     139,   140,   141,   142,    50,    48,    52,    22,    48,    45,
       3,     4,    46,    46,    48,    48,   192,    10,    28,    12,
     192,    14,    15,   195,    52,   197,   198,    28,    47,    48,
      49,    46,    51,    48,    53,    46,    31,    48,    31,     8,
      47,   213,    46,    37,    59,    51,    61,    40,    53,    51,
      53,    44,    45,    45,    47,    48,    49,     8,    51,    48,
      53,    47,    48,    49,    79,    51,    46,    53,    47,   241,
     242,   241,   242,   249,   100,    53,   192,   249,    29,   251,
     252,   251,   252,    98,    99,   100,    17,    -1,    39,    40,
      41,    42,    -1,    -1,    -1,     8,    47,    48,    49,    -1,
      51,    -1,    53,    -1,    -1,   120,    -1,    -1,    -1,    -1,
     125,   126,    -1,     0,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    47,    48,    49,    -1,    51,     8,
      53,    -1,    -1,   158,    31,    -1,    33,    34,    35,    -1,
      37,    -1,    -1,    40,    -1,     8,    -1,    44,    45,    -1,
      -1,    -1,    49,    50,     8,    52,    -1,    -1,    21,    22,
      23,    24,    -1,    26,    27,    -1,    29,   192,    47,    48,
      49,    -1,    51,    -1,    53,    -1,    39,    40,    41,    42,
      -1,    -1,    -1,    -1,    47,    48,    49,   212,    51,     8,
      53,    -1,    -1,    47,    48,    49,    -1,    51,    -1,    53,
      -1,    -1,    21,    22,    23,    24,    -1,    26,    27,     8,
      29,    -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,   244,
      39,    40,    41,    42,   249,     8,    -1,    -1,    47,    48,
      49,    -1,    51,    -1,    53,    -1,    -1,    -1,    21,    22,
      23,    24,     8,    26,    27,    -1,    29,    -1,    47,    48,
      49,    -1,    51,    -1,    53,    -1,    39,    40,    41,    42,
      -1,    -1,    -1,    29,    47,    48,    49,     8,    51,    -1,
      53,    -1,    -1,    39,    40,    41,    42,    -1,    -1,    -1,
      -1,    47,    48,    49,     8,    51,    -1,    53,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,    42,    -1,    -1,    -1,    29,    47,    48,    49,     8,
      51,    -1,    53,    -1,    -1,    39,    40,    41,    42,    -1,
      -1,    -1,    -1,    47,    48,    49,     8,    51,    -1,    53,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    42,    -1,    -1,    -1,    29,    47,    48,
      49,     8,    51,    -1,    53,    -1,    -1,    -1,    -1,    41,
      42,    -1,    -1,    -1,    -1,    47,    48,    49,    -1,    51,
      -1,    53,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    42,     8,    -1,    -1,    -1,
      47,    48,    49,    -1,    51,    -1,    53,    -1,    -1,    21,
      22,    23,    24,    -1,    26,    27,    28,    29,    11,    -1,
      -1,    14,    -1,    -1,    36,    37,    38,    39,    40,    41,
      42,    -1,    -1,    -1,    -1,    28,     3,     4,    50,    -1,
      52,    -1,    -1,    10,    37,    12,    -1,    14,    15,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    -1,    51,    -1,
      53,    54,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    40,     3,     4,    -1,    44,    45,    -1,
      -1,    10,    -1,    12,    -1,    14,    15,    -1,    -1,     3,
       4,    -1,    -1,    -1,    -1,    -1,    10,    -1,    12,    -1,
      14,    15,    31,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    40,    -1,     3,     4,    44,    45,    31,    -1,    -1,
      10,    -1,    12,    37,    14,    15,    40,    -1,     3,     4,
      44,    45,    -1,    -1,    -1,    10,    -1,    12,    -1,    14,
      15,    31,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,
      40,    -1,     3,     4,    44,    45,    31,    -1,    -1,    10,
      -1,    12,    37,    14,    15,    40,    -1,     3,     4,    44,
      45,    -1,    -1,    -1,    10,    -1,    12,    -1,    14,    15,
      31,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    40,
      -1,     3,     4,    44,    45,    31,    -1,    -1,    10,    -1,
      12,    37,    14,    15,    40,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    44,    45,    21,    22,    23,    24,    -1,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,     8,    -1,    36,
      37,    38,    39,    40,    41,    42,    -1,    -1,    -1,    46,
      21,    22,    23,    24,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,     8,    -1,    36,    37,    38,    39,    40,
      41,    42,    -1,    -1,    -1,    46,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,     8,    -1,    -1,    -1,
      -1,    36,    37,    38,    39,    40,    41,    42,    -1,    21,
      22,    23,    24,    -1,    26,    27,    28,    29,     8,    -1,
      -1,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      42,    21,    22,    23,    24,    -1,    26,    27,    28,    29,
       8,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    42,    21,    22,    23,    24,    -1,    26,    27,
      28,    29,     8,    -1,    -1,    -1,    -1,    -1,    36,    37,
      38,    39,    40,    41,    42,    21,    22,    23,    24,    -1,
      26,    27,    28,    29,     8,    -1,    -1,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    42,    21,    22,    23,
      24,    -1,    26,    27,    -1,    29,     8,    -1,    -1,    -1,
      -1,    -1,    36,    37,    38,    39,    40,    41,    42,    21,
      22,    23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      42
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    56,    57,     0,     1,     3,     4,     5,     6,     7,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    31,    33,    34,    35,    37,    40,    44,    45,
      58,    59,    60,    61,    62,    66,    67,    68,    73,    74,
      75,    79,    81,    85,    86,    49,    12,    14,    45,    69,
      70,    73,    83,    50,    52,    50,    52,    83,    14,    45,
       4,    12,    37,    40,    44,    45,    63,    64,    65,    70,
      74,    75,    81,    82,    10,    14,    37,    81,    87,    45,
      14,    15,    79,    83,    83,    83,    73,    83,    83,    83,
      81,    83,    81,    81,    81,    49,    49,    11,    37,    14,
      47,    50,    52,     8,    21,    22,    23,    24,    26,    27,
      28,    29,    36,    37,    38,    39,    40,    41,    42,    73,
      12,    73,    78,    80,    81,    28,    47,    48,    83,    84,
      84,    84,    84,    77,    78,    81,    81,    81,    81,    48,
      48,    50,    52,    21,    22,    23,    24,    26,    27,    28,
      29,    36,    37,    38,    39,    40,    41,    42,    45,    52,
      76,    77,    28,    28,    81,    31,    37,    37,    46,    63,
      73,    73,    68,    73,    83,    83,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    47,    10,    78,    37,    46,    25,    30,    72,
      73,    81,    71,    73,    81,    82,    70,    51,    53,    51,
      53,    46,    48,    37,    46,    70,    82,    63,    64,    64,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    77,    84,    46,    54,    81,
      81,    51,    53,    71,    45,    46,    81,    81,    81,    47,
      78,    51,    53,    46,    53,    77,    74,    74,    77,    73,
      82,    74,    74,    46
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    55,    56,    57,    57,    57,    57,    57,    58,    58,
      58,    59,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    61,    61,    61,    62,    62,
      62,    63,    63,    63,    64,    64,    64,    64,    65,    65,
      66,    66,    66,    66,    66,    66,    67,    67,    68,    68,
      69,    69,    69,    69,    70,    70,    71,    71,    71,    71,
      72,    72,    73,    73,    74,    74,    75,    75,    75,    75,
      76,    76,    77,    77,    78,    78,    78,    78,    79,    79,
      80,    80,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    83,    83,    84,    84,
      85,    86,    86,    86,    86,    87,    87
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     3,     3,     2,     0,     1,     1,
       1,     1,     2,     2,     2,     1,     4,     3,     4,     2,
       2,     2,     2,     2,     2,     1,     3,     2,     1,     1,
       0,     3,     1,     1,     3,     1,     3,     1,     5,     5,
       5,     5,     1,     1,     3,     3,     3,     1,     3,     1,
       1,     2,     3,     4,     1,     3,     3,     1,     1,     3,
       1,     1,     4,     1,     1,     0,     4,     5,     4,     5,
       1,     3,     3,     1,     1,     1,     1,     3,     1,     1,
       3,     3,     3,     3,     3,     3,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       3,     3,     3,     1,     1,     1,     3,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     3,     3,     3,     3,     1,     3,     1,     1,     0,
       5,     4,     4,     4,     4,     1,     0
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
  case 2: /* program: rules  */
#line 110 "parse.yy"
        { logic_program = (yyvsp[0].pn); }
#line 1525 "parse.cc"
    break;

  case 3: /* rules: rules rule '.'  */
#line 114 "parse.yy"
      { (yyval.pn) = new ParseNode(PT_RULES, NULL, (yyvsp[-1].pn), (yyvsp[-2].pn), lineno); }
#line 1531 "parse.cc"
    break;

  case 4: /* rules: rules statement '.'  */
#line 116 "parse.yy"
      { (yyval.pn) = new ParseNode(PT_RULES, NULL, (yyvsp[-1].pn), (yyvsp[-2].pn), lineno); }
#line 1537 "parse.cc"
    break;

  case 5: /* rules: rules error '.'  */
#line 118 "parse.yy"
      { yyerrok; }
#line 1543 "parse.cc"
    break;

  case 6: /* rules: rules directive  */
#line 120 "parse.yy"
      { (yyval.pn) = new ParseNode(PT_RULES, NULL, (yyvsp[0].pn), (yyvsp[-1].pn), lineno); }
#line 1549 "parse.cc"
    break;

  case 7: /* rules: %empty  */
#line 122 "parse.yy"
      { (yyval.pn) = NULL; }
#line 1555 "parse.cc"
    break;

  case 8: /* statement: declaration  */
#line 126 "parse.yy"
          { (yyval.pn) = (yyvsp[0].pn); }
#line 1561 "parse.cc"
    break;

  case 9: /* statement: compute_stmt  */
#line 128 "parse.yy"
          { (yyval.pn) = (yyvsp[0].pn); }
#line 1567 "parse.cc"
    break;

  case 10: /* statement: optimize_stmt  */
#line 130 "parse.yy"
          { (yyval.pn) = (yyvsp[0].pn); }
#line 1573 "parse.cc"
    break;

  case 11: /* directive: OPTION  */
#line 134 "parse.yy"
          {read_option((yyvsp[0].s)); (yyval.pn) = NULL; }
#line 1579 "parse.cc"
    break;

  case 12: /* declaration: FUNCTION IDENTIFIER  */
#line 138 "parse.yy"
            { function_table->Insert((yyvsp[0].s)); (yyval.pn) = NULL; delete (yyvsp[0].s);}
#line 1585 "parse.cc"
    break;

  case 13: /* declaration: WEIGHT literal_list  */
#line 140 "parse.yy"
            { (yyval.pn) = new ParseNode(PT_DECLARATION, NULL, NULL, (yyvsp[0].pn), 
	                         lineno); }
#line 1592 "parse.cc"
    break;

  case 14: /* declaration: HIDE literal_list  */
#line 143 "parse.yy"
            { (yyval.pn) = new ParseNode(PT_HIDE, NULL, (yyvsp[0].pn), NULL, lineno); }
#line 1598 "parse.cc"
    break;

  case 15: /* declaration: HIDE  */
#line 145 "parse.yy"
            { (yyval.pn) = NULL; sys_data.hide_all = 1; }
#line 1604 "parse.cc"
    break;

  case 16: /* declaration: CONST IDENTIFIER ASSIGN expr  */
#line 147 "parse.yy"
            { 
              lval1 = (yyvsp[0].pn)->Eval();
              if (lval1 == ERROR_NUMBER) {
                 error(USR_ERR, "%s: Invalid constant declaration: ",
                       error_file_and_line(lineno));
                 fprintf(stderr, "\t\tconst %s = ", (yyvsp[-2].s));
                 (yyvsp[0].pn)->PrintExpression();
                 fprintf(stderr, ".\n   The expression is not a"
    	                 " valid constant expression\n");
              }	 
              long index;
              int needed = 0;
              int exists = 0;

              if ((index = numeric_constant_table->LookIndex((yyvsp[-2].s))) >= 0) { 
	              exists = 1;
    		      needed = 1;
                  if (lval1 != numeric_constant_table->Lookup((yyvsp[-2].s))) { 
                    long val;
                    if (command_line_constants) {
                      command_line_constants->ClearIterator();
                      while ((val = command_line_constants->Iterate())) {
		                --val;
                        if (val == index) {
                           needed = 0;
                           break;
                        }
                      }
                   }
                 } else { needed = 0; }
              }
              if (!exists) {
                  numeric_constant_table->Insert((yyvsp[-2].s));
                  numeric_constant_table->SetValue((yyvsp[-2].s), lval1);
              }
              if (needed) {
	          warn(WARN_SIMILAR, lineno, "the numeric constant '%s'"
	               " has two values defined for it, '%ld' and"
		       " '%ld'", (yyvsp[-2].s), numeric_constant_table->Lookup((yyvsp[-2].s)), lval1);
              }
              if (enabled_warning(WARN_SIMILAR) && (constant_table->Lookup((yyvsp[-2].s)) >= 0)) { 
                 warn(WARN_SIMILAR, lineno, "the constant '%s' is used as "
		     "both numeric and symbolic constant", (yyvsp[-2].s));
              }
	      delete [] (yyvsp[-2].s);
              delete (yyvsp[0].pn);
              (yyval.pn) = NULL; }
#line 1656 "parse.cc"
    break;

  case 17: /* declaration: CONST constant expr  */
#line 195 "parse.yy"
            { yyerror("numeric constant declarations now need a '='");
	      (yyval.pn) = NULL;
	      delete [] (yyvsp[-1].pn);
              delete (yyvsp[0].pn);
	    }
#line 1666 "parse.cc"
    break;

  case 18: /* declaration: CONST VARIABLE ASSIGN expr  */
#line 201 "parse.yy"
            {
              error(USR_ERR, "%s: Invalid constant declaration: ",
                    error_file_and_line(lineno));
              fprintf(stderr, "\t\tconst %s = ", (yyvsp[-2].s));
              (yyvsp[0].pn)->PrintExpression();
              fprintf(stderr, ".\n   The symbol '%s' is a variable, not"
	              " a constant\n", (yyvsp[-2].s));
              (yyval.pn) = NULL;
              delete (yyvsp[-2].s);
              delete (yyvsp[0].pn);
            }
#line 1682 "parse.cc"
    break;

  case 19: /* declaration: EXTERNAL literal_list  */
#line 213 "parse.yy"
            { (yyval.pn) = new ParseNode(PT_EXTERNAL, NULL, (yyvsp[0].pn), NULL, lineno);
	    }
#line 1689 "parse.cc"
    break;

  case 20: /* declaration: SHOW literal_list  */
#line 216 "parse.yy"
            { (yyval.pn) = new ParseNode(PT_SHOW, NULL, (yyvsp[0].pn), NULL, lineno); }
#line 1695 "parse.cc"
    break;

  case 21: /* declaration: VARIABLEDEF literal_list  */
#line 218 "parse.yy"
            { sys_data.has_implicit_domains = 1; (yyval.pn) = new
              ParseNode(PT_DIRECTIVE, NULL, NULL, (yyvsp[0].pn), lineno) ; }
#line 1702 "parse.cc"
    break;

  case 22: /* declaration: TYPE literal_list  */
#line 221 "parse.yy"
                { (yyval.pn) = NULL; }
#line 1708 "parse.cc"
    break;

  case 23: /* declaration: PREDICATE literal_list  */
#line 223 "parse.yy"
                { (yyval.pn) = NULL; }
#line 1714 "parse.cc"
    break;

  case 24: /* declaration: NONDOMAIN literal_list  */
#line 225 "parse.yy"
                { (yyval.pn) = new ParseNode(PT_DIRECTIVE, NULL, NULL, (yyvsp[0].pn), lineno, 1); }
#line 1720 "parse.cc"
    break;

  case 25: /* rule: head  */
#line 229 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_RULE, NULL, (yyvsp[0].pn), NULL, lineno); }
#line 1726 "parse.cc"
    break;

  case 26: /* rule: head IF tail  */
#line 231 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_RULE, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno); }
#line 1732 "parse.cc"
    break;

  case 27: /* rule: IF tail  */
#line 233 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_RULE, NULL, NULL, (yyvsp[0].pn), lineno); }
#line 1738 "parse.cc"
    break;

  case 28: /* head: atom  */
#line 237 "parse.yy"
     { (yyval.pn) = (yyvsp[0].pn); }
#line 1744 "parse.cc"
    break;

  case 29: /* head: special_head  */
#line 239 "parse.yy"
     { (yyval.pn) = (yyvsp[0].pn); }
#line 1750 "parse.cc"
    break;

  case 30: /* head: %empty  */
#line 241 "parse.yy"
     { (yyval.pn) = NULL; }
#line 1756 "parse.cc"
    break;

  case 31: /* tail: special_tail ',' tail  */
#line 245 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_TAIL, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno); }
#line 1762 "parse.cc"
    break;

  case 32: /* tail: basic_tail  */
#line 247 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_TAIL, NULL, (yyvsp[0].pn), NULL, lineno); }
#line 1768 "parse.cc"
    break;

  case 33: /* tail: special_tail  */
#line 249 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_TAIL, NULL, (yyvsp[0].pn), NULL, lineno); }
#line 1774 "parse.cc"
    break;

  case 34: /* basic_tail: basic_tail ',' literal  */
#line 253 "parse.yy"
           { (yyval.pn) = new ParseNode(PT_BASIC_TAIL, NULL, (yyvsp[0].pn), (yyvsp[-2].pn), lineno);}
#line 1780 "parse.cc"
    break;

  case 35: /* basic_tail: literal  */
#line 255 "parse.yy"
           { (yyval.pn) = new ParseNode(PT_BASIC_TAIL, NULL, (yyvsp[0].pn), NULL, lineno);}
#line 1786 "parse.cc"
    break;

  case 36: /* basic_tail: basic_tail ',' nc_expr  */
#line 257 "parse.yy"
           { (yyval.pn) = new ParseNode(PT_BASIC_TAIL, NULL, (yyvsp[0].pn), (yyvsp[-2].pn), lineno);
             if ((yyvsp[0].pn)->type == PT_CONSTANT) (yyvsp[0].pn)->type = PT_ATOM; }
#line 1793 "parse.cc"
    break;

  case 37: /* basic_tail: nc_expr  */
#line 260 "parse.yy"
           { (yyval.pn) = new ParseNode(PT_BASIC_TAIL, NULL, (yyvsp[0].pn), NULL,
                                lineno); }
#line 1800 "parse.cc"
    break;

  case 38: /* special_tail: bound '[' basic_tail ']' bound  */
#line 265 "parse.yy"
             { tmp_node = new ParseNode(PT_BOUND, NULL, (yyvsp[-4].pn), (yyvsp[0].pn),
	                                lineno); 
               (yyval.pn) = new ParseNode(PT_SPECIAL_TAIL, NULL, tmp_node, (yyvsp[-2].pn),
  	                          lineno, 0, 0, 1); }
#line 1809 "parse.cc"
    break;

  case 39: /* special_tail: bound '{' basic_tail '}' bound  */
#line 270 "parse.yy"
             { tmp_node = new ParseNode(PT_BOUND, NULL, (yyvsp[-4].pn), (yyvsp[0].pn),
	                                lineno);
               (yyval.pn) = new ParseNode(PT_SPECIAL_TAIL, NULL, tmp_node, (yyvsp[-2].pn),
  	                          lineno); }
#line 1818 "parse.cc"
    break;

  case 40: /* special_head: bound '{' literal_list '}' bound  */
#line 277 "parse.yy"
             { tmp_node = new ParseNode(PT_BOUND, NULL, (yyvsp[-4].pn), (yyvsp[0].pn), lineno);
               (yyval.pn) = new ParseNode(PT_SPECIAL_HEAD, NULL, tmp_node, (yyvsp[-2].pn),
  	                          lineno); }
#line 1826 "parse.cc"
    break;

  case 41: /* special_head: bound '[' literal_list ']' bound  */
#line 281 "parse.yy"
             { tmp_node = new ParseNode(PT_BOUND, NULL, (yyvsp[-4].pn), (yyvsp[0].pn), lineno);
			 	       (yyval.pn) = new ParseNode(PT_SPECIAL_HEAD, NULL, tmp_node, (yyvsp[-2].pn),
  	         		                    lineno, 0, 0,1); }
#line 1834 "parse.cc"
    break;

  case 42: /* special_head: headlist  */
#line 285 "parse.yy"
             { (yyval.pn) = new ParseNode(PT_SPECIAL_HEAD, NULL, NULL, (yyvsp[0].pn), 
  	                          lineno, 0, 1);  }
#line 1841 "parse.cc"
    break;

  case 43: /* special_head: ordered_disjunction  */
#line 288 "parse.yy"
             { (yyval.pn) = new ParseNode(PT_ORDERED_DISJUNCTION, NULL, NULL,
                         	  (yyvsp[0].pn), lineno);
         }
#line 1849 "parse.cc"
    break;

  case 44: /* special_head: atom ':' ordered_disjunction  */
#line 292 "parse.yy"
             {  
           (yyval.pn) = new ParseNode(PT_ORDERED_DISJUNCTION, NULL, (yyvsp[-2].pn),
               (yyvsp[0].pn), lineno);
         }
#line 1858 "parse.cc"
    break;

  case 45: /* special_head: '|' literal_list '|'  */
#line 297 "parse.yy"
         { (yyval.pn) = new ParseNode(PT_SPECIAL_HEAD, NULL, NULL, (yyvsp[-1].pn), 0, 1,
  	            lineno); }
#line 1865 "parse.cc"
    break;

  case 46: /* headlist: headlist '|' atom  */
#line 304 "parse.yy"
         { (yyval.pn) = new ParseNode(PT_LITERAL_LIST, NULL, (yyvsp[0].pn), (yyvsp[-2].pn), lineno); }
#line 1871 "parse.cc"
    break;

  case 47: /* headlist: atom  */
#line 306 "parse.yy"
         { (yyval.pn) = new ParseNode(PT_LITERAL_LIST, NULL, (yyvsp[0].pn), NULL,
	   lineno);  }
#line 1878 "parse.cc"
    break;

  case 48: /* ordered_disjunction: ordered_disjunction IDENTIFIER atom  */
#line 311 "parse.yy"
         { if (strcmp((yyvsp[-1].s), "x")) {
  	      yyerror("parse error");
          (yyval.pn) = NULL;
       } else {
          (yyval.pn) = new ParseNode(PT_LITERAL_LIST, NULL, (yyvsp[0].pn), (yyvsp[-2].pn), lineno);
       }
     }
#line 1890 "parse.cc"
    break;

  case 49: /* ordered_disjunction: atom  */
#line 319 "parse.yy"
         { (yyval.pn) = new ParseNode(PT_LITERAL_LIST, NULL, (yyvsp[0].pn), NULL,
	   lineno);  }
#line 1897 "parse.cc"
    break;

  case 50: /* basic_literal: atom  */
#line 325 "parse.yy"
        { (yyval.pn) = (yyvsp[0].pn); }
#line 1903 "parse.cc"
    break;

  case 51: /* basic_literal: NOT atom  */
#line 327 "parse.yy"
        { (yyvsp[0].pn)->l2.negative = 1; (yyval.pn) = (yyvsp[0].pn); }
#line 1909 "parse.cc"
    break;

  case 52: /* basic_literal: atom ':' condition_list  */
#line 329 "parse.yy"
        { (yyval.pn) = new ParseNode(PT_CONDITION, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno); }
#line 1915 "parse.cc"
    break;

  case 53: /* basic_literal: NOT atom ':' condition_list  */
#line 331 "parse.yy"
        { (yyval.pn) = new ParseNode(PT_CONDITION, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno);
	  (yyval.pn)->l2.negative = 1;}
#line 1922 "parse.cc"
    break;

  case 54: /* literal: basic_literal  */
#line 336 "parse.yy"
        { (yyval.pn) = (yyvsp[0].pn); }
#line 1928 "parse.cc"
    break;

  case 55: /* literal: basic_literal ASSIGN weight_def  */
#line 338 "parse.yy"
        { (yyval.pn) = (yyvsp[-2].pn); if ((yyvsp[-2].pn)->type != PT_CONDITION) (yyval.pn)->left = (yyvsp[0].pn);
                   else (yyval.pn)->left->left = (yyvsp[0].pn); }
#line 1935 "parse.cc"
    break;

  case 56: /* condition_list: condition_list ':' atom  */
#line 343 "parse.yy"
         { (yyval.pn) = new ParseNode(PT_LITERAL_LIST, NULL, (yyvsp[0].pn), (yyvsp[-2].pn), lineno); }
#line 1941 "parse.cc"
    break;

  case 57: /* condition_list: atom  */
#line 345 "parse.yy"
         { (yyval.pn) = new ParseNode(PT_LITERAL_LIST, NULL, (yyvsp[0].pn), NULL,
	   lineno);  }
#line 1948 "parse.cc"
    break;

  case 58: /* condition_list: nc_expr  */
#line 348 "parse.yy"
         { (yyval.pn) = new ParseNode(PT_LITERAL_LIST, NULL, (yyvsp[0].pn), NULL,
	   lineno);  }
#line 1955 "parse.cc"
    break;

  case 59: /* condition_list: condition_list ':' nc_expr  */
#line 351 "parse.yy"
         { (yyval.pn) = new ParseNode(PT_LITERAL_LIST, NULL, (yyvsp[0].pn), (yyvsp[-2].pn), lineno); }
#line 1961 "parse.cc"
    break;

  case 60: /* weight_def: expr  */
#line 355 "parse.yy"
           { (yyval.pn) =(yyvsp[0].pn); }
#line 1967 "parse.cc"
    break;

  case 61: /* weight_def: atom  */
#line 357 "parse.yy"
           { (yyval.pn) = (yyvsp[0].pn); }
#line 1973 "parse.cc"
    break;

  case 62: /* atom: IDENTIFIER '(' arguments ')'  */
#line 363 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_ATOM, (yyvsp[-3].s), NULL, (yyvsp[-1].pn), lineno); }
#line 1979 "parse.cc"
    break;

  case 63: /* atom: IDENTIFIER  */
#line 365 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_ATOM, (yyvsp[0].s), NULL, NULL, lineno); }
#line 1985 "parse.cc"
    break;

  case 64: /* bound: expr  */
#line 369 "parse.yy"
      { (yyval.pn) = (yyvsp[0].pn); }
#line 1991 "parse.cc"
    break;

  case 65: /* bound: %empty  */
#line 371 "parse.yy"
      { (yyval.pn) = NULL; }
#line 1997 "parse.cc"
    break;

  case 66: /* function: FUNCSYMBOL '(' arglist ')'  */
#line 376 "parse.yy"
         { (yyval.pn) = new ParseNode(PT_FUNCTION, (yyvsp[-3].s), NULL, (yyvsp[-1].pn), lineno);}
#line 2003 "parse.cc"
    break;

  case 67: /* function: NOT FUNCSYMBOL '(' arglist ')'  */
#line 378 "parse.yy"
         { (yyval.pn) = new ParseNode(PT_FUNCTION, (yyvsp[-3].s), NULL, (yyvsp[-1].pn), lineno);
           (yyval.pn)->l2.negative = 1; }
#line 2010 "parse.cc"
    break;

  case 68: /* function: WEIGHT '(' term ')'  */
#line 381 "parse.yy"
         { (yyval.pn) = new ParseNode(PT_EXPR, NULL, NULL, (yyvsp[-1].pn), lineno,
	                      FUN_WEIGHT); }
#line 2017 "parse.cc"
    break;

  case 69: /* function: WEIGHT '(' NOT term ')'  */
#line 384 "parse.yy"
         { (yyvsp[-1].pn)->l2.negative = 1;
           (yyval.pn) = new ParseNode(PT_EXPR, NULL, NULL, (yyvsp[-1].pn), lineno,
	                      FUN_WEIGHT); }
#line 2025 "parse.cc"
    break;

  case 70: /* arguments: arglist  */
#line 390 "parse.yy"
          { (yyval.pn) = new ParseNode(PT_ARGUMENTS, NULL, (yyvsp[0].pn), NULL, lineno);}
#line 2031 "parse.cc"
    break;

  case 71: /* arguments: arguments ';' arglist  */
#line 392 "parse.yy"
          { (yyval.pn) = new ParseNode(PT_ARGUMENTS, NULL, (yyvsp[0].pn), (yyvsp[-2].pn), lineno); }
#line 2037 "parse.cc"
    break;

  case 72: /* arglist: arglist ',' term  */
#line 396 "parse.yy"
        { (yyval.pn) = new ParseNode(PT_ARGLIST, NULL, (yyvsp[0].pn), (yyvsp[-2].pn), lineno); }
#line 2043 "parse.cc"
    break;

  case 73: /* arglist: term  */
#line 398 "parse.yy"
        { (yyval.pn) = new ParseNode(PT_ARGLIST, NULL, (yyvsp[0].pn), NULL , lineno); }
#line 2049 "parse.cc"
    break;

  case 74: /* term: range  */
#line 402 "parse.yy"
     { (yyval.pn) = (yyvsp[0].pn); }
#line 2055 "parse.cc"
    break;

  case 75: /* term: expr  */
#line 404 "parse.yy"
     { lval1 = (yyvsp[0].pn)->Eval();
       if (lval1 != ERROR_NUMBER) {
           (yyval.pn) = new ParseNode(PT_NUMBER, NULL, NULL, NULL,
                lineno,lval1);
           delete (yyvsp[0].pn);
       } else {
         (yyval.pn) = (yyvsp[0].pn);
       }
     }
#line 2069 "parse.cc"
    break;

  case 76: /* term: atom  */
#line 414 "parse.yy"
     { (yyval.pn) = (yyvsp[0].pn);
       if ((yyval.pn)->right == NULL) {
         lval1 = numeric_constant_table->Lookup((yyval.pn)->sval);
         if (lval1 != ERROR_NUMBER) {
            (yyval.pn)->type = PT_NUMBER;
            (yyval.pn)->l1.val = lval1;
         } else {
          (yyval.pn)->type = PT_CONSTANT;
         }
       }
     }
#line 2085 "parse.cc"
    break;

  case 77: /* term: atom '|' expr  */
#line 426 "parse.yy"
     {
      /* crude workaround for situations like a | 1, where 'a' is
	 actually a numeric constant */
       if ( (yyvsp[-2].pn)->right ) {
	error(USR_ERR, "%s: parse error before '|'\n",
              error_file_and_line(lineno));
       }
       (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno, FUN_OR);
       lval1 = numeric_constant_table->Lookup((yyvsp[-2].pn)->sval);
       if (lval1 != ERROR_NUMBER) {
         delete (yyval.pn)->left;
         (yyval.pn)->left = new ParseNode(PT_NUMBER, NULL, NULL, NULL, lineno,
                                  lval1);
       } else {
         (yyvsp[-2].pn)->type = PT_CONSTANT;
       }
     }
#line 2107 "parse.cc"
    break;

  case 78: /* constant: IDENTIFIER  */
#line 446 "parse.yy"
        { lval1 = numeric_constant_table->Lookup((yyvsp[0].s));
	  if (lval1 == ERROR_NUMBER)  
		(yyval.pn) = new ParseNode(PT_CONSTANT, (yyvsp[0].s), NULL, NULL,
                                   lineno);
	  else {
	     (yyval.pn) = new ParseNode(PT_NUMBER, NULL, NULL, NULL, lineno,lval1);
             delete [] (yyvsp[0].s); }
	}
#line 2120 "parse.cc"
    break;

  case 79: /* constant: NUMBER  */
#line 455 "parse.yy"
        { (yyval.pn) = new ParseNode(PT_NUMBER, NULL, NULL, NULL, lineno,
	 (yyvsp[0].l));}
#line 2127 "parse.cc"
    break;

  case 80: /* range: expr DOTS expr  */
#line 460 "parse.yy"
      { 
        (yyval.pn) = new ParseNode(PT_RANGE, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno);
      }
#line 2135 "parse.cc"
    break;

  case 81: /* range: expr COMMAS expr  */
#line 464 "parse.yy"
      {
        (yyval.pn) = NULL;
	yyerror("conjunctive ranges are no longer supported, "
	        "please use conditions instead");
        /* lval1 = $1->Eval();
        lval2 = $3->Eval();
  	$$ = new ParseNode(PT_RANGE, NULL, NULL, NULL, lineno, lval1,
                           lval2, 1); */}
#line 2148 "parse.cc"
    break;

  case 82: /* expr: '(' expr ')'  */
#line 475 "parse.yy"
     { (yyval.pn) = (yyvsp[-1].pn); (yyval.pn)->i1.paren =1; }
#line 2154 "parse.cc"
    break;

  case 83: /* expr: '|' expr '|'  */
#line 477 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, NULL, (yyvsp[-1].pn), lineno,
	                  FUN_ABS); (yyval.pn)->i1.paren = 1;}
#line 2161 "parse.cc"
    break;

  case 84: /* expr: NORM atom NORM  */
#line 480 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, NULL, (yyvsp[-1].pn), lineno,
                          FUN_NORM); }
#line 2168 "parse.cc"
    break;

  case 85: /* expr: expr EXP expr  */
#line 483 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno, FUN_EXP); }
#line 2174 "parse.cc"
    break;

  case 86: /* expr: '-' expr  */
#line 485 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, NULL, (yyvsp[0].pn) , lineno,
                          FUN_MINUS);
       (yyval.pn)->left = new ParseNode(PT_NUMBER, NULL, NULL, NULL, lineno, 0);}
#line 2182 "parse.cc"
    break;

  case 87: /* expr: expr '+' expr  */
#line 489 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno, FUN_PLUS); }
#line 2188 "parse.cc"
    break;

  case 88: /* expr: expr '-' expr  */
#line 491 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno, FUN_MINUS); }
#line 2194 "parse.cc"
    break;

  case 89: /* expr: expr '*' expr  */
#line 493 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno, FUN_TIMES); }
#line 2200 "parse.cc"
    break;

  case 90: /* expr: expr '/' expr  */
#line 495 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno, FUN_DIV); }
#line 2206 "parse.cc"
    break;

  case 91: /* expr: expr MOD expr  */
#line 497 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno, FUN_MOD); }
#line 2212 "parse.cc"
    break;

  case 92: /* expr: expr EQ expr  */
#line 499 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno, FUN_EQ); }
#line 2218 "parse.cc"
    break;

  case 93: /* expr: expr NEQ expr  */
#line 501 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno, FUN_NEQ); }
#line 2224 "parse.cc"
    break;

  case 94: /* expr: expr LT expr  */
#line 503 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno, FUN_LT); }
#line 2230 "parse.cc"
    break;

  case 95: /* expr: expr LE expr  */
#line 505 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno, FUN_LE); }
#line 2236 "parse.cc"
    break;

  case 96: /* expr: expr GT expr  */
#line 507 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno, FUN_GT); }
#line 2242 "parse.cc"
    break;

  case 97: /* expr: expr GE expr  */
#line 509 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno, FUN_GE); }
#line 2248 "parse.cc"
    break;

  case 98: /* expr: '~' expr  */
#line 511 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[0].pn) ,NULL , lineno,
                          FUN_NOT);
       (yyval.pn)->right = new ParseNode(PT_NUMBER, NULL, NULL, NULL, lineno,
                                 0);}
#line 2257 "parse.cc"
    break;

  case 99: /* expr: expr '&' expr  */
#line 516 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno, FUN_AND); }
#line 2263 "parse.cc"
    break;

  case 100: /* expr: expr '|' expr  */
#line 518 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno, FUN_OR); }
#line 2269 "parse.cc"
    break;

  case 101: /* expr: expr '^' expr  */
#line 520 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno, FUN_XOR); }
#line 2275 "parse.cc"
    break;

  case 102: /* expr: expr ASSIGN expr  */
#line 522 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno,
                         FUN_ASSIGN); }
#line 2282 "parse.cc"
    break;

  case 103: /* expr: function  */
#line 525 "parse.yy"
     { (yyval.pn) = (yyvsp[0].pn); }
#line 2288 "parse.cc"
    break;

  case 104: /* expr: constant  */
#line 527 "parse.yy"
     { (yyval.pn) = (yyvsp[0].pn); }
#line 2294 "parse.cc"
    break;

  case 105: /* expr: VARIABLE  */
#line 529 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_VARIABLE, (yyvsp[0].s), NULL, NULL, lineno); }
#line 2300 "parse.cc"
    break;

  case 106: /* nc_expr: '(' expr ')'  */
#line 533 "parse.yy"
     { (yyval.pn) = (yyvsp[-1].pn); }
#line 2306 "parse.cc"
    break;

  case 107: /* nc_expr: '|' expr '|'  */
#line 535 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, NULL, (yyvsp[-1].pn), lineno,
	                  FUN_ABS);}
#line 2313 "parse.cc"
    break;

  case 108: /* nc_expr: '-' expr  */
#line 538 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, NULL, (yyvsp[0].pn) , lineno,
                          FUN_MINUS);
       (yyval.pn)->left = new ParseNode(PT_NUMBER, NULL, NULL, NULL, lineno, 0);}
#line 2321 "parse.cc"
    break;

  case 109: /* nc_expr: expr '+' expr  */
#line 542 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno, FUN_PLUS); }
#line 2327 "parse.cc"
    break;

  case 110: /* nc_expr: expr '-' expr  */
#line 544 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno, FUN_MINUS); }
#line 2333 "parse.cc"
    break;

  case 111: /* nc_expr: expr '*' expr  */
#line 546 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno, FUN_TIMES); }
#line 2339 "parse.cc"
    break;

  case 112: /* nc_expr: expr '/' expr  */
#line 548 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno, FUN_DIV); }
#line 2345 "parse.cc"
    break;

  case 113: /* nc_expr: expr MOD expr  */
#line 550 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno, FUN_MOD); }
#line 2351 "parse.cc"
    break;

  case 114: /* nc_expr: expr EQ expr  */
#line 552 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno, FUN_EQ); }
#line 2357 "parse.cc"
    break;

  case 115: /* nc_expr: expr NEQ expr  */
#line 554 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno, FUN_NEQ); }
#line 2363 "parse.cc"
    break;

  case 116: /* nc_expr: expr LT expr  */
#line 556 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno, FUN_LT); }
#line 2369 "parse.cc"
    break;

  case 117: /* nc_expr: expr LE expr  */
#line 558 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno, FUN_LE); }
#line 2375 "parse.cc"
    break;

  case 118: /* nc_expr: expr GT expr  */
#line 560 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno, FUN_GT); }
#line 2381 "parse.cc"
    break;

  case 119: /* nc_expr: expr GE expr  */
#line 562 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno, FUN_GE); }
#line 2387 "parse.cc"
    break;

  case 120: /* nc_expr: '~' expr  */
#line 564 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[0].pn) ,NULL , lineno,
                          FUN_NOT);
       (yyval.pn)->right = new ParseNode(PT_NUMBER, NULL, NULL, NULL, lineno,
                                 0);}
#line 2396 "parse.cc"
    break;

  case 121: /* nc_expr: expr '&' expr  */
#line 569 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno, FUN_AND); }
#line 2402 "parse.cc"
    break;

  case 122: /* nc_expr: expr '|' expr  */
#line 571 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno, FUN_OR); }
#line 2408 "parse.cc"
    break;

  case 123: /* nc_expr: expr '^' expr  */
#line 573 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL, (yyvsp[-2].pn), (yyvsp[0].pn), lineno, FUN_XOR); }
#line 2414 "parse.cc"
    break;

  case 124: /* nc_expr: expr ASSIGN expr  */
#line 575 "parse.yy"
     { (yyval.pn) = new ParseNode(PT_EXPR, NULL,  (yyvsp[-2].pn), (yyvsp[0].pn), lineno,
                          FUN_ASSIGN);}
#line 2421 "parse.cc"
    break;

  case 125: /* nc_expr: function  */
#line 578 "parse.yy"
     { (yyval.pn) = (yyvsp[0].pn); }
#line 2427 "parse.cc"
    break;

  case 126: /* literal_list: literal_list ',' literal  */
#line 583 "parse.yy"
             { (yyval.pn) = new ParseNode(PT_LITERAL_LIST, NULL, (yyvsp[0].pn), (yyvsp[-2].pn), lineno);}
#line 2433 "parse.cc"
    break;

  case 127: /* literal_list: literal  */
#line 585 "parse.yy"
             { (yyval.pn) = new ParseNode(PT_LITERAL_LIST, NULL, (yyvsp[0].pn), NULL, lineno);}
#line 2439 "parse.cc"
    break;

  case 128: /* compute_list: literal_list  */
#line 589 "parse.yy"
             { (yyval.pn) = (yyvsp[0].pn); }
#line 2445 "parse.cc"
    break;

  case 129: /* compute_list: %empty  */
#line 591 "parse.yy"
             { (yyval.pn) = 0; }
#line 2451 "parse.cc"
    break;

  case 130: /* compute_stmt: COMPUTE models '{' compute_list '}'  */
#line 596 "parse.yy"
             { (yyval.pn) = new ParseNode(PT_COMPUTE, NULL, NULL, (yyvsp[-1].pn),
	                          lineno, (yyvsp[-3].l));}
#line 2458 "parse.cc"
    break;

  case 131: /* optimize_stmt: MAXIMIZE '{' compute_list '}'  */
#line 601 "parse.yy"
              { (yyval.pn) = new ParseNode(PT_MAXIMIZE, NULL, NULL, (yyvsp[-1].pn),
	                          lineno); }
#line 2465 "parse.cc"
    break;

  case 132: /* optimize_stmt: MAXIMIZE '[' compute_list ']'  */
#line 604 "parse.yy"
              { (yyval.pn) = new ParseNode(PT_MAXIMIZE, NULL, NULL, (yyvsp[-1].pn),
	                          lineno, 0, 0, 1); }
#line 2472 "parse.cc"
    break;

  case 133: /* optimize_stmt: MINIMIZE '{' compute_list '}'  */
#line 607 "parse.yy"
              { (yyval.pn) = new ParseNode(PT_MINIMIZE, NULL, NULL, (yyvsp[-1].pn),
	                          lineno); }
#line 2479 "parse.cc"
    break;

  case 134: /* optimize_stmt: MINIMIZE '[' compute_list ']'  */
#line 610 "parse.yy"
              { (yyval.pn) = new ParseNode(PT_MINIMIZE, NULL, NULL, (yyvsp[-1].pn),
	                          lineno,0,0,1); }
#line 2486 "parse.cc"
    break;

  case 135: /* models: expr  */
#line 615 "parse.yy"
       {
         if ((yyvsp[0].pn)->type == PT_CONSTANT) {
           if (!strcmp((yyvsp[0].pn)->sval, "all")) {
             (yyval.l) = 0;
           } else {
             error(USR_ERR, "%s: invalid number of models. Use a "
                   "positive integer, a constant valued expression, "
                   "or \"all\"", 
                   error_file_and_line(lineno));
                   (yyval.l) = 1;
           }
         } else {
           (yyval.l) = (yyvsp[0].pn)->Eval();
           if ((yyval.l) == ERROR_NUMBER || (yyval.l) < 0) {
             error(USR_ERR, "%s: invalid number of models. Use a "
                  "positive integer, a constant valued expression, or "
	          "\"all\"", error_file_and_line(lineno));
           }
         }
         delete (yyvsp[0].pn);
       }
#line 2512 "parse.cc"
    break;

  case 136: /* models: %empty  */
#line 637 "parse.yy"
       { (yyval.l) = 1; }
#line 2518 "parse.cc"
    break;


#line 2522 "parse.cc"

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

