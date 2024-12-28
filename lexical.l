%{
#include "syntax.tab.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TS.h"
#define max_idf_length 7
int nb_ligne=1;
int col=1;
int cold=1;
int ld=1;
void posupdate(int a, int b);
int entiers_to_int(const char *yytext);
float reels_to_float(const char *yytext);
int erreur=0;
char *errortext;
extern YYSTYPE yylval;
extern struct hashMap symbolTable;
struct hashMap symbolTablemc;
struct hashMap symbolTables;
%}
%option yylineno 

lettre [a-zA-Z]
chiffre [0-9]
chiffresz [1-9]
IDF {lettre}({lettre}|{chiffre}|_({lettre}|{chiffre}))*_?
entier 0|{chiffresz}{chiffre}*
reel (0|({chiffresz}{chiffre}*))\.(0|{chiffre}*{chiffresz})
entiers "("[+-](0|{chiffresz}{chiffre}*)")"
reels "("[+-]((0|({chiffresz}{chiffre}*))\.(0|{chiffre}*{chiffresz}))")"
chaine \'.*\'
coml \/\/[^\n]*
comml \/\*([^\*]|\n|\*([^\/]|\n))*\*\/

%%

"IF" {if(search(&symbolTablemc,yytext)==NULL)insert(&symbolTablemc,strdup(yytext),0.0," ");
    posupdate(col,nb_ligne);col=col+yyleng;errortext=yytext;return iff;};
