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

#ifndef YY_YY_YACC_SQL_HPP_INCLUDED
# define YY_YY_YACC_SQL_HPP_INCLUDED
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
    SEMICOLON = 258,               /* SEMICOLON  */
    INNER = 259,                   /* INNER  */
    JOIN = 260,                    /* JOIN  */
    SUM_F = 261,                   /* SUM_F  */
    MIN_F = 262,                   /* MIN_F  */
    MAX_F = 263,                   /* MAX_F  */
    COUNT_F = 264,                 /* COUNT_F  */
    AVG_F = 265,                   /* AVG_F  */
    CREATE = 266,                  /* CREATE  */
    DROP = 267,                    /* DROP  */
    TABLE = 268,                   /* TABLE  */
    TABLES = 269,                  /* TABLES  */
    INDEX = 270,                   /* INDEX  */
    CALC = 271,                    /* CALC  */
    SELECT = 272,                  /* SELECT  */
    DESC = 273,                    /* DESC  */
    SHOW = 274,                    /* SHOW  */
    SYNC = 275,                    /* SYNC  */
    INSERT = 276,                  /* INSERT  */
    DELETE = 277,                  /* DELETE  */
    UPDATE = 278,                  /* UPDATE  */
    LBRACE = 279,                  /* LBRACE  */
    RBRACE = 280,                  /* RBRACE  */
    COMMA = 281,                   /* COMMA  */
    TRX_BEGIN = 282,               /* TRX_BEGIN  */
    TRX_COMMIT = 283,              /* TRX_COMMIT  */
    TRX_ROLLBACK = 284,            /* TRX_ROLLBACK  */
    INT_T = 285,                   /* INT_T  */
    STRING_T = 286,                /* STRING_T  */
    FLOAT_T = 287,                 /* FLOAT_T  */
    DATE_T = 288,                  /* DATE_T  */
    HELP = 289,                    /* HELP  */
    EXIT = 290,                    /* EXIT  */
    DOT = 291,                     /* DOT  */
    INTO = 292,                    /* INTO  */
    VALUES = 293,                  /* VALUES  */
    FROM = 294,                    /* FROM  */
    WHERE = 295,                   /* WHERE  */
    AND = 296,                     /* AND  */
    SET = 297,                     /* SET  */
    ON = 298,                      /* ON  */
    LOAD = 299,                    /* LOAD  */
    DATA = 300,                    /* DATA  */
    INFILE = 301,                  /* INFILE  */
    EXPLAIN = 302,                 /* EXPLAIN  */
    EQ = 303,                      /* EQ  */
    LT = 304,                      /* LT  */
    GT = 305,                      /* GT  */
    LE = 306,                      /* LE  */
    GE = 307,                      /* GE  */
    NE = 308,                      /* NE  */
    NUMBER = 309,                  /* NUMBER  */
    FLOAT = 310,                   /* FLOAT  */
    DATE_STR = 311,                /* DATE_STR  */
    ID = 312,                      /* ID  */
    SSS = 313,                     /* SSS  */
    UMINUS = 314                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 110 "yacc_sql.y"

  ParsedSqlNode *                   sql_node;
  ConditionSqlNode *                condition;
  Value *                           value;
  enum CompOp                       comp;
  enum AggrOp                       aggr;//my2 指导书未提及
  RelAttrSqlNode *                  rel_attr;
  //RelAttrSqlNode *                  rel_attr_aggr;//my2  
  std::vector<AttrInfoSqlNode> *    attr_infos;
  AttrInfoSqlNode *                 attr_info;
  Expression *                      expression;
  std::vector<Expression *> *       expression_list;
  JoinSqlNode *                     join_sql_node;//my4
  std::vector<Value> *              value_list;
  std::vector<ConditionSqlNode> *   condition_list;
  std::vector<RelAttrSqlNode> *     rel_attr_list;
  //std::vector<RelAttrSqlNode> *     rel_attr_aggr_list;//my2
  std::vector<std::string> *        relation_list;
  char *                            string;
  int                               number;
  float                             floats;

#line 146 "yacc_sql.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif




int yyparse (const char * sql_string, ParsedSqlResult * sql_result, void * scanner);


#endif /* !YY_YY_YACC_SQL_HPP_INCLUDED  */
