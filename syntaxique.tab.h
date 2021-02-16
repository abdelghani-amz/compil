
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
     mc_pgm = 258,
     mc_integer = 259,
     mc_real = 260,
     mc_string = 261,
     mc_char = 262,
     mc_process = 263,
     mc_loop = 264,
     mc_array = 265,
     mc_var = 266,
     mc_const = 267,
     mc_eg = 268,
     mc_sup = 269,
     mc_supe = 270,
     mc_diff = 271,
     mc_infe = 272,
     mc_inf = 273,
     division = 274,
     addition = 275,
     substraction = 276,
     multi = 277,
     idf = 278,
     idftab = 279,
     cstInt = 280,
     cstReal = 281,
     car = 282,
     chaine = 283,
     dz = 284,
     dpts = 285,
     egality = 286,
     aff = 287,
     acc_o = 288,
     acc_f = 289,
     cro_o = 290,
     cro_f = 291,
     fin = 292,
     sep = 293,
     read = 294,
     write = 295,
     dots = 296,
     s_real = 297,
     s_string = 298,
     s_char = 299,
     par_o = 300,
     par_f = 301,
     text = 302,
     address = 303,
     separator = 304,
     exe = 305,
     mc_if = 306,
     mc_while = 307,
     end = 308,
     mc_else = 309
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


