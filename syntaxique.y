%{
	#include <stdio.h>
	char sauvType[25];
	char sauvOP[25];
	int nb_ligne = 1;
	int col = 1;
%}

%union 
{ 
   int entier; 
   char* str;
   char chaine;
   char car;
   float real;
}

%token mc_pgm <str>mc_integer <str>mc_real <str>mc_string <str>mc_char mc_process mc_loop mc_array mc_var mc_const mc_eg mc_sup mc_supe mc_diff mc_infe mc_inf division addition substraction multi <str>idf <str>idftab <entier>cstInt <real>cstReal <car>car <chaine>chaine dz dpts egality aff acc_o acc_f cro_o cro_f fin sep read write dots s_real s_string s_char par_o par_f text address separator exe mc_if mc_while end mc_else 
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
IDF : idf {
   			  if(doubleDeclaration($1)==0) 
			  printf("Erreur semantique: %s variable non declaree a la ligne %d\n",$1,nb_ligne);                  							   
		 	} | idftabs
;

LIST_DEC_CONST : DEC_CST LIST_DEC_CONST
	       | DEC_CST
;

DEC_CST : mc_char dpts LIST_IDF_CST_CHAR fin   
		| mc_string dpts LIST_IDF_CST_STR fin  
		| mc_real dpts LIST_IDF_CST_REAL fin   
		| mc_integer dpts LIST_IDF_CST_INT fin 
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

LIST_IDF : idf sep LIST_IDF { if(doubleDeclaration($1)==0)   { insererTYPE($1,sauvType);}
							    else 
								printf("Erreur semantique: Double declaration  de %s a la ligne %d et a la colonne %d\n",$1,nb_ligne,col);
							  }
	 	 | idf { if(doubleDeclaration($1)==0)   { insererTYPE($1,sauvType);}
							    else 
								printf("Erreur semantique: Double declaration  de %s a la ligne %d et a la colonne %d\n",$1,nb_ligne,col);
							  }
	 	 | idftab sep LIST_IDF { if(doubleDeclaration($1)==0)   { insererTYPE($1,sauvType);}
							    else 
								printf("Erreur semantique: Double declaration  de %s a la ligne %d et a la colonne %d\n",$1,nb_ligne,col);
							  }
	 	 | idftab { if(doubleDeclaration($1)==0)   { insererTYPE($1,sauvType);}
							    else 
								printf("Erreur semantique: Double declaration  de %s a la ligne %d et a la colonne %d\n",$1,nb_ligne,col);
							  }
;

TYPE :	 mc_char  {strcpy(sauvType,$1);} 
	|mc_string {strcpy(sauvType,$1);} 
	|mc_real {strcpy(sauvType,$1);} 
	|mc_integer {strcpy(sauvType,$1); } 


INSTS : INST INSTS
	| 
;

INST : INST_AFF 
     | INST_ARITH 
     | INPUT
     | OUTPUT
	 | IF_STATEMENT
	 | LOOP
	 
;

INST_AFF :  IDF aff CST fin 
	 |  IDF aff IDF fin 
	 |  IDF aff par_o IDF par_f fin 
	 | IDF aff INST_ARITH 
;


INST_ARITH : EXPRESSION fin
			| EXPRESSION_PAR fin
			
			
;

EXPRESSION_PAR : // An expression that can generate parenthesis
		| par_o EXPRESSION par_f OPERATION EXPRESSION
		| par_o EXPRESSION par_f OPERATION OPERAND
		| par_o EXPRESSION par_f OPERATION EXPRESSION_PAR
		| par_o EXPRESSION_PAR par_f OPERATION OPERAND
		| par_o EXPRESSION_PAR par_f OPERAND EXPRESSION
		| par_o EXPRESSION_PAR par_f OPERATION EXPRESSION
		| par_o EXPRESSION par_f
		| par_o EXPRESSION_PAR par_f
				
;
		
EXPRESSION :  OPERAND OPERATION OPERAND {if(strcmp(sauvOP,"division")==0)
					if (GetValue($3)==0)
			      {
				    printf ("Erreur semantique division par 0 à la ligne %d et a la colonne %d \n",nb_ligne,Col); 
				  }
			}
			| OPERAND OPERATION EXPRESSION_PAR
			| OPERAND OPERATION EXPRESSION
			
;

OPERAND : CST | IDF | par_o IDF par_f ;

OPERATION : addition {strcpy(sauvOP,$1);}
	  | division {strcpy(sauvOP,$1);}
	  | substraction {strcpy(sauvOP,$1);}
	  | multi {strcpy(sauvOP,$1);}
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

IF_STATEMENT :exe INSTS mc_if CONDITION end
		| exe INSTS mc_if CONDITION mc_else exe INSTS end
;

CONDITION :  par_o INST_ARITH LOGIC INST_ARITH par_f
	 |  par_o OPERAND LOGIC INST_ARITH par_f
	 |  par_o INST_ARITH LOGIC OPERAND par_f
	 |  par_o OPERAND LOGIC OPERAND par_f
;

LOGIC : mc_inf 
		| mc_infe
		| mc_sup
		| mc_supe
		| mc_diff
		| mc_eg
;

LOOP : mc_while CONDITION acc_o INSTS acc_f
;




%%
main()
{
  initialisation();
  yyparse();
  afficher();
}
yywrap()
{} 

yyerror (char*msg)
{
	printf("Erreur Syntaxique \nline : %d || colonne : %d\n ", nb_ligne, col);
}

