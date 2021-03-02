%{
	#include "syntaxique.tab.h"
	extern nb_ligne;
	extern col;
	extern current ; 
	#include "ts.h"
	extern YYSTYPE yylval;
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
comment \/\*.+\*\/
text 	 ({chiffre}|{lettre})*|({lettre}|{chiffre})*

%%




Programme	{  yylval.str=strdup(yytext);rechercher (yytext,"Mot cle "," ",0, 1); col = col + strlen(yytext); return mc_pgm;}

INTEGER		{  yylval.str=strdup(yytext); rechercher (yytext,"Mot cle "," ",0, 1); col = col + strlen(yytext); return mc_integer;}
REAL		{  yylval.str=strdup(yytext); rechercher (yytext,"Mot cle "," ",0, 1); col = col + strlen(yytext); return mc_real;}
STRING		{  yylval.str=strdup(yytext); rechercher (yytext,"Mot cle "," ",0, 1); col = col + strlen(yytext); return mc_string;}
CHAR		{  yylval.str=strdup(yytext); rechercher (yytext,"Mot cle "," ",0, 1); col = col + strlen(yytext); return mc_char;}

PROCESS		{  yylval.str=strdup(yytext);rechercher (yytext,"Mot cle "," ",0, 1); col = col + strlen(yytext); return mc_process;}
LOOP		{ yylval.str=strdup(yytext); rechercher (yytext,"Mot cle "," ",0, 1); col = col + strlen(yytext); return mc_loop;}
ARRAY		{ yylval.str=strdup(yytext); rechercher (yytext,"Mot cle "," ",0, 1); col = col + strlen(yytext); return mc_array;}
VAR			{ yylval.str=strdup(yytext); rechercher (yytext,"Mot cle "," ",0, 1); col = col + strlen(yytext); return mc_var;}
CONST		{  yylval.str=strdup(yytext);rechercher (yytext,"Mot cle "," ",0, 1); col = col + strlen(yytext); return mc_const;}
READ		{  yylval.str=strdup(yytext);rechercher (yytext,"Mot cle "," ",0, 1); col = col + strlen(yytext); return read;}
WRITE		{ yylval.str=strdup(yytext); rechercher (yytext,"Mot cle "," ",0, 1); col = col + strlen(yytext); return write;}
EXECUT		{  yylval.str=strdup(yytext);rechercher (yytext,"Mot cle "," ",0, 1); col = col + strlen(yytext); return exe;}
IF 			{ yylval.str=strdup(yytext); rechercher (yytext,"Mot cle "," ",0, 1); col = col + strlen(yytext); return mc_if;}
WHILE		{  yylval.str=strdup(yytext);rechercher (yytext,"Mot cle "," ",0, 1); col = col + strlen(yytext); return mc_while;}
END_IF		{ yylval.str=strdup(yytext); rechercher (yytext,"Mot cle "," ",0, 1); col = col + strlen(yytext); return end;}
ELSE		{ yylval.str=strdup(yytext); rechercher (yytext,"Mot cle "," ",0, 1); col = col + strlen(yytext); return mc_else;}

INF			{  yylval.str=strdup(yytext);rechercher (yytext,"Mot cle "," ",0, 1); col = col + strlen(yytext); return mc_inf;}
INFE		{  yylval.str=strdup(yytext);rechercher (yytext,"Mot cle "," ",0, 1); col = col + strlen(yytext); return mc_infe;}
EG		{  yylval.str=strdup(yytext);rechercher (yytext,"Mot cle "," ",0, 1); col = col + strlen(yytext); return mc_eg;}
SUP		{  yylval.str=strdup(yytext);rechercher (yytext,"Mot cle "," ",0, 1); col = col + strlen(yytext); return mc_sup;}
SUPE		{  yylval.str=strdup(yytext);rechercher (yytext,"Mot cle "," ",0, 1); col = col + strlen(yytext); return mc_supe;}
DIFF		{  yylval.str=strdup(yytext);rechercher (yytext,"Mot cle "," ",0, 1); col = col + strlen(yytext); return mc_diff;}


"/"		{rechercher (yytext,"Separateur",0,0, 2);  col = col + strlen(yytext); return division;}
"+"		{rechercher (yytext,"Separateur",0,0, 2);  col = col + strlen(yytext); return addition;}
"-"		{rechercher (yytext,"Separateur",0,0, 2);  col = col + strlen(yytext); return substraction;}
"*"		{rechercher (yytext,"Separateur",0,0, 2);  col = col + strlen(yytext); return multi;}
"@"		{rechercher (yytext,"Separateur",0,0, 2);  col = col + strlen(yytext); return address;}
"|"		{rechercher (yytext,"Separateur",0,0, 2);  col = col + strlen(yytext); return separator;}




{IDF} 	       { rechercher (yytext,"IDF ","",0, 0); 
		 col = col + strlen(yytext);
		 if (yyleng<10) { yylval.str=strdup(yytext);
				  return idf;
				}
		 else printf ("Identificateur %s refused : length %d is too large on line %d Colonne %d \n", yytext, yyleng, nb_ligne, col-strlen(yytext)); 
		  }

{IDFtab}	{  rechercher (yytext,"IDFtab ","",0, 0); 
		   col = col + strlen(yytext);
		   if (yyleng<10) { yylval.str=strdup(yytext);
				    return idftab;
				    }
		   else printf ("Identificateur %s refused : length %d is too large on line %d Colonne %d \n", yytext, yyleng, nb_ligne, col-strlen(yytext)); 
		  }

{cstInt} 		{ rechercher (yytext,"Cst entiere ","entier",atoi(yytext), 0);  col = col + strlen(yytext);  yylval.entier= atoi(yytext); ;return cstInt;}
{cstReal}		{ rechercher (yytext,"Cst real ","real",atof(yytext), 0);  col = col + strlen(yytext); yylval.real= atof(yytext); return cstReal;}

{caracter}		{rechercherCh (yytext,"Cst car ", "caractere" ,yytext); yylval.car= strdup(yytext); col = col + strlen(yytext); return car ;}
{chaine}		{rechercherCh (yytext,"Cst chaine ", "chaine" ,yytext); yylval.chaine= strdup(yytext); col = col + strlen(yytext); return chaine;}
{comment}		{ col = col + strlen(yytext); }
{text}			{ col = col + strlen(yytext); return text ;}

"##"		{rechercher (yytext,"Separateur",0,0, 2);  col = col + strlen(yytext); return dz;}


"::"		{rechercher (yytext,"Separateur",0,0, 2);  col = col + strlen(yytext); return dpts;}
"="		{rechercher (yytext,"Separateur",0,0, 2);  col = col + strlen(yytext); return egality;}
":="		{rechercher (yytext,"Separateur",0,0, 2);  col = col + strlen(yytext); return aff;}

"("		{rechercher (yytext,"Separateur",0,0, 2);  col = col + strlen(yytext);return par_o;}
")"		{rechercher (yytext,"Separateur",0,0, 2);  col = col + strlen(yytext);return par_f;}
"{"		{rechercher (yytext,"Separateur",0,0, 2);  col = col + strlen(yytext); return acc_o;}
"}"		{rechercher (yytext,"Separateur",0,0, 2);  col = col + strlen(yytext); return acc_f;}
"["		{rechercher (yytext,"Separateur",0,0, 2);  col = col + strlen(yytext); return cro_o;}
"]"		{rechercher (yytext,"Separateur",0,0, 2);  col = col + strlen(yytext); return cro_f;}

"''"		{rechercher (yytext,"Separateur",0,0, 2);  col = col + strlen(yytext); return dots;}
"$"		{rechercher (yytext,"Separateur",0,0, 2);  col = col + strlen(yytext); return fin;}
"%"		{rechercher (yytext,"Separateur",0,0, 2);  col = col + strlen(yytext); return s_real;}
"#"		{rechercher (yytext,"Separateur",0,0, 2);  col = col + strlen(yytext); return s_string;}
"&"		{rechercher (yytext,"Separateur",0,0, 2);  col = col + strlen(yytext); return s_char;}

"//"		{rechercher (yytext,"Separateur",0,0, 2);  col = col + strlen(yytext); return sep;}
[ \t]		{ col = col + strlen(yytext);  }
\n		{nb_ligne++; col=1;}

. printf("Erreur lexicale : %s \nligne %d Colonne %d\n",yytext ,nb_ligne, col);



%%

