%{   
    #include<stdio.h>   
    #include<stdlib.h>   
    int nb_ligne=1;  
    int nb_col=0; 
    char sauvT[30]; 
    char sauvTy[30]; 
    char sauvI[30];   
    char tempvaleur[30];
    char tempidf[30]; 
     char id[30];    
    int yyerror(char *msg);  
%}   
%union{  
int num;  
float numf;  
char* str;  
}  

%token <str>BEGINN <str>END <str>DEFAULT <str>CASE <str>SWITCH <str>BREAK <str>LIRE <str>ECRIRE
%token CONST <str>INT <str>BOOL <str>IDF <str>FLOAT  
%token FOR WHILE DO IF ELSE TRU FALS <num>INTEGER_N <numf>FLOAT_N  <str>F <str>D PER SYMB
%token AF AO FP EQ OP DIV MUL SUB ADD MOD <str>PUI <str>AFF INF SUP DIFF EG SE IE INCR DEC VRG PVG DP
  
%%  
PROGRAMME : DECLARATION BEGINN INSTRUCTION END { printf ("\n programme syntaxiquement juste");YYACCEPT;}
;

DECLARATION : TYPE LISTE_IDF PVG DECLARATION  
|CONST TYPE LISTE_DECLARATION PVG DECLARATION  
|BOOL IDF EQ TRU PVG DECLARATION {if(DoubleDec($2)==0) {strcpy(sauvT,$1);  insererTYPE($2,sauvT);}  
                                else printf("erreur semantique double declaration de la variable %s a la ligne %d et la colonne %d\n",$1,nb_ligne-1,nb_col);}  
|BOOL IDF EQ FALS PVG DECLARATION{if(DoubleDec($2)==0) {strcpy(sauvT,$1);  insererTYPE($2,sauvT);} 
                                else printf("erreur semantique double declaration de la variable %s a la ligne %d et la colonne %d\n",$1,nb_ligne-1,nb_col);}  
  
|BOOL IDF  PVG DECLARATION{if(DoubleDec($2)==0) {strcpy(sauvT,$1);  insererTYPE($2,sauvT);} 
                        else printf("erreur semantique double declaration de la variable %s a la ligne %d et la colonne %d\n",$1,nb_ligne-1,nb_col);}  
|   
; 

TYPE :INT {strcpy(sauvT,$1);}
|FLOAT {strcpy(sauvT,$1);} 
;  
  
LISTE_IDF  :IDF VRG LISTE_IDF {if(DoubleDec($1)==0) insererTYPE($1,sauvT);
                               else printf("erreur semantique double declaration de la variable %s a la ligne %d et la colonne %d\n",$1,nb_ligne,nb_col);}
            |IDF{if(DoubleDec($1)==0) insererTYPE($1,sauvT);
                 else printf("erreur semantique double declaration %s a la ligne %d et la colonne %d\n",$1,nb_ligne,nb_col);}
            |    
;  
  
LISTE_DECLARATION :IDF EQ INTEGER_N VRG LISTE_DECLARATION {if(DoubleDec($1)==0){ insererTYPE($1,sauvT);} 
                                    else  {printf("erreur semantique double declaration de la variable %s a la ligne %d et la colonne %d\n",$1,nb_ligne,nb_col);}  
                                    sprintf(tempvaleur,"%d",$3); insererConstante($1,tempvaleur);}  
            |IDF EQ FLOAT_N {if(DoubleDec($1)==0){ 
                            insererTYPE($1,sauvT);} 
                            else  {printf("erreur semantique double declaration de la variable %s a la ligne %d et la colonne %d\n",$1,nb_ligne,nb_col);}  
                            sprintf(tempvaleur,"%f",$3); insererConstante($1,tempvaleur);} 
            |IDF EQ FLOAT_N VRG LISTE_DECLARATION {if(DoubleDec($1)==0){ 
                                        insererTYPE($1,sauvT);} 
                                        else  {printf("erreur semantique double declaration de la variable %s a la ligne %d et la colonne %d\n",$1,nb_ligne,nb_col);}  
                                        sprintf(tempvaleur,"%f",$3); insererConstante($1,tempvaleur);}  
            |IDF EQ INTEGER_N {if(DoubleDec($1)==0){insererTYPE($1,sauvT);} 
                                else  {printf("erreur semantique double declaration de la variable %s a la ligne %d et la colonne %d\n",$1,nb_ligne,nb_col);}  
                                sprintf(tempvaleur,"%d",$3); insererConstante($1,tempvaleur);}   
;  
  
CNT :INTEGER_N { sprintf(sauvT, "%d", $1); }  
    |FLOAT_N   { sprintf(sauvT, "%f", $1); }  
;  
  // instruction 
INSTRUCTION:INST_FOR INSTRUCTION  
           |INST_IF INSTRUCTION
           |INST_AFF INSTRUCTION                   
           |INST_W INSTRUCTION
           |INST_DW INSTRUCTION
           |INST_SWITCH INSTRUCTION
           |LIRE OP PER VAR VRG SYMB IDF FP PVG INSTRUCTION
           |ECRIRE OP EVRG FP PVG INSTRUCTION
           |
;


EVRG: VRG  IDF EVRG
| 
;

VAR      :D 
         |F
;

// instruction switch
INST_SWITCH: SWITCH OP T FP AO CASES DEF AF
;

CASES: CASE T DP INSTRUCTION BREAK PVG CASES
      | 
;

