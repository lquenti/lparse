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

#ifndef YY_YY_PARSE_CC_H_INCLUDED
# define YY_YY_PARSE_CC_H_INCLUDED
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
    NUMBER = 258,                  /* NUMBER  */
    WEIGHT = 259,                  /* WEIGHT  */
    MINIMIZE = 260,                /* MINIMIZE  */
    MAXIMIZE = 261,                /* MAXIMIZE  */
    HIDE = 262,                    /* HIDE  */
    EXP = 263,                     /* EXP  */
    FUNCTION = 264,                /* FUNCTION  */
    FUNCSYMBOL = 265,              /* FUNCSYMBOL  */
    IF = 266,                      /* IF  */
    NOT = 267,                     /* NOT  */
    COMPUTE = 268,                 /* COMPUTE  */
    IDENTIFIER = 269,              /* IDENTIFIER  */
    VARIABLE = 270,                /* VARIABLE  */
    CONST = 271,                   /* CONST  */
    EXTERNAL = 272,                /* EXTERNAL  */
    SHOW = 273,                    /* SHOW  */
    OPTION = 274,                  /* OPTION  */
    VARIABLEDEF = 275,             /* VARIABLEDEF  */
    LE = 276,                      /* LE  */
    GE = 277,                      /* GE  */
    EQ = 278,                      /* EQ  */
    NEQ = 279,                     /* NEQ  */
    DOTS = 280,                    /* DOTS  */
    LT = 281,                      /* LT  */
    GT = 282,                      /* GT  */
    ASSIGN = 283,                  /* ASSIGN  */
    MOD = 284,                     /* MOD  */
    COMMAS = 285,                  /* COMMAS  */
    NORM = 286,                    /* NORM  */
    METAPRIORITY = 287,            /* METAPRIORITY  */
    TYPE = 288,                    /* TYPE  */
    PREDICATE = 289,               /* PREDICATE  */
    NONDOMAIN = 290,               /* NONDOMAIN  */
    UMINUS = 291                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 74 "parse.yy"

   char *s;
   long l;
   ParseNode *pn;

#line 106 "parse.cc.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSE_CC_H_INCLUDED  */
