%{   
#include "QL.tab.h"   
#include<stdio.h>   
#include<stdlib.h>   
#include "c.h"   
extern YYSTYPE yylval;  
extern nb_ligne;   
extern nb_col;
%}
Idf          [A-Z][A-Z|a-z|0-9]*(_[A-Z|a-z|0-9]+)*   
chiffre      [0-9]  
int1         "-"?{chiffre}+  
float1       "-"?({chiffre}+)(".")({chiffre}+)
%%   
":"         { nb_col+=yyleng ; inserer(yytext,"SEPARATEUR"); yylval.str=strdup(yytext);return DP; } 
"--"        { nb_col+=yyleng ; inserer(yytext,"OPERATEUR-ARITHMETIQUE"); yylval.str=strdup(yytext); return DEC; }  
"++"        { nb_col+=yyleng ; inserer(yytext,"OPERATEUR-ARITHMETIQUE"); yylval.str=strdup(yytext); return INCR;}   
"<="        { nb_col+=yyleng ;inserer(yytext,"OPERATEUR-LOGIQUE"); yylval.str=strdup(yytext); return IE;  }  
">="        { nb_col+=yyleng ;inserer(yytext,"OPERATEUR-LOGIQUE"); yylval.str=strdup(yytext); return SE;  }   
"=="        { nb_col+=yyleng ;inserer(yytext,"OPERATEUR-LOGIQUE"); yylval.str=strdup(yytext); return EG;  }  
"<>"        { nb_col+=yyleng ;inserer(yytext,"OPERATEUR-LOGIQUE"); yylval.str=strdup(yytext); return DIFF;}   
">"         { nb_col+=yyleng ; inserer(yytext,"OPERATEUR-LOGIQUE"); yylval.str=strdup(yytext); return SUP; }  
"<"         { nb_col+=yyleng ;inserer(yytext,"OPERATEUR-LOGIQUE"); yylval.str=strdup(yytext); return INF; }  
":="        { nb_col+=yyleng ;inserer(yytext,"OPERATEUR-AFFECTATION"); yylval.str=strdup(yytext);return AFF; }  
"+"         { nb_col+=yyleng ; inserer(yytext,"OPERATEUR-ARITHMETIQUE"); yylval.str=strdup(yytext);return ADD; }  
"-"         { nb_col+=yyleng ; inserer(yytext,"OPERATEUR-ARITHMETIQUE"); yylval.str=strdup(yytext);return SUB; }  
"*"         { nb_col+=yyleng ; inserer(yytext,"OPERATEUR-ARITHMETIQUE"); yylval.str=strdup(yytext);return MUL; }  
"/"         { nb_col+=yyleng ; inserer(yytext,"OPERATEUR-ARITHMETIQUE"); yylval.str=strdup(yytext);return DIV; } 

"("         { nb_col+=yyleng ; inserer(yytext,"SEPARATEUR"); yylval.str=strdup(yytext);return OP; }  
")"         { nb_col+=yyleng ; inserer(yytext,"SEPARATEUR"); yylval.str=strdup(yytext);return FP; }  
"{"         { nb_col+=yyleng ; inserer(yytext,"SEPARATEUR"); yylval.str=strdup(yytext);return AO; }  
"}"         { nb_col+=yyleng ; inserer(yytext,"SEPARATEUR"); yylval.str=strdup(yytext);return AF; }  
";"         { nb_col+=yyleng ; inserer(yytext,"SEPARATEUR"); yylval.str=strdup(yytext);return PVG;}  
","         { nb_col+=yyleng ; inserer(yytext,"SEPARATEUR"); yylval.str=strdup(yytext);return VRG;}  
"="         { nb_col+=yyleng ; inserer(yytext,"SAUVGARDER"); yylval.str=strdup(yytext);return EQ; }
"%%"        { nb_col+=yyleng ; inserer(yytext,"OPERATEUR-ARITHMETIQUE"); yylval.str=strdup(yytext); return MOD;}
"^"         { nb_col+=yyleng ; inserer(yytext,"OPERATEUR-ARITHMETIQUE"); yylval.str=strdup(yytext); return PUI;}
"%"         { nb_col+=yyleng ; yylval.str=strdup(yytext); return PER;}
"&"         { nb_col+=yyleng ; yylval.str=strdup(yytext); return SYMB;}  

"FONCTION"    { nb_col+=yyleng ; inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext); return FUNC; } 
"VOID"     { nb_col+=yyleng ; inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext); return VOID; } 
"return"     { nb_col+=yyleng ; inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext); return TURN; } 
"CONST"     { nb_col+=yyleng ; inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext); return CONST; }  
"BEGIN"     { nb_col+=yyleng ; inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext);return BEGINN; }  
"END"       { nb_col+=yyleng ; inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext); return END;   }  
"INT"       { nb_col+=yyleng ;inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext); return INT;   }   
"BOOL"      { nb_col+=yyleng ;inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext);return BOOL;  }   
"FLOAT"     { nb_col+=yyleng ; inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext); return FLOAT; }   
"For"       { nb_col+=yyleng ; inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext);return FOR;   } 
"While"     { nb_col+=yyleng ; inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext);return WHILE;} 
"Do"        { nb_col+=yyleng ; inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext);return DO;}   
"If"        { nb_col+=yyleng ; inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext);return IF;    }   
"else"      { nb_col+=yyleng ;inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext);return ELSE;  }   
"true"      { nb_col+=yyleng ; inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext);return TRU;  }
"false"     { nb_col+=yyleng ; inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext);return FALS; }   
"switch"    { nb_col+=yyleng ; inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext);return SWITCH; }
"case"      { nb_col+=yyleng ; inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext);return CASE; }
"default"   { nb_col+=yyleng ; inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext);return DEFAULT; }
"break"     { nb_col+=yyleng ; inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext);return BREAK; }
"lire"      { nb_col+=yyleng ; inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext); return LIRE; }
"ecrire"    { nb_col+=yyleng ; inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext); return ECRIRE; }
"d"         { nb_col+=yyleng ; yylval.str=strdup(yytext); return D;}
"f"         { nb_col+=yyleng ; yylval.str=strdup(yytext); return F;}
\"[^"]*\"   {nb_col+=yyleng ;} 

{int1}      { nb_col+=yyleng ; yylval.num=atoi(yytext); return INTEGER_N;}   
{float1}    { nb_col+=yyleng ; yylval.numf=atof(yytext); return FLOAT_N;}
{Idf}       { nb_col+=yyleng ; if (yyleng <=10) {inserer(yytext,"IDF"); yylval.str=strdup(yytext);  return IDF;} 
                            else printf("Erreur lexicale a la ligne %d et la colonne %d : l'identificateur %s est trop long \n",nb_ligne,nb_col,yytext);}  
[\n]  { nb_ligne++; nb_col=0;}
[ \t] { }  
. printf("erreur lexicale a la ligne %d et la colonne %d sur l'entite %s \n",nb_ligne,nb_col,yytext);  
%%
