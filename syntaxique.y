%{
	#include <stdio.h>
	int nb_ligne = 1;
	int col = 1;
%}
%token mc_pgm mc_integer mc_real mc_string mc_char mc_process mc_loop mc_array mc_var mc_const mc_eg mc_sup mc_supe mc_diff mc_infe mc_inf division addition substraction multi idf idftab cstInt cstReal car chaine dz dpts egality aff acc_o acc_f cro_o cro_f fin sep read write dots s_real s_string s_char par_o par_f text address separator
%start S
%%
S : LIST_BIB mc_pgm idf acc_o DECLARATION INSTS acc_f {printf("Programme syntaxiquement correct"); YYACCEPT;}
LIST_BIB : BIB LIST_BIB 
	 | 
;

BIB : dz NAME_BIB fin;

NAME_BIB : mc_loop
	 | mc_process
	 | mc_array;


DECLARATION : mc_var LIST_DEC mc_const LIST_DEC_CONST 
	    | mc_const LIST_DEC_CONST  mc_var LIST_DEC 
	    | mc_var LIST_DEC 
	    | mc_const LIST_DEC_CONST 
;


CST : cstInt | cstReal ;
IDF : idf | idftab;

LIST_DEC_CONST : DEC_CST LIST_DEC_CONST
	       | DEC_CST
;

DEC_CST : mc_char dpts LIST_IDF_CST_CHAR fin
		| mc_string dpts LIST_IDF_CST_STR fin
		| mc_real dpts LIST_IDF_CST_REAL fin
		| mc_real dpts LIST_IDF_CST_INT fin
;

LIST_IDF_CST_CHAR: idf egality car sep  LIST_IDF_CST_STR
	    | idf egality car 
;

LIST_IDF_CST_STR: idf egality chaine sep  LIST_IDF_CST_STR
	    | idf egality chaine
;

LIST_IDF_CST_REAL: idf egality cstReal sep  LIST_IDF_CST_REAL
	    | idf egality cstReal
;

LIST_IDF_CST_INT: idf egality cstInt sep  LIST_IDF_CST_INT
	    | idf egality cstInt

;

LIST_DEC : DEC LIST_DEC
	 | DEC
;

DEC: TYPE dpts LIST_IDF fin;

LIST_IDF : idf sep LIST_IDF 
	 | idf
	 | idftab sep LIST_IDF 
	 | idftab
;

TYPE :	 mc_char 
	|mc_string
	|mc_real
	|mc_integer;


INSTS : INST INSTS
	|
;

INST : INST_AFF 
     | INST_ARITH 
     | INPUT
     | OUTPUT
;

INST_AFF :  IDF aff CST fin
	 |  IDF aff IDF fin
	 |  IDF aff par_o IDF par_f fin
	 |  IDF aff par_o CST par_f fin
;



INST_ARITH : IDF aff IDF INST_ARITH_PATTERN fin
	   | IDF aff CST INST_ARITH_PATTERN fin
	   | IDF aff par_o IDF par_f INST_ARITH_PATTERN fin
	   | IDF aff par_o CST par_f INST_ARITH_PATTERN fin
	   | IDF aff par_o IDF INST_ARITH_PATTERN par_f fin
	   | IDF aff par_o CST INST_ARITH_PATTERN par_f fin
	   | IDF aff par_o CST INST_ARITH_PATTERN  fin
	   | IDF aff par_o IDF INST_ARITH_PATTERN  fin
;



OPERATION : addition
	  | division
	  | substraction
	  | multi
;



INST_ARITH_PATTERN : OPERATION IDF INST_ARITH_PATTERN
		   | OPERATION CST INST_ARITH_PATTERN

		   | OPERATION par_o IDF par_f INST_ARITH_PATTERN
		   | OPERATION par_o CST par_f INST_ARITH_PATTERN

		   | OPERATION par_o IDF INST_ARITH_PATTERN par_f 
		   | OPERATION par_o CST INST_ARITH_PATTERN par_f 

		   | OPERATION par_o IDF par_f 
		   | OPERATION par_o CST par_f

		   | OPERATION IDF
		   | OPERATION CST
;

INPUT :  read par_o dots SIGNS dots separator address idf par_f fin
;

OUTPUT : write par_o chaine LIST_OUT_IDF par_f fin 
;


LIST_OUT_IDF : separator idf LIST_OUT_IDF
	     | separator idf
;

SIGNS : fin
      | s_real 
      | s_string 
      | s_char
;


%%
main()
{
	yyparse();
}
yywrap()
{} 

yyerror (char*msg)
{
	printf("Erreur Syntaxique \nline : %d || colonne : %d\n", nb_ligne, col);
}

