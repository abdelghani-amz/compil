%{
	#include "syntaxique.tab.h"
	int nb_ligne=1;
%}

lettreM [A-Z]
lettre [a-zA-Z]
chiffre [0-9]
IDF {lettreM}({lettre}|{chiffre})*
IDFtab {lettreM}({lettre}|{chiffre})*(\[0*[1-9][0-9]*\])
cstInt {chiffre}+|-{chiffre}+|\(-?{chiffre}+\)
cstReal {chiffre}+\.{chiffre}+|\(-?{chiffre}+\.{chiffre}+\)
caracter \'.\'
chaine 	\".+\"
text 	({chiffre}|{lettre})*|({lettre}|{chiffre})* 

%%

Programme	return mc_pgm;
INTEGER		return mc_integer;
REAL		return mc_real;
STRING		return mc_string;
CHAR		return mc_char;
PROCESS		return mc_process;
LOOP		return mc_loop;
ARRAY		return mc_array;
VAR			return mc_var;
CONST		return mc_const;
READ		return read;
WRITE		return write;
''			{printf("im gay");return dots;}
"%"		return s_real;
"#"		return s_string;
"&"		return s_char;



EG		return mc_eg;
SUP		return mc_sup;
SUPE		return mc_supe;
DIFF		return mc_diff;
INFE		return mc_infe;
INF		return mc_inf;

"/"		return division;
"+"		return addition;
"-"		return substraction;
"*"		return multi;
"@"		return address;
"|"		return separator;


{IDF} 	       {printf("Identificateur %s accepte !! \n",yytext); return idf;}
{IDFtab}		{printf("Identificateur %s accepte !! \n",yytext); return idftab;}
{cstInt} 		return cstInt;
{cstReal}		return cstReal;
{caracter}		return car ;
{chaine}		return chaine ;
{text}			return text ;

"##"		return dz;


"::"		return dpts;
"="		return egality;
":="		return aff;

"("		return par_o;
")"		return par_f;
"{"		return acc_o;
"}"		return acc_f;
"["		return cro_o;
"]"		return cro_f;
"$"		return fin;
"//"		return sep;
[ \t]
\n		nb_ligne++;
. printf("Erreur lexicale %s � la ligne %d\n",yytext ,nb_ligne);



%%