"ELSE" {if(search(&symbolTablemc,yytext)==NULL)insert(&symbolTablemc,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col=col+yyleng;errortext=yytext;return elsee;};
"FOR" {if(search(&symbolTablemc,yytext)==NULL)insert(&symbolTablemc,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col=col+yyleng;errortext=yytext;return forr;}; 
"WHILE" {if(search(&symbolTablemc,yytext)==NULL)insert(&symbolTablemc,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col=col+yyleng;errortext=yytext;return whilee;};
"readln" {if(search(&symbolTablemc,yytext)==NULL)insert(&symbolTablemc,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col=col+yyleng;errortext=yytext;return read;};
"writeln" {if(search(&symbolTablemc,yytext)==NULL)insert(&symbolTablemc,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col=col+yyleng;errortext=yytext;return write;};
{chaine} {posupdate(col,nb_ligne);col=col+yyleng;errortext=yytext;return ch;};

"PROGRAMME" {if(search(&symbolTablemc,yytext)==NULL)insert(&symbolTablemc,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col=col+yyleng;errortext=yytext;return prog;};

"VAR"  {if(search(&symbolTablemc,yytext)==NULL)insert(&symbolTablemc,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col=col+yyleng;errortext=yytext;return var;};
"BEGIN"  {if(search(&symbolTablemc,yytext)==NULL)insert(&symbolTablemc,strdup(yytext),0.0," ");
if(search(&symbolTablemc,yytext)==NULL)insert(&symbolTablemc,strdup(yytext),0.0," ");posupdate(col,nb_ligne);col=col+yyleng;errortext=yytext;return beg;};
"END"  {if(search(&symbolTablemc,yytext)==NULL)insert(&symbolTablemc,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col=col+yyleng;errortext=yytext;return end;};
"INTEGER" {if(search(&symbolTablemc,yytext)==NULL)insert(&symbolTablemc,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col=col+yyleng;errortext=yytext;return intid;};
"FLOAT" {if(search(&symbolTablemc,yytext)==NULL)insert(&symbolTablemc,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col=col+yyleng;errortext=yytext;return floid;};
"CONST" {if(search(&symbolTablemc,yytext)==NULL)insert(&symbolTablemc,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col=col+yyleng;errortext=yytext;return constid;};


{IDF} {if(yyleng > max_idf_length){printf("Erreur lexicale : ligne %d , col %d , Entite fautive %s \n", nb_ligne,col, yytext);erreur=1;}
else{posupdate(col,nb_ligne);col=col+yyleng;errortext=yytext;yylval.str.text=strdup(yytext);yylval.str.ligne=ld;  return idf;} };


{entier} {
    int value = atoi(yytext);
    if (value > 32767) {
        printf("Erreur lexicale : ligne %d , col %d , Entite fautive %s \n", nb_ligne,col, yytext);
        erreur=1; 
    } else {posupdate(col,nb_ligne);
        col=col+yyleng;
        yylval.entier=value;
        errortext=yytext;
        return entier;  
    }
};
{entiers} {
    int value = entiers_to_int(yytext);
    if (value > 32767 || value < -32768) {
        printf("Erreur lexicale : ligne %d , col %d , Entite fautive %s \n", nb_ligne,col, yytext);
        erreur=1; 
    } else {posupdate(col,nb_ligne);
        col=col+yyleng;
        yylval.entier=value;
        errortext=yytext;
        return entiers; 
    }
    
};

{reels} {
    float value = reels_to_float(yytext);  
    if (value > 32767 || value < -32768) {
        printf("Erreur lexicale : ligne %d , col %d , Entite fautive %s \n", nb_ligne,col, yytext);
        erreur=1; 


    } else {ld=nb_ligne;
        cold=col;col=col+yyleng;
        yylval.reel=value;
        errortext=yytext;
        return reels; 
    } 
};

{reel} {
    float value = atof(yytext);  
    if (value > 32767 || value < -32768) {
        printf("Erreur lexicale : ligne %d , col %d , Entite fautive %s \n", nb_ligne,col, yytext);
        erreur=1; 
    } else {posupdate(col,nb_ligne);
        col=col+yyleng;
        yylval.reel=value;
        errortext=yytext;
        return reel; 
    }  
};
{comml} {int i = 0;
int len = strlen(yytext);
char chartest[2];  // Taille suffisante pour 1 caractère + '\0'

while (i < len) {
    strncpy(chartest, yytext + i, 1);
    chartest[1] = '\0';  // Ajout manuel du caractère nul

    if (strcmp(chartest, "\n") == 0) {
        nb_ligne++;
        col = 1;
    } else {
        col++;
    }
    i++;
}

}
{coml} {col=col+yyleng;}
"&&" {if(search(&symbolTables,yytext)==NULL)insert(&symbolTables,strdup(yytext),0.0," ");
    posupdate(col,nb_ligne);col+=2;errortext=yytext;return and;};
"||" {if(search(&symbolTables,yytext)==NULL)insert(&symbolTables,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col+=2;errortext=yytext;return or;};
"==" {if(search(&symbolTables,yytext)==NULL)insert(&symbolTables,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col+=2;errortext=yytext;return equal;};
"!=" {if(search(&symbolTables,yytext)==NULL)insert(&symbolTables,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col+=2;errortext=yytext;return nequal;};
! {if(search(&symbolTables,yytext)==NULL)insert(&symbolTables,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col++;errortext=yytext;return not;};
">=" {if(search(&symbolTables,yytext)==NULL)insert(&symbolTables,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col+=2;errortext=yytext;return supe;};
"<=" {if(search(&symbolTables,yytext)==NULL)insert(&symbolTables,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col+=2;errortext=yytext;return infe;};

\< {if(search(&symbolTables,yytext)==NULL)insert(&symbolTables,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col++;errortext=yytext;return inf;};
\> {if(search(&symbolTables,yytext)==NULL)insert(&symbolTables,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col++;errortext=yytext;return sup;};


\+ {if(search(&symbolTables,yytext)==NULL)insert(&symbolTables,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col++;errortext=yytext;return plus;};
\- {if(search(&symbolTables,yytext)==NULL)insert(&symbolTables,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col++;errortext=yytext;return min;};
\* {if(search(&symbolTables,yytext)==NULL)insert(&symbolTables,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col++;errortext=yytext;return fo;};
\/ {if(search(&symbolTables,yytext)==NULL)insert(&symbolTables,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col++;errortext=yytext;return sur;};

\{ {if(search(&symbolTables,yytext)==NULL)insert(&symbolTables,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col++;errortext=yytext;return ag;};
\} {if(search(&symbolTables,yytext)==NULL)insert(&symbolTables,strdup(yytext),0.0," ");posupdate(col,nb_ligne);col++;errortext=yytext;return ad;};

\( {if(search(&symbolTables,yytext)==NULL)insert(&symbolTables,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col++;errortext=yytext;return pg;};
\) {if(search(&symbolTables,yytext)==NULL)insert(&symbolTables,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col++;errortext=yytext;return pd ;}; 
= {if(search(&symbolTables,yytext)==NULL)insert(&symbolTables,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col++;errortext=yytext;return aff;};
; {if(search(&symbolTables,yytext)==NULL)insert(&symbolTables,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col++;errortext=yytext;return pvg;};
, {if(search(&symbolTables,yytext)==NULL)insert(&symbolTables,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col++;errortext=yytext;return virgule;};
: {if(search(&symbolTables,yytext)==NULL)insert(&symbolTables,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col++;errortext=yytext;return dpoints;};
\[ {if(search(&symbolTables,yytext)==NULL)insert(&symbolTables,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col++;errortext=yytext;return sbg;};
\] {if(search(&symbolTables,yytext)==NULL)insert(&symbolTables,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col++;errortext=yytext;return sbd;};
\.  {if(search(&symbolTables,yytext)==NULL)insert(&symbolTables,strdup(yytext),0.0," ");
posupdate(col,nb_ligne);col++;errortext=yytext;return point;};
[ ] {posupdate(col,nb_ligne);col++;}
[\t] {posupdate(col,nb_ligne);col=col+yyleng;}
\n { ld=nb_ligne;nb_ligne++;cold=col;col=1;};
. {printf("Erreur lexical : ligne %d , col %d , Entite fautive %s \n",nb_ligne,col,yytext);erreur=1;col++;} ;
%%
void posupdate(int a, int b) {
    cold = a;
    ld =b;  
};


int entiers_to_int(const char *yytext) {
    int len = strlen(yytext);
    char temp[len - 1];
    strncpy(temp, yytext + 1, len - 2);
    temp[len - 2] = '\0';
    int result = atoi(temp);
    return result;
};

float reels_to_float(const char *yytext) {
    int len = strlen(yytext);
    char temp[len - 1];
    strncpy(temp, yytext + 1, len - 2);
    temp[len - 2] = '\0';
    float result =atof(temp);
    return result;
};


