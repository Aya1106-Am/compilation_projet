%{
    #include<stdio.h>
    #include<stdlib.h>
    int nb_ligne=1;
    char sauvT[20];
    char tempvaleur[20];
    int yyerror(char *msg);
%}
%union{
int num;
float numf;
char* str;
}
%token BEGINN END
%token CONST INT BOOL <str>IDF FLOAT
%token FOR WHILE DO IF ELSE TRU FALS <num>INTEGER_N <numf>FLOAT_N
%token AF AO FP EQ OP DIV MUL SUB ADD AFF INF SUP DIFF EG SE IE INCR DEC VRG PVG

%%
PROGRAMME : DECLARATION BEGINN INSTRUCTION END { printf ("\n programme syntaxiquement juste");YYACCEPT ;};

DECLARATION : TYPE LISTE_IDF PVG DECLARATION
                  |CONST TYPE LISTE_DECLARATION PVG DECLARATION
                  |BOOL IDF EQ TRU PVG DECLARATION {if(DoubleDec($2)==0) strcpy(sauvT,$2);
                                                    else printf("erreure semantique double declaration a la ligne %d\n",nb_ligne);
}
                  |BOOL IDF EQ FALS PVG DECLARATION{if(DoubleDec($2)==0) strcpy(sauvT,$2);
                                                     else printf("erreur semantique double declaration a la ligne %d\n",nb_ligne);
}

                  |BOOL IDF PVG DECLARATION{if(DoubleDec($2)==0) strcpy(sauvT,$2);
                                             else printf("erreur semantique double declaration a la ligne %d\n",nb_ligne);
}
|
;
TYPE              :INT  {sauvI = "entier";}
                  |FLOAT {sauvF = "reel";}
;

LISTE_IDF         :IDF VRG LISTE_IDF {{if(DoubleDec($1)==0)
                                                 insererTYPE($1,sauvT);
                                            else
                                        printf("erreur semantique double declaration de la variable %s a la ligne %d\n",$1,nb_ligne);}}
                  |IDF                {{if(DoubleDec($1)==0)
                                                 insererTYPE($1,sauvT);
                                            else
                                        printf("erreur semantique double declaration %s a la ligne %d\n",$1,nb_ligne);} }
                 |

;

LISTE_DECLARATION :IDF EQ INTEGER_N VRG LISTE_DECLARATION {sprintf(tempvaleur,"%d",$3); insererConstante($1,tempvaleur); insererTYPE($1,sauvI);}
                  |IDF EQ FLOAT_N {sprintf(tempvaleur,"%d",$3); insererConstante($1,tempvaleur); insererTYPE($1,sauvF);}
                  |IDF EQ FLOAT_N VRG LISTE_DECLARATION {sprintf(tempvaleur,"%d",$3); insererConstante($1,tempvaleur); insererTYPE($1,sauvF);}
                  |IDF EQ INTEGER_N {sprintf(tempvaleur,"%d",$3); insererConstante($1,tempvaleur); insererTYPE($1,sauvI);}
;

CNT :INTEGER_N { sprintf(sauvT, "%d", $1); }
    |FLOAT_N   { sprintf(sauvT, "%f", $1); }
;

INSTRUCTION       :INST_FOR INSTRUCTION
                  |INST_IF INSTRUCTION
                  |INST_AFF INSTRUCTION
                  |INST_W INSTRUCTION
                  |INST_INCR INSTRUCTION
                  |
;

INST_INCR         :IDF INCR PVG
                  |IDF DEC PVG
;

INST_W            :WHILE OP COND FP AO INSTRUCTION AF
                  |DO AO INSTRUCTION AF WHILE OP COND FP PVG
;

INST_AFF          :IDF AFF EXPRESSION PVG
                  |IDF AFF IDF PVG
                  |IDF AFF CNT PVG
                  |IDF AFF TRU PVG
                  |IDF AFF FALS PVG
;

EXPRESSION        :T MUL T
                  |T SUB T
                  |T ADD T
                  |T DIV T
                  |EXPRESSION MUL EXPRESSION
                  |EXPRESSION SUB EXPRESSION
                  |EXPRESSION ADD EXPRESSION
                  |EXPRESSION DIV EXPRESSION
;

T : CNT | IDF ;

INST_FOR          :FOR OP IDF AFF CNT VRG COND VRG COMPTEUR FP AO INSTRUCTION AF
;


INST_IF           :IF OP COND FP AO INSTRUCTION AF
                  |IF OP COND FP AO INSTRUCTION AF ELSE AO INSTRUCTION AF
;

COMPTEUR          :IDF INCR
                  |IDF DEC
;

COND              :IDF EG IDF {}
                  |IDF IE IDF {}
                  |IDF SE IDF
                  |IDF DIFF IDF
                  |IDF SUP IDF
                  |IDF INF IDF
                  |IDF EG CNT
                  |IDF IE CNT
                  |IDF SE CNT
                  |IDF DIFF CNT
                  |IDF SUP CNT
                  |IDF INF CNT
                  |IDF EG TRU {}
                  |IDF EG FALS
;
%%

main (){
    yyparse();
    afficher();
}
yywrap(){}
yyerror(char* msg) {printf("erreur syntaxique a laligne %d \n",nb_ligne);}
