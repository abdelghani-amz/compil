%{
	#include "syntaxique.tab.h"
	extern nb_ligne;
	extern col;
	extern current ; 
%}

lettreM [A-Z]
lettre [a-zA-Z]
chiffre [0-9]
IDF {lettreM}({lettre}|{chiffre})*
IDFtab {lettreM}({lettre}|{chiffre})*(\[0*[1-9][0-9]*\])
cstInt {chiffre}+|-{chiffre}+|\([ \t]*-?{chiffre}+[ \t]*\)
cstReal {chiffre}+\.{chiffre}+|\([ \t]*-?{chiffre}+\.{chiffre}+[ \t]*\)
caracter \'.\'
chaine 	\".+\"
text 	 [a-zA-Z0-9]* 

%%

Programme	{ col = col + strlen(yytext); return mc_pgm;}
INTEGER		{ col = col + strlen(yytext); return mc_integer;}
REAL		{ col = col + strlen(yytext); return mc_real;}
STRING		{ col = col + strlen(yytext); return mc_string;}
CHAR		{ col = col + strlen(yytext); return mc_char;}
PROCESS		{ col = col + strlen(yytext); return mc_process;}
LOOP		{ col = col + strlen(yytext); return mc_loop;}
ARRAY		{ col = col + strlen(yytext); return mc_array;}
VAR		{ col = col + strlen(yytext); return mc_var;}
CONST		{ col = col + strlen(yytext); return mc_const;}
READ		{ col = col + strlen(yytext); return read;}
WRITE		{ col = col + strlen(yytext); return write;}
EXECUT     { col = col + strlen(yytext); return exe;}
IF 			{ col = col + strlen(yytext); return mc_if;}
WHILE		{ col = col + strlen(yytext); return mc_while;}
END_IF		{ col = col + strlen(yytext); return end;}
ELSE		{ col = col + strlen(yytext); return mc_else;}



EG		{ col = col + strlen(yytext); return mc_eg;}
SUP		{ col = col + strlen(yytext); return mc_sup;}
SUPE		{ col = col + strlen(yytext); return mc_supe;}
DIFF		{ col = col + strlen(yytext); return mc_diff;}
INFE		{ col = col + strlen(yytext); return mc_infe;}
INF		{ col = col + strlen(yytext); return mc_inf;}

"/"		{ col = col + strlen(yytext); return division;}
"+"		{ col = col + strlen(yytext); return addition;}
"-"		{ col = col + strlen(yytext); return substraction;}
"*"		{ col = col + strlen(yytext); return multi;}
"@"		{ col = col + strlen(yytext); return address;}
"|"		{ col = col + strlen(yytext); return separator;}


{IDF} 	       { col = col + strlen(yytext);
		 if (yyleng<10) { printf ("Identificateur %s accepte !! \n",yytext); 
				  return idf;
				}
		 else printf ("Identificateur %s refused : length %d is too large on line %d Colonne %d \n", yytext, yyleng, nb_ligne, col-strlen(yytext)); 
		  }

{IDFtab}	{ col = col + strlen(yytext);
		   if (yyleng<10) { printf ("Identificateur %s accepte !! \n",yytext); 
				    return idftab;
				    }
		   else printf ("Identificateur %s refused : length %d is too large on line %d Colonne %d \n", yytext, yyleng, nb_ligne, col-strlen(yytext)); 
		  }

{cstInt} 		{ col = col + strlen(yytext); return cstInt;}
{cstReal}		{ col = col + strlen(yytext); return cstReal;}
{caracter}		{ col = col + strlen(yytext); return car ;}
{chaine}		{ col = col + strlen(yytext); return chaine ;}
{text}			{ col = col + strlen(yytext); return text ;}

"##"		{ col = col + strlen(yytext); return dz;}


"::"		{ col = col + strlen(yytext); return dpts;}
"="		{ col = col + strlen(yytext); return egality;}
":="		{ col = col + strlen(yytext); return aff;}

"("		{ col = col + strlen(yytext);return par_o;}
")"		{ col = col + strlen(yytext);return par_f;}
"{"		{ col = col + strlen(yytext); return acc_o;}
"}"		{ col = col + strlen(yytext); return acc_f;}
"["		{ col = col + strlen(yytext); return cro_o;}
"]"		{ col = col + strlen(yytext); return cro_f;}

"''"		{ col = col + strlen(yytext); return dots;}
"$"		{ col = col + strlen(yytext); return fin;}
"%"		{ col = col + strlen(yytext); return s_real;}
"#"		{ col = col + strlen(yytext); return s_string;}
"&"		{ col = col + strlen(yytext); return s_char;}

"//"		{ col = col + strlen(yytext); return sep;}
[ \t]		{ col = col + strlen(yytext);  }
\n		{nb_ligne++; col=1;}

. printf("Erreur lexicale : %s \nligne %d Colonne %d\n",yytext ,nb_ligne, col);



%%