DEF :DEFAULT DP INSTRUCTION
;
// instruction affectation
INST_AFF:IDF AFF arithmetic_expression PVG {strcpy(tempidf,$1);
                                   if(strcmp(id,"")!=0){
                                      if (checkTypeCompatibility($1, id)==0){
                                      printf("erreur semantique a la ligne %d  et la colonne %d : Non comptabilite des types dans l'assignation   \n", nb_ligne,nb_col);}}
                                   else if (checkTypeC($1, sauvTy)==0){
                                     printf("erreur semantique a la ligne %d  et la colonne %d : Non comptabilite des types dans l'assignation   \n", nb_ligne,nb_col);}
                                     
                                    if(DoubleDec($1)==0){
                                      printf("erreur semantique a la ligne %d et la colonne %d la variable %s nest pas declarer \n",nb_ligne,nb_col,$1);}
                                    if(constvaleur($1)==1) printf("erreur semantique a la ligne %d : changement de valeur de la constante %s \n",nb_ligne,$1);
                                      }
|IDF AFF TRU PVG {if(DoubleDec($1)==0){printf("erreur semantique a la ligne %d et la colonne %d la variable %s nest pas declarer \n",nb_ligne,nb_col,$1);}}
|IDF AFF FALS PVG {if(DoubleDec($1)==0){printf("erreur semantique a la ligne %d et la colonne %d la variable %s nest pas declarer \n",nb_ligne,nb_col,$1);}}
|IDF AFF COMPTEUR PVG {if(DoubleDec($1)==0){printf("erreur semantique a la ligne %d et la colonne %d la variable %s nest pas declarer \n",nb_ligne,nb_col,$1);}}
|IDF AFF IDF DIV INTEGER_N PVG{
if(DoubleDec($1)==0) printf("erreur semantique a la ligne %d et la colonne %d la variable %s nest pas declarer \n",nb_ligne,nb_col,$1);
if(DoubleDec($3)==0) printf("erreur semantique a la ligne %d et la colonne %d la variable %s nest pas declarer \n",nb_ligne,nb_col,$3);
if ($5==0) printf("erreur : division sur zero a la ligne %d et la colonne %d\n",nb_ligne,nb_col) ;
}
|IDF AFF CNT DIV INTEGER_N PVG{
if(DoubleDec($1)==0) printf("erreur semantique a la ligne %d et la colonne %d la variable %s nest pas declarer \n",nb_ligne,nb_col,$1);
if ($5==0) printf("erreur : division sur zero a la ligne %d et la colonne %d\n",nb_ligne,nb_col) ;
}
|IDF INCR PVG{if(DoubleDec($1)==0){printf("erreur semantique a la ligne %d et la colonne %d la variable %s nest pas declaree \n",nb_ligne,nb_col,$1);}}
|IDF DEC PVG{if(DoubleDec($1)==0){printf("erreur semantique la ligne %d et la colonne %d la variable %s nest pas declaree \n",nb_ligne,nb_col,$1);}}
; 

arithmetic_expression:IDF { strcpy(id,$1); 
                      if(DoubleDec($1)==0) printf("erreur semantique a la ligne %d et la colonne %d la variable %s nest pas declarer \n",nb_ligne,nb_col,$1);}
                    | INTEGER_N {strcpy(sauvTy,"INT"); }
                    | FLOAT_N { sprintf(sauvTy,"FLOAT");}
                    | arithmetic_expression ADD EXP { /* Code pour traiter l'addition */ }
                    | arithmetic_expression SUB EXP{ /* Code pour traiter la soustraction */ }
                    | arithmetic_expression MUL EXP { /* Code pour traiter la multiplication */ }
                    | arithmetic_expression DIV EXP { /* Code pour traiter la division */ }
                    | OP arithmetic_expression FP EXP{ /* Code pour traiter une expression entre parenthèses */ }
                    |arithmetic_expression MOD EXP
                    |arithmetic_expression PUI EXP
                    |
                    ;

EXP : arithmetic_expression
;

T:CNT 
|IDF {if(DoubleDec($1)==0){printf("erreur semantique a la ligne %d et la colonne %d la variable %s nest pas declaree \n",nb_ligne,nb_col,$1);}}
;

INST_FOR:FOR OP IDF AFF CNT VRG CONDITION VRG COMPTEUR FP AO INSTRUCTION AF {if(DoubleDec($3)==0){printf("erreur semantique a la ligne %d et la colonne %d la variable %s nest pas declaree \n",nb_ligne,nb_col,$3);}}
;  
INST_IF:IF OP CONDITION FP AO INSTRUCTION AF 
       |IF OP CONDITION FP AO INSTRUCTION AF ELSE AO INSTRUCTION AF 
; 
INST_W:WHILE OP CONDITION FP AO INSTRUCTION AF
;
INST_DW:DO AO INSTRUCTION AF WHILE OP CONDITION FP PVG
;

COMPTEUR:IDF INCR {if(DoubleDec($1)==0){printf("erreur semantique a la ligne %d et la colonne %d la variable %s nest pas declaree \n",nb_ligne,nb_col,$1);}}
|IDF DEC {if(DoubleDec($1)==0){printf("erreur semantique la ligne %d et la colonne %d la variable %s nest pas declaree \n",nb_ligne,nb_col,$1);}}
; 

CONDITION : T COND T
;

COND:EG 
    |IE
    |SE             
    |DIFF 
    |SUP                  
    |INF 
;

%%   
main (){ 
    yyparse(); 
    afficher();
} 
yywrap(){}
yyerror(char* msg) {printf("erreur syntaxique a la ligne %d et la colonne %d \n",nb_ligne,nb_col);}
