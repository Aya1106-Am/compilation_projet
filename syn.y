%{
    #include<stdio.h>
    #include<stdlib.h>
    int nb_ligne=1,i;
    char sauvT[20];
    char sauvI[20];
    char tempvaleur[20];
    char tempidf[30];
    int yyerror(char *msg);
%}
%union{
int num;
float numf;
char* str;
}
%token BEGINN END
%token <str>CONST <str>INT <str>BOOL <str>IDF <str>FLOAT
%token <str>FOR <str>WHILE <str>DO <str>IF <str>ELSE <str>SWITCH <str>CASE <str>BREAK <str>DEFAULT <str>LIRE <str>ECRIRE <str>TRU <str>FALS <num>INTEGER_N <numf>FLOAT_N
%token <str>AF <str>AO <str>FP <str>EQ <str>OP <str>DIV <str>MUL <str>SUB <str>ADD <str>AFF <str>INF <str>SUP <str>DIFF <str>EG <str>SE <str>IE <str>INCR <str>DEC <str>VRG <str>DP <str>PVG
%token SYMB PER <str>D <str>F STRG

%%
PROGRAMME : DECLARATION BEGINN INSTRUCTION END { printf ("\n programme syntaxiquement juste");YYACCEPT ;};

DECLARATION : TYPE LISTE_IDF PVG DECLARATION
|CONST TYPE LISTE_DECLARATION PVG DECLARATION
|BOOL IDF EQ TRU PVG DECLARATION {if(DoubleDec($2)==0) {strcpy(sauvT,$1);  insererTYPE($2,sauvT);}
                                                    else printf("erreur semantique double declaration de la variable %s a la ligne %d\n",$1,nb_ligne-1);
}
|BOOL IDF EQ FALS PVG DECLARATION{if(DoubleDec($2)==0) {strcpy(sauvT,$1);  insererTYPE($2,sauvT);}
                                                     else printf("erreur semantique double declaration de la variable %s a la ligne %d\n",$1,nb_ligne-1);
}

|BOOL IDF PVG DECLARATION{if(DoubleDec($2)==0) {strcpy(sauvT,$1);  insererTYPE($2,sauvT);}
                                             else printf("erreur semantique double declaration de la variable %s a la ligne %d\n",$1,nb_ligne-1);;
}
|
;

TYPE              :INT {strcpy(sauvT,$1); }
                  |FLOAT {strcpy(sauvT,$1);}
;

LISTE_IDF         :IDF VRG LISTE_IDF {{if(DoubleDec($1)==0)
                                                 insererTYPE($1,sauvT);
                                            else
                                        printf("erreur semantique double declaration de la variable %s a la ligne %d\n",$1,nb_ligne);}}
                  |IDF                {{if(DoubleDec($1)==0)
                                                 insererTYPE($1,sauvT);
                                            else
                                        printf("erreur semantique double declaration %s a la ligne %d\n",$1,nb_ligne);}
                                         }
                  |
;

LISTE_DECLARATION :IDF EQ INTEGER_N VRG LISTE_DECLARATION {if(DoubleDec($1)==0){
                                        insererTYPE($1,sauvT);}
                                        else  {printf("erreur semantique double declaration de la variable %s a la ligne %d\n",$1,nb_ligne);}
                                        sprintf(tempvaleur,"%d",$3); insererConstante($1,tempvaleur);}
                  |IDF EQ FLOAT_N {if(DoubleDec($1)==0){
                                        insererTYPE($1,sauvT);}
                                        else  {printf("erreur semantique double declaration de la variable %s a la ligne %d\n",$1,nb_ligne);}
                                        sprintf(tempvaleur,"%d",$3); insererConstante($1,tempvaleur);}
                  |IDF EQ FLOAT_N VRG LISTE_DECLARATION {if(DoubleDec($1)==0){
                                        insererTYPE($1,sauvT);}
                                        else  {printf("erreur semantique double declaration de la variable %s a la ligne %d\n",$1,nb_ligne);}
                                        sprintf(tempvaleur,"%d",$3); insererConstante($1,tempvaleur);}
                  |IDF EQ INTEGER_N {if(DoubleDec($1)==0){
                                        insererTYPE($1,sauvT);}
                                        else  {printf("erreur semantique double declaration de la variable %s a la ligne %d\n",$1,nb_ligne);}
                                        sprintf(tempvaleur,"%d",$3); insererConstante($1,tempvaleur);}
;

CNT :INTEGER_N { sprintf(sauvT, "%d", $1); strcpy(tempidf,getType(sauvT));}
    |FLOAT_N   { sprintf(sauvT, "%f", $1); strcpy(tempidf,getType(sauvT));}
;

INSTRUCTION       :INST_FOR INSTRUCTION
                  |INST_IF INSTRUCTION
                  |INST_AFF INSTRUCTION
                  |INST_W INSTRUCTION
                  |INST_DW INSTRUCTION
                  |INST_SWITCH INSTRUCTION
                  |LIRE OP PER VAR VRG SYMB IDF FP PVG INSTRUCTION
                  |ECR
                  |
;

ECR: ECRIRE OP FP PVG INSTRUCTION
     |ECRIRE OP ADD IDF FP PVG INSTRUCTION
;
VAR      :D
         |F
;

INST_AFF : IDF AFF expression PVG {
              if(constvaleur($1)==1) printf("erreur semantique a la ligne %d : changement de valeur de la constante %s \n",nb_ligne,$1);

              if (!checkTypeCompatibility($1, tempidf)){
                  printf("erreur semantique a la ligne %d : type mismatch dans l'assignation %s := %s \n", nb_ligne, $1, tempidf);}
                      //if(checkUndeclaredIdentifiers($) == 1){
                                        //printf("erreur semantique variable %s non declaree a la ligne %d\n",$,nb_ligne);}
                                    }
            |IDF AFF TRU PVG
            |IDF AFF FALS PVG
;

expression : T
           | T ADD expression
           | T SUB EXP
           | T MUL EXP
           | T DIV EXP
           | OP expression FP  EXP
           |
;

EXP : expression
;

T                :IDF {strcpy(tempidf,$1);}
                 |CNT
;

INST_FOR          :FOR OP IDF AFF CNT VRG OPP VRG COMPTEUR FP AO INSTRUCTION AF
;

INST_IF           :IF OP OPP FP AO INSTRUCTION AF K
;

K : ELSE AO INSTRUCTION AF
|
;

INST_W            :WHILE OP OPP FP AO INSTRUCTION AF
;

INST_DW           :DO AO INSTRUCTION AF WHILE OP OPP FP PVG
;

INST_SWITCH       :SWITCH OP T FP AO CASES DEF AF
;

CASES             :CASE B DP INSTRUCTION BREAK PVG CASES
                  |CASE B DP CASES
                  |
;

B           :STRG
            |CNT
;

DEF               :DEFAULT DP INSTRUCTION
;

COMPTEUR          :IDF INCR
                  |IDF DEC
;

OPP               :T COND T
;

COND :EG
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
yyerror(char* msg) {printf("erreur syntaxique a la ligne %d \n",nb_ligne);}
