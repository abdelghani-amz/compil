/****************CREATION DE LA TABLE DES SYMBOLES ******************/
/***Step 1: Definition des structures de données ***/
#include <stdio.h>
#include <stdlib.h>


typedef struct
{
   int state;
   char name[20];
   char code[20];
   char type[20];
   float val;
   char valCh[20];
 } element;


typedef struct
{ 
   int state; 
   char name[20];
   char type[20];
} elt;

element tab[1000];
elt tabs[40],tabm[40];
extern char sav[20];
char chaine1 [] = "";


/***Step 2: initialisation de l'état des cases des tables des symbloles***/
/*0: la case est libre    1: la case est occupée*/

void initialisation()
{
  int i;
  for (i=0;i<25;i++)
  {
	  tab[i].state=0; 
	  strcpy(tab[i].type,chaine1);
    strcpy(tab[i].valCh,chaine1);
	 
	  
	 
  }
  
  

  for (i=0;i<40;i++)
    {tabs[i].state=0;
    tabm[i].state=0;}

}


/***Step 3: insertion des entititées lexicales dans les tables des symboles ***/

void inserer (char entite[], char code[],char type[],float val,int i,int y)
{
  switch (y)
 { 
   case 0:/*insertion dans la table des IDF et CONST*/
       tab[i].state=1;
       strcpy(tab[i].name,entite);
       strcpy(tab[i].code,code);
	   strcpy(tab[i].type,type);
	   tab[i].val=val;
	   break;

   case 1:/*insertion dans la table des mots clés*/
       tabm[i].state=1;
       strcpy(tabm[i].name,entite);
       strcpy(tabm[i].type,code);
       break; 
    
   case 2:/*insertion dans la table des séparateurs*/
      tabs[i].state=1;
      strcpy(tabs[i].name,entite);
      strcpy(tabs[i].type,code);
      break;
 }

}

/***Step 4: La fonction Rechercher permet de verifier  si l'entité existe dèja dans la table des symboles */
void rechercher (char entite[], char code[],char type[],float val,int y)	
{

int j,i;

switch(y) 
  {
   case 0:/*verifier si la case dans la tables des IDF et CONST est libre*/
        for (i=0; ((i<1000)&&(tab[i].state==1))&&(strcmp(entite,tab[i].name)!=0);i++); 
        if((i<1000)&&(strcmp(entite,tab[i].name)!=0))
        { 
	        
			inserer(entite,code,type,val,i,0); 
	      
         }
        //else
          //printf("entité existe déjà\n");
        break;

   case 1:/*verifier si la case dans la tables des mots clés est libre*/
       
       for (i=0;((i<40)&&(tabm[i].state==1))&&(strcmp(entite,tab[i].name)!=0);i++); 
        if(i<40)
          inserer(entite,code,type,val,i,1);
        //else
          //printf("entité existe déjà\n");
        break; 
    
   case 2:/*verifier si la case dans la tables des séparateurs est libre*/
         for (i=0;((i<40)&&(tabs[i].state==1))&&(strcmp(entite,tab[i].name)!=0);i++); 
        if(i<40)
         inserer(entite,code,type,val,i,2);
        //else
   	       //printf("entité existe déjà\n");
        break;

  }

}


//{chaine}		{ rechercherCh (yytext,"Cst chaine ", "chaine" ,yytext); yylval.chaine= atof(yytext);  col = col + strlen(yytext); return chaine;}




void insererCh (char entite[], char code[],char type[],char val[],int i)
{
    tab[i].state=1;
    strcpy(tab[i].name,entite);
    strcpy(tab[i].code,code);
	  strcpy(tab[i].type,type);
	  strcpy(tab[i].valCh,val);
}

void rechercherCh (char entite[], char code[],char type[],char val[])	
{
  int i;
    for (i=0; ((i<1000)&&(tab[i].state==1))&&(strcmp(entite,tab[i].name)!=0);i++); 
        if((i<1000)&&(tab[i].state==0))
        { 
		    	insererCh(entite,code,type,val,i); 
         }
}


/***Step 5 L'affichage du contenue de la table des symboles ***/

void afficher()
{int i;
 
printf("\n/***************Table des symboles IDF***************/");
printf("\n/***************Table des symboles IDF******************/\n");
printf("____________________________________________________________________\n");
printf("\t| Nom_Entite |  Code_Entite | Type_Entite | Val_Entite\n");
printf("____________________________________________________________________\n");
  
for(i=0;i<1000;i++)
{	
	
    if(tab[i].state==1)
      { if(strcmp(tab[i].type,"real")!=0 && strcmp(tab[i].type,"entier")!=0 ){
         printf("\t|%10s |%15s | %12s | %12s\n",tab[i].name,tab[i].code,tab[i].type,tab[i].valCh);}

         else{
           printf("\t|%10s |%15s | %12s | %12f\n",tab[i].name,tab[i].code,tab[i].type,tab[i].val);
         }
		
         
      }
}
printf("\n\n\n/***************Table des Mot cles***************/");
printf("\n/***************Table des Mot cles******************/\n");
printf("____________________________________________________________________\n");
printf("\t| Nom_Entite |  Code_Entite\n");
printf("____________________________________________________________________\n");
for(i=0;i<40;i++)
{	
	
    if(tabm[i].state==1){
      
           printf("\t|%10s |%15s\n",tabm[i].name,tabm[i].type);
         }
		
         
      }


printf("\n\n\n/***************Table des Separateurs***************/");
printf("\n/***************Table des Separateurs******************/\n");
printf("____________________________________________________________________\n");
printf("\t| Nom_Entite |  Code_Entite\n");
printf("____________________________________________________________________\n");
for(i=0;i<40;i++)
{	
	
    if(tabs[i].state==1){
      
           printf("\t|%10s |%15s\n",tabs[i].name,tabs[i].type);
         }
		
         
      }

}

		
		
    int Recherche_position(char entite[])
		{
		int i=0;
		while(i<1000)
		{
		
		if (strcmp(entite,tab[i].name)==0) return i;	
		i++;
		}
 
		return -1;
		
		}


	 void insererTYPE(char entite[], char type[])
	{
       int pos;
       
	   pos=Recherche_position(entite);
	   if(pos!=-1)  { strcpy(tab[pos].type,type); }
	}

  	void insertValEntiere(char entite[], int val)
	{
	   int pos;
     
	   pos= Recherche_position(entite);
	   tab[pos].val =val;
	}

  void insertReal(char entite[], float* val)
	{
	   int pos;
     printf("in ts : %f \n", *val) ;
	   pos= Recherche_position(entite);
	   tab[pos].val = *val;
	}

  void insertCh(char entite[], char val[])
	{
	   int pos;
	   pos= Recherche_position(entite);
	   strcpy(tab[pos].valCh , val) ;
	}

	int GetValue(char entite[])
		{
		int pos;
		pos= Recherche_position(entite);
		return tab[pos].val;
	
	}  
  char *GetType(char entite[])
		{
		int pos;
		pos= Recherche_position(entite);
		return tab[pos].type;
	
	}  
	
	int doubleDeclaration(char entite[])
	{
	int pos , pos1;
	pos=  Recherche_position(entite);
	if(strcmp(tab[pos].type,"")!=0) return -1;
	   else return 0;
	  
  }


  int rechercheBib(char* bib){
    int i ;
    for(i=0 ; (i<40 && tabm[i].state==1) ; i++){
      if(strcmp(tabm[i].name , bib) == 0){
        return 1 ;
      }
    }

    return 0 ;
  }
	
	