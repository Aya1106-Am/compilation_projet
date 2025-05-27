#ifndef FONCTION_H 
#define FONCTION_H 
#include <strings.h>

typedef struct 
{ 
char NomEntite[50]; 
char CodeEntite[50]; 
char TypeEntite[50]; 
char constante[50]; 
char valeur[50]; 
} TypeTS; 
 
  
 
TypeTS ts[10000]; 
int CpTabSym=0; 
 
 
 
int recherche(char entite[]) 
{ 
int i=0; 
while(i<CpTabSym) 
{ 
if (strcmp(entite,ts[i].NomEntite)==0) return i; 
i++; 
} 
return -1; 
} 
 
 
 
void inserer(char entite[], char code[]) 
{ 
if ( recherche(entite)==-1) 
{ 
strcpy(ts[CpTabSym].NomEntite,entite); 
strcpy(ts[CpTabSym].CodeEntite,code); 
strcpy(ts[CpTabSym].constante,"non"); 
CpTabSym++; 
} 
} 
 
 
void insererTYPE(char entite[], char type[]) 
{ 
    int pos; 
    pos=recherche(entite); 
    if(pos!=-1){ 
        strcpy(ts[pos].TypeEntite,type); 
    } 
} 
 
 
 
int DoubleDec(char entite[], char type[]) 
{ 
    int pos; 
    pos=recherche(entite); 
    if(strcmp(ts[pos].TypeEntite,"")==0) return 0; 
    else return -1;  
} 
 

void insererConstante(char entite[], char valeur[]){ 
    int pos; 
    pos=recherche(entite); 
    strcpy(ts[pos].constante,"oui"); 
    strcpy(ts[pos].valeur,valeur); 
} 
 
int constvaleur(char entite[]){ 
    int pos; 
    pos=recherche(entite); 
    if (strcmp(ts[pos].constante,"non")==0) return -1; 
    else   
    { 
        if(strcmp(ts[pos].valeur,"")==0) return -1; 
        else return 1 ;  
    } 
} 


int checkUndeclaredIdentifiers(char entite[]){
    int i;
    for (i = 0; i < CpTabSym; ++i) {
        if (strcmp(ts[i].TypeEntite,"") != 0) {
            return 1;  // Identifiant non déclaré utilisé
        }
    }
    return 0;  // Aucun problème
}

int getType(char var[]){
    char c=".";
    if(strchr(var, c)!= NULL) return 1;
    else return 0;
}

int checkTypeC(char entite[], char sourceType[]) 
{   
    char destType[50];
    int pos;
    pos = recherche(entite);
    strcpy(destType ,ts[pos].TypeEntite);
    
    if (strcmp(destType, "INT") == 0 && strcmp(sourceType, "INT") == 0)
        return 1;
    else if (strcmp(destType, "FLOAT") == 0 && strcmp(sourceType, "FLOAT") == 0)
        return 1;
    else if (strcmp(destType, "BOOL") == 0 && strcmp(sourceType, "BOOL") == 0)
        return 1;
    else
        return 0;
}

int checkTypeCompatibility(char entite[], char entite2[]) 
{   
    char destType[50];
    char sourceType[50];
    int pos,pos2;
    pos = recherche(entite);
    strcpy(destType ,ts[pos].TypeEntite);
    pos2 = recherche(entite2);
    strcpy(sourceType ,ts[pos2].TypeEntite);
    
    if (strcmp(destType, "INT") == 0 && strcmp(sourceType, "INT") == 0)
        return 1;
    else if (strcmp(destType, "FLOAT") == 0 && strcmp(sourceType, "FLOAT") == 0)
        return 1;
    else if (strcmp(destType, "BOOL") == 0 && strcmp(sourceType, "BOOL") == 0)
        return 1;
    else
        return 0;
}



 
void afficher () 
{ 
printf("\n       /******Table des symboles ******/\n"); 
printf("_____________________________________________________________________________________________________\n"); 
printf("\t| NomEntite    |    CodeEntite         |   typeEntite     |  is-Const     |    Valeur\n"); 
printf("_____________________________________________________________________________________________________\n"); 
int i=0; 
while(i<CpTabSym) 
{ 
printf("\t|%13s |%22s |%17s |%14s |%10s \n",ts[i].NomEntite,ts[i].CodeEntite,ts[i].TypeEntite,ts[i].constante,ts[i].valeur); 
i++; 
} 
}
 
#endif // FONCTION_H
