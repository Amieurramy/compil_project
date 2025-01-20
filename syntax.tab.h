
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
     pvg = 258,
     aff = 259,
     idf = 260,
     prog = 261,
     var = 262,
     beg = 263,
     end = 264,
     entier = 265,
     reel = 266,
     intid = 267,
     floid = 268,
     constid = 269,
     ch = 270,
     ag = 271,
     ad = 272,
     pg = 273,
     pd = 274,
     virgule = 275,
     dpoints = 276,
     entiers = 277,
     reels = 278,
     sbg = 279,
     sbd = 280,
     and = 281,
     or = 282,
     equal = 283,
     nequal = 284,
     supe = 285,
     sup = 286,
     infe = 287,
     inf = 288,
     not = 289,
     plus = 290,
     min = 291,
     fo = 292,
     sur = 293,
     iff = 294,
     elsee = 295,
     forr = 296,
     whilee = 297,
     read = 298,
     write = 299,
     point = 300
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 43 "syntax.y"

int entier;
 struct {
	int ligne;
	char *text; 
}str;
float reel;



/* Line 1676 of yacc.c  */
#line 108 "syntax.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


