/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_BINDPARSER_HH_INCLUDED
# define YY_YY_BINDPARSER_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AWORD = 258,
    QUOTEDWORD = 259,
    OBRACE = 260,
    EBRACE = 261,
    SEMICOLON = 262,
    ZONETOK = 263,
    FILETOK = 264,
    OPTIONSTOK = 265,
    DIRECTORYTOK = 266,
    ACLTOK = 267,
    LOGGINGTOK = 268,
    CLASSTOK = 269,
    TYPETOK = 270,
    MASTERTOK = 271,
    ALSONOTIFYTOK = 272
  };
#endif
/* Tokens.  */
#define AWORD 258
#define QUOTEDWORD 259
#define OBRACE 260
#define EBRACE 261
#define SEMICOLON 262
#define ZONETOK 263
#define FILETOK 264
#define OPTIONSTOK 265
#define DIRECTORYTOK 266
#define ACLTOK 267
#define LOGGINGTOK 268
#define CLASSTOK 269
#define TYPETOK 270
#define MASTERTOK 271
#define ALSONOTIFYTOK 272

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_BINDPARSER_HH_INCLUDED  */
