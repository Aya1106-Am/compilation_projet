%{
#include"syn.tab.h"
#include<stdio.h>
#include<stdlib.h>
#include"fonction.h"
extern YYSTYPE yylval;
extern nb_ligne;
%}

Idf          [A-Z][A-Z|a-z|0-9]*(_[A-Z|a-z|0-9]+)*
chiffre      [0-9]
int1         "-"?{chiffre}+
float1       "-"?({chiffre}+)(".")({chiffre}+)

%%
"-"         { inserer(yytext,"OPERATEUR-ARITHMETIQUE"); yylval.str=strdup(yytext); return SUB; }
"--"        { inserer(yytext,"OPERATEUR-ARITHMETIQUE"); yylval.str=strdup(yytext); return DEC; }
"++"        { inserer(yytext,"OPERATEUR-ARITHMETIQUE"); yylval.str=strdup(yytext); return INCR;}
"<="        { inserer(yytext,"OPERATEUR-LOGIQUE"); yylval.str=strdup(yytext); return IE;  }
">="        { inserer(yytext,"OPERATEUR-LOGIQUE"); yylval.str=strdup(yytext); return SE;  }
"=="        { inserer(yytext,"OPERATEUR-LOGIQUE"); yylval.str=strdup(yytext); return EG;  }
"!="        { inserer(yytext,"OPERATEUR-LOGIQUE"); yylval.str=strdup(yytext); return DIFF;}
">"         { inserer(yytext,"OPERATEUR-LOGIQUE"); yylval.str=strdup(yytext); return SUP; }
"<"         { inserer(yytext,"OPERATEUR-LOGIQUE"); yylval.str=strdup(yytext); return INF; }

":="        { inserer(yytext,"OPERATEUR-AFFECTATION"); yylval.str=strdup(yytext); return AFF; }
"+"         { inserer(yytext,"OPERATEUR-ARITHMETIQUE"); yylval.str=strdup(yytext); return ADD; }

"*"         { inserer(yytext,"OPERATEUR-ARITHMETIQUE"); yylval.str=strdup(yytext);  return MUL; }
"/"         { inserer(yytext,"OPERATEUR-ARITHMETIQUE"); yylval.str=strdup(yytext); return DIV; }

"("         { inserer(yytext,"SEPARATEUR"); yylval.str=strdup(yytext); return OP; }
")"         { inserer(yytext,"SEPARATEUR"); yylval.str=strdup(yytext); return FP; }
"{"         { inserer(yytext,"SEPARATEUR"); yylval.str=strdup(yytext); return AO; }
"}"         { inserer(yytext,"SEPARATEUR"); yylval.str=strdup(yytext); return AF; }
";"         { inserer(yytext,"SEPARATEUR"); yylval.str=strdup(yytext); return PVG;}
","         { inserer(yytext,"SEPARATEUR"); yylval.str=strdup(yytext); return VRG;}
":"         { inserer(yytext,"SEPARATEUR"); yylval.str=strdup(yytext); return DP;}
"="         { inserer(yytext,"SAUVGARDER"); yylval.str=strdup(yytext); return EQ;}

"%"         { yylval.str=strdup(yytext); return PER;}
"&"         { yylval.str=strdup(yytext); return SYMB;}
"CONST"     { inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext); return CONST; }
"BEGIN"     { inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext); return BEGINN; }
"END"       { inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext); return END;   }
"INT"       { inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext); return INT;   }
"BOOL"      { inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext); return BOOL;  }
"FLOAT"     { inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext); return FLOAT; }
"For"       { inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext); return FOR;   }
"while"     { inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext); return WHILE;}
"do"        { inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext); return DO;}
"If"        { inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext); return IF;    }
"else"      { inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext); return ELSE;  }
"true"      { inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext); return TRU;  }
"false"     { inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext); return FALS; }
"switch"    { inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext); return SWITCH; }
"case"      { inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext); return CASE; }
"break"     { inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext); return BREAK; }
"default"   { inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext); return DEFAULT; }
"lire"      { inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext); return LIRE; }
"ecrire"    { inserer(yytext,"MOT-CLE"); yylval.str=strdup(yytext); return ECRIRE; }
"d"         { yylval.str=strdup(yytext); return D;}
"f"         { yylval.str=strdup(yytext); return F;}
'[^']*'     {return STRG;}
\"[^"]*\"   {}

{int1}      {yylval.num=atoi(yytext); return INTEGER_N;}
{float1}    {yylval.numf=atof(yytext); return FLOAT_N;}


{Idf}       {if (yyleng <=10) {inserer(yytext,"IDF"); yylval.str=strdup(yytext);  return IDF;}
            else printf("Erreur lexicale a la ligne %d : l'identificateur %s est trop long \n",nb_ligne,yytext); }

[ \t]* { }
[\n] { nb_ligne++; }
. printf("erreur lexicale a la ligne %d sur l'entite %s \n",nb_ligne,yytext);

%%
