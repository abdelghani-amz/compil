%{
	#include <stdio.h>
	char sauvType[25];
	char sauvOP[25];
	char sauvCst[25];
	char sauvIdf1[25];
	char sauvIdf[2][10] = {};
	char sauvidftab[25];
	int nb_ligne = 1;
	int col = 1;
	int choice;
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


CST : cstInt { sprintf(sauvCst, "%d", $1); strcpy(sauvType,"entier");} | cstReal { sprintf(sauvCst, "%f", $1); strcpy(sauvType,"real");} ;


IDF : idf {   
   			  if(doubleDeclaration($1)==0) 
			  printf("Erreur semantique: %s variable non declaree a la ligne %d\n",$1,nb_ligne);   
			  else
			   {strcpy(sauvIdf1,$1);
			   if  (strcmp(sauvIdf[0],"") == 0) strcpy(sauvIdf[0],$1);
    					else strcpy(sauvIdf[1],$1); }   }           							   
		 	 | idftab{ 
			  if(doubleDeclaration($1)==0) 
			  printf("Erreur semantique: %s variable non declaree a la ligne %d\n",$1,nb_ligne);   
			  else
			   {strcmp(sauvIdf1,$1);
			   if  (strcmp(sauvIdf[0],"") == 0) strcpy(sauvIdf[0],$1);
    					else strcpy(sauvIdf[1],$1); } }
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

LIST_IDF_CST_REAL: idf egality cstReal sep  LIST_IDF_CST_REAL {
					if(doubleDeclaration($1)==0)   
								    { 
   									    insererTYPE($1,"real");
										printf(" this is a float in syntaxic %f \n",$3);
										insertReal($1,atof($3));
								    }
							    else 
								printf("Erreur semantique: double declaration  de %s a la ligne %d et la colonne %d \n",$1,nb_ligne, col);
							  }
	    | idf egality cstReal {
		if(doubleDeclaration($1)==0)
								     { 
										printf("this is a float in syntaxic %f \n", $3);
   									    insererTYPE($1,"real");
										insertReal($1,atof($3));
								     }
							    else 
								printf("Erreur semantique: double declaration  de %s a la ligne %d et la colonne %d \n",$1,nb_ligne, col);
							  }
;

LIST_IDF_CST_INT: idf egality cstInt sep  LIST_IDF_CST_INT { 
		                        if(doubleDeclaration($1)==0)   
								    { 
   									    insererTYPE($1,"entier");
										insertValEntiere($1,$3);
								    }
							    else 
								printf("Erreur semantique: double declaration  de %s a la ligne %d et la colonne %d \n",$1,nb_ligne, col);
							  }
	    | idf egality cstInt { 
		                        if(doubleDeclaration($1)==0)   
								    { 
   									    insererTYPE($1,"entier");  
										insertValEntiere($1,$3);
								    }
							    else 
								printf("Erreur semantique: double declaration  de %s a la ligne %d et la colonne %d \n",$1,nb_ligne, col);
							  }

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

TYPE :	 mc_char  {strcpy(sauvType,"car");} 
	|mc_string {strcpy(sauvType,"chaine");} 
	|mc_real {strcpy(sauvType,"real");} 
	|mc_integer {strcpy(sauvType,"entier"); } 


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
 // if(strcmp( GetType(sauvIdf), sauvType) == 0){ 
 // saveIdf(sauvIdf,$1);
INST_AFF :  IDF aff CST fin {
							if(CompatibleType(sauvIdf1,sauvCst) == 1) {
							insertValEntiere(sauvIdf1,GetValue(sauvCst)) ;
							strcpy(sauvIdf[0],"");}
							else printf ("Erreur semantique Type de variables incompatibles à la ligne %d et a la colonne %d \n",nb_ligne,col);
							} 
	 |  IDF aff idf fin {	
		 					if(CompatibleType(sauvIdf1,$3) == 1) {
							insertValEntiere(sauvIdf1,GetValue($3)) ;
							strcpy(sauvIdf[0],"");}
							else printf ("Erreur semantique Type de variables incompatibles à la ligne %d et a la colonne %d \n",nb_ligne,col);
							} 
	 |  IDF aff idftab fin {
		 					if(CompatibleType(sauvIdf1,$3) == 1) {
							insertValEntiere(sauvIdf1,GetValue($3)) ;
							strcpy(sauvIdf[0],"");}
							else printf ("Erreur semantique Type de variables incompatibles à la ligne %d et a la colonne %d \n",nb_ligne,col);
							} 
	 |  IDF aff par_o IDF par_f fin {
		 					if(CompatibleType(sauvIdf[0],sauvIdf[1]) == 1) {
							insertValEntiere(sauvIdf[0],GetValue(sauvIdf[1])) ;
							strcpy(sauvIdf[0],"");}
							else printf ("Erreur semantique Type de variables incompatibles à la ligne %d et a la colonne %d \n",nb_ligne,col);
							} 
	 
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
		//only integers cases
EXPRESSION :  OPERAND OPERATION OPERAND {
				if(strcmp(sauvOP,"/") == 0){
					if(choice == 0) {
						if(GetValue(sauvCst) == 0)
						printf ("Erreur semantique division par 0 à la ligne %d et a la colonne %d \n",nb_ligne,col); 
					}

					else {
						if(GetValue(sauvIdf1) == 0)
						printf ("Erreur semantique division par 0 à la ligne %d et a la colonne %d \n",nb_ligne,col);
					}
				}
			}


			| OPERAND OPERATION EXPRESSION_PAR
			| OPERAND OPERATION EXPRESSION
			
;

OPERAND : CST {choice = 0;}
	    | IDF {
			choice = 1;
			strcpy(sauvIdf[0],"");
		}
		| par_o IDF par_f {
		  choice =1;
		  strcpy(sauvIdf[0],"");
		}
		;

OPERATION : addition {strcpy(sauvOP,"+");}
	  | division {strcpy(sauvOP,"/");}
	  | substraction {strcpy(sauvOP,"-");}
	  | multi {strcpy(sauvOP,"*");}
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

