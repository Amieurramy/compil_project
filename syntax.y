
%{
#include <stdio.h>
#include "TS.h"
#include "quad.h"
#include <string.h>
extern int ld;
extern int cold;
extern int erreur;
extern char *errortext;
struct etype pile[20];
int pileifbz[20];
int nifbz=0;
int pileifbr[20];
int nifbr=0;
int n=0;
int temp=1;
char tempvar[11];
struct hashMap symbolTable;
extern struct hashMap symbolTablemc;
extern struct hashMap symbolTables;
struct node* test;
char* int_type="INTEGER";
char* float_type="FLOAT";
char* const_type="CONST";
char* array_of_int="ARRAY OF INTEGER";
char* array_of_float="ARRAY OF FLOAT";
char* current_type;
extern int yylineno;
char tabtype[20];
char bound[20];
int qc=0;
int wdebcond[20];
int nwdebcon=0;
int wend[20];
int nwend=0;

struct foridf forsauv[20];
int nforsauv=0;
%}


%union{
int entier;
 struct {
	int ligne;
	char *text; 
}str;
float reel;
}



%start S
%token pvg aff <str>idf prog var beg end <entier>entier <reel>reel intid floid constid  <str>ch ag ad pg pd virgule dpoints <entier>entiers <reel>reels sbg sbd and or equal nequal supe sup infe inf not plus min fo sur iff elsee forr whilee read write point


%left or
%left and
%left sup supe equal nequal infe inf
%left plus min
%left fo sur
%nonassoc not
%nonassoc pg pd

%%
S: 
      prog idf var ag DECLARATIONS ad beg INSTRUCTIONS end point{if(erreur==0)printf("Syntaxe correcte \n");YYACCEPT;};
;    
DECLARATIONS: 
    intid MULTIDEFINT pvg  DECLARATIONS
    | floid MULTIDEFFLOAT pvg   DECLARATIONS
    | constid choixconst DECLARATIONS
    | 
;
choixconst:
    idf aff entier pvg  {if(search(&symbolTable,($1).text)!=NULL)printf("Erreur semantique : Double declaration, ligne %-2d , Entite fautive %s \n",yylineno,($1).text);
    else {insert(&symbolTable,($1).text,(float)$3,const_type); sprintf(tempvar,"%d",$3);    quadr("=",tempvar," ",($1).text);}}
    | idf aff reel pvg  {if(search(&symbolTable,($1).text)!=NULL)printf("Erreur semantique : Double declaration, ligne %-2d , Entite fautive %s \n",yylineno,($1).text);
    else{ insert(&symbolTable,($1).text,(float)$3,const_type);sprintf(tempvar,"%f",$3);    quadr("=",tempvar," ",($1).text);}}
    | idf aff entiers pvg  {if(search(&symbolTable,($1).text)!=NULL)printf("Erreur semantique : Double declaration, ligne %-2d , Entite fautive %s \n",yylineno,($1).text);
    else{insert(&symbolTable,($1).text,(float)$3,const_type);sprintf(tempvar,"%d",$3);    quadr("=",tempvar," ",($1).text);}}
    | idf aff reels pvg  {if(search(&symbolTable,($1).text)!=NULL)printf("Erreur semantique : Double declaration, ligne %-2d , Entite fautive %s \n",yylineno,($1).text);
    else{ insert(&symbolTable,($1).text,(float)$3,const_type);sprintf(tempvar,"%f",$3);    quadr("=",tempvar," ",($1).text);}}
;


MULTIDEFINT:
    
    idf {if(search(&symbolTable,($1).text)!=NULL)printf("Erreur semantique : Double declaration, ligne %-2d , Entite fautive %s\n",ld,($1).text);
    else insert(&symbolTable,($1).text,0,int_type);} 
    | idf sbg entier sbd {if(search(&symbolTable,($1).text)!=NULL)printf("Erreur semantique : Double declaration, ligne %-2d , Entite fautive %s \n",yylineno,($1).text);
    else{if($3==0){printf("Erreur semantique : Declaration d'un Tableau avec une taille Nulle , ligne %-2d , Entite fautive %s\n",ld,($1).text);}else{ sprintf(tabtype,"%s[%-2d]",int_type,$3); insert(&symbolTable,($1).text,$3,tabtype);itoa($3-1, bound , 10);quadr("BOUNDS","0",bound," ");quadr("ADEC"," ",($1).text," ");}}}
    | MULTIDEFINT virgule idf {if(search(&symbolTable,($3).text)!=NULL)printf("Erreur semantique : Double declaration, ligne %-2d , Entite fautive %s \n",ld,($3).text);
    else insert(&symbolTable,($3).text,0,int_type);} 
    | MULTIDEFINT virgule idf sbg entier sbd  {if(search(&symbolTable,($3).text)!=NULL)printf("Erreur semantique : Double declaration, ligne %-2d , Entite fautive %s \n",yylineno,($3).text);
    else{ if($5==0){printf("Erreur semantique : Declaration d'un Tableau avec une taille Nulle , ligne %-2d , Entite fautive %s\n",ld,($3).text);}else{sprintf(tabtype,"%s[%-2d]",int_type,$5); insert(&symbolTable,($3).text,$5,tabtype);itoa($5-1, bound , 10);quadr("BOUNDS","0",bound," ");quadr("ADEC"," ",($3).text," ");}}}
;   

MULTIDEFFLOAT:
    idf {if(search(&symbolTable,($1).text)!=NULL)printf("Erreur semantique : Double declaration, ligne %-2d , Entite fautive %s\n",ld,($1).text);
    else insert(&symbolTable,($1).text,0,float_type);}
    | idf sbg entier sbd {if(search(&symbolTable,($1).text)!=NULL)printf("Erreur semantique : Double declaration, ligne %-2d , Entite fautive %s \n",yylineno,($1).text);
    else{if($3==0){printf("Erreur semantique : Declaration d'un Tableau avec une taille Nulle , ligne %-2d , Entite fautive %s\n",ld,($1).text);}else{ sprintf(tabtype,"%s[%-2d]",float_type,$3); insert(&symbolTable,($1).text,$3,tabtype);itoa($3-1, bound , 10);quadr("BOUNDS","0",bound," ");quadr("ADEC"," ",($1).text," ");}}}
    | MULTIDEFFLOAT virgule idf{if(search(&symbolTable,($3).text)!=NULL)printf("Erreur semantique : Double declaration, ligne %-2d , Entite fautive %s \n",ld,($3).text);
    else insert(&symbolTable,($3).text,0,float_type);}
    | MULTIDEFFLOAT virgule idf sbg entier sbd{if(search(&symbolTable,($3).text)!=NULL)printf("Erreur semantique : Double declaration, ligne %-2d , Entite fautive %s \n",yylineno,($3).text);
    else{if($5==0){printf("Erreur semantique : Declaration d'un Tableau avec une taille Nulle , ligne %-2d , Entite fautive %s\n",ld,($3).text);}else{ sprintf(tabtype,"%s[%-2d]",float_type,$5); insert(&symbolTable,($3).text,$5,tabtype);itoa($5-1, bound , 10);quadr("BOUNDS","0",bound," ");quadr("ADEC"," ",($3).text," ");}}};
;

INSTRUCTIONS:
    AFFECTATION INSTRUCTIONS
    | ifcondition  INSTRUCTIONS {n=0;}
    | forloop  INSTRUCTIONS   {n=0;}
    | whileloop  INSTRUCTIONS {n=0;}
    | print  INSTRUCTIONS 
    | input  INSTRUCTIONS 
    |
;

AFFECTATION:
    idf aff EXPRESSION pvg{
    quadr("=",pile[n-1].e," ",($1).text);
    
    test = search(&symbolTable, ($1).text);
if (test == NULL) {
    printf("Erreur semantique : utilisation d'une variable non declaree, ligne %-2d , Entite fautive %s\n", ($1).ligne, ($1).text);
} else if (test->type != NULL && strcmp(test->type, const_type) == 0) {
    printf("Erreur semantique : la valeur d'une constante ne peut etre modifiee, ligne %-2d , Entite fautive %s\n", ($1).ligne, ($1).text);
}else{
    if(strcmp(test->type,int_type)==0){
        if(pile[n-1].type==1){
            printf("Erreur semantique : affectation d'un FLOAT a un INTEGER, ligne %-2d , Entite fautive %s\n", ($1).ligne, ($1).text);
        }}
    if(strlen(test->type)>=8)
   printf("Erreur semantique : utilisation d'un tableau sans specifier l'index , ligne %-2d , Entite fautive %s\n", ($1).ligne, ($1).text); 

}n=0;}
    | idf sbg idf sbd aff EXPRESSION pvg {test = search(&symbolTable, ($1).text);
if (test == NULL) {
    printf("Erreur semantique : utilisation d'une variable non declaree, ligne %-2d , Entite fautive %s\n", ($1).ligne, ($1).text);}
else{if(strlen(test->type)<8)
   printf("Erreur semantique : utilisation d'une variable simple ou constante avec un INDEX , ligne %-2d , Entite fautive %s\n", ($1).ligne, ($1).text); 
else{ if(strncmp(test->type,int_type,7)==0 && pile[n-1].type==1)
printf("Erreur semantique : affectation d'un FLOAT a un INTEGER, ligne %-2d , Entite fautive %s\n", ($1).ligne, ($1).text);
    struct node *test2;
test2=search(&symbolTable,($3).text);
if(test2==NULL) {
    printf("Erreur semantique : utilisation d'une variable non declaree comme INDEX, ligne %-2d , Entite fautive %s\n", ($3).ligne, ($3).text);
}else if(strcmp(test2->type,int_type)!=0){
    printf("Erreur semantique : l'index d'un tableau doit etre de type INTEGER, ligne %-2d , Entite fautive %s\n", ($1).ligne, ($3).text);
    } 
}}sprintf(tempvar,"%s[%s]",($1).text,($3).text);quadr("=",pile[n-1].e," ",tempvar);
    n=0;}
    | idf sbg entier sbd aff EXPRESSION pvg {sprintf(tempvar,"%s[%d]",($1).text,$3);
    test = search(&symbolTable, ($1).text);
if (test == NULL) {
    printf("Erreur semantique : utilisation d'une variable non declaree, ligne %-2d , Entite fautive %s\n", ($1).ligne, ($1).text);
}else{if(strlen(test->type)<8)
    printf("Erreur semantique : utilisation d'une variable simple ou constante avec un INDEX , ligne %-2d , Entite fautive %s\n", ($1).ligne, ($1).text);
    else{
        if(strncmp(test->type,int_type,7)==0 && pile[n-1].type==1)
printf("Erreur semantique : affectation d'un FLOAT a un INTEGER, ligne %-2d , Entite fautive %s\n", ($1).ligne, ($1).text);
        if($3>=(test->value)){
        printf("Erreur semantique : index hors limite , ligne %-2d , Entite fautive %d\n", ($1).ligne, $3);
    }
    }
}
quadr("=",pile[n-1].e," ",tempvar);
    n=0;}
;

ifcondition:
    ifinstructpart elsecondition{sprintf(tempvar,"%d",qc);updateQuad(pileifbr[nifbr-1],1,tempvar);nifbr--;}
;

ifcondpart:
    iff pg EXPRESSION pd  { pileifbz[nifbz]=qc; nifbz++; quadr("BZ"," ",quad[qc-1].res," ");
    }
;
ifinstructpart:
    ifcondpart ag INSTRUCTIONS ad {quadr("BR"," "," "," "); pileifbr[nifbr]=qc-1;nifbr++;sprintf(tempvar,"%d",qc);updateQuad(pileifbz[nifbz-1],1,tempvar);nifbz--;}
            
;

elsecondition:
    elsee ag INSTRUCTIONS ad
    |
;

forloop:
    forcond ag INSTRUCTIONS ad{sprintf(tempvar,"%d",forsauv[nforsauv-1].step);
        quadr("+",forsauv[nforsauv-1].idf,tempvar,forsauv[nforsauv-1].idf);nforsauv--;
      sprintf(tempvar,"%d",wdebcond[nwdebcon-1]);nwdebcon--;quadr("BR",tempvar," "," ");sprintf(tempvar,"%d",qc);
    updateQuad(wend[nwend-1],1,tempvar);nwend--;  }
;

forcond:
    forloopdebut idf pd{ test = search(&symbolTable, ($2).text);
    if (test == NULL) {
    printf("Erreur semantique : utilisation d'une variable ou constante non declaree, ligne %-2d , Entite fautive %s\n",($2).ligne, ($2).text);
    }else{if(strlen(test->type)>=8){
    printf("Erreur semantique : utilisation d'un tableau sans specifier l'index , ligne %-2d , Entite fautive %s\n", ($2).ligne, ($2).text);
    }}
    quadr("BGE"," ",forsauv[nforsauv-1].idf,($2).text);
    wdebcond[nwdebcon]=qc-1;nwdebcon++;
    wend[nwend]=qc-1; nwend++;
    }
    | forloopdebut entier pd{sprintf(tempvar,"%d",$2);
    quadr("BGE"," ",forsauv[nforsauv-1].idf,tempvar);
    wdebcond[nwdebcon]=qc-1;nwdebcon++;
    wend[nwend]=qc-1;nwend++; 
    } 

forloopdebut:
    forr pg idf dpoints entier dpoints entier dpoints{test = search(&symbolTable, ($3).text);
    if (test == NULL) {
    printf("Erreur semantique : utilisation d'une variable non declaree, ligne %-2d , Entite fautive %s\n",($3).ligne, ($3).text);
    }else if (test->type != NULL && strcmp(test->type, const_type) == 0) {
    printf("Erreur semantique : la valeur d'une constante ne peut etre modifiee, ligne %-2d , Entite fautive %s\n", ($3).ligne, ($3).text);
    }else{if(strlen(test->type)>=8)
   printf("Erreur semantique : utilisation d'un tableau sans specifier l'index , ligne %-2d , Entite fautive %s\n", ($3).ligne, ($3).text); 
}  sprintf(tempvar,"%d",$5);quadr("=",tempvar," ",($3).text);
forsauv[nforsauv].idf=($3).text;forsauv[nforsauv].step=$7;nforsauv++;}
    
    | forr pg idf dpoints entiers dpoints entier dpoints {test = search(&symbolTable, ($3).text);
    if (test == NULL) {
    printf("Erreur semantique : utilisation d'une variable non declaree, ligne %-2d , Entite fautive %s\n",($3).ligne, ($3).text);
    }else if (test->type != NULL && strcmp(test->type, const_type) == 0) {
    printf("Erreur semantique : la valeur d'une constante ne peut etre modifiee, ligne %-2d , Entite fautive %s\n", ($3).ligne, ($3).text);
    }else{if(strlen(test->type)>=8)
   printf("Erreur semantique : utilisation d'un tableau sans specifier l'index , ligne %-2d , Entite fautive %s\n", ($3).ligne, ($3).text); 
}  sprintf(tempvar,"%d",$5);quadr("=",tempvar," ",($3).text);
forsauv[nforsauv].idf=($3).text;forsauv[nforsauv].step=$7;nforsauv++;
}




whileloop:
    whilecond ag INSTRUCTIONS ad{sprintf(tempvar,"%d",wdebcond[nwdebcon-1]);nwdebcon--;quadr("BR",tempvar," "," ");sprintf(tempvar,"%d",qc);
    updateQuad(wend[nwend-1],1,tempvar);nwend--;}
;
whiledebut:
    whilee{wdebcond[nwdebcon]=qc;nwdebcon++;}
;
whilecond:
    whiledebut pg EXPRESSION pd {wend[nwend]=qc; nwend++;quadr("BZ"," ",quad[qc-1].res," ");}
    
;

 


EXPRESSION:
    idf {test = search(&symbolTable, ($1).text);
if (test == NULL) {
    printf("Erreur semantique : utilisation d'une variable ou constante non declaree, ligne %-2d, Entite fautive %s\n",($1).ligne, ($1).text);
}else{sprintf(tempvar,"%s",($1).text);sprintf(pile[n].e,"%s",tempvar);
    if(strlen(test->type)>=8)
   printf("Erreur semantique : utilisation d'un tableau sans specifier l'index , ligne %-2d , Entite fautive %s\n", ($1).ligne, ($1).text); 
else{if(strcmp(test->type,int_type)==0){
    pile[n].type=0;}else pile[n].type=1;
}    
n++;
}
}
    |idf sbg idf sbd{test = search(&symbolTable, ($1).text);
if (test == NULL) {
    printf("Erreur semantique : utilisation d'une variable non declaree, ligne %-2d , Entite fautive %s\n", ($1).ligne, ($1).text);}
else{if(strlen(test->type)<8){
    printf("Erreur semantique : utilisation d'une variable simple ou constante avec un INDEX , ligne %-2d , Entite fautive %s\n", ($1).ligne, ($1).text); 
    if(strncmp(test->type,int_type,7)==0){pile[n].type=0;}else pile[n].type=1;
}
   
else{struct node *test2;
test2=search(&symbolTable,($3).text);
if(test2==NULL) {
    printf("Erreur semantique : utilisation d'une variable non declaree comme INDEX, ligne %-2d , Entite fautive %s\n", ($1).ligne, ($1).text);
}else if(strcmp(test2->type,int_type)!=0){
    printf("Erreur semantique : l'index d'un tableau doit etre de type INTEGER, ligne %-2d , Entite fautive %s\n", ($1).ligne, ($3).text);
    } 
}}
        sprintf(tempvar,"%s[%s]",($1).text,($3).text);sprintf(pile[n].e,"%s",tempvar);n++;
    }
    |idf sbg entier sbd{sprintf(tempvar,"%s[%d]",($1).text,$3);
    test = search(&symbolTable, ($1).text);
if (test == NULL) {
    printf("Erreur semantique : utilisation d'une variable non declaree, ligne %-2d , Entite fautive %s\n", ($1).ligne, ($1).text);
}else{if(strlen(test->type)<8){
    printf("Erreur semantique : utilisation d'une variable simple ou constante avec un INDEX , ligne %-2d , Entite fautive %s\n", ($1).ligne, ($1).text);
    if(strncmp(test->type,int_type,7)==0){pile[n].type=0;}else pile[n].type=1;
    }else{if($3>=(test->value)){
        printf("Erreur semantique : index hors limite , ligne %-2d , Entite fautive %d\n", ($1).ligne, $3);
    }
    }
}
        sprintf(tempvar,"%s[%d]",($1).text,$3);sprintf(pile[n].e,"%s",tempvar);n++;
    }
    |entier {pile[n].type=0;
         sprintf(tempvar,"%-10d",$1);sprintf(pile[n].e,"%s",tempvar);n++;}
    |reels {pile[n].type=1; sprintf(tempvar,"%-10.5f",$1);sprintf(pile[n].e,"%s",tempvar);n++;}
    |entiers {pile[n].type=0; sprintf(tempvar,"%-10d",$1);sprintf(pile[n].e,"%s",tempvar);n++;}
    |reel {pile[n].type=1; sprintf(tempvar,"%-10.5f",$1);sprintf(pile[n].e,"%s",tempvar);n++;}
    |not EXPRESSION {pile[n-1].type=0;
    sprintf(tempvar,"T%-2d",temp);temp++;quadr("!",pile[n-1].e," ",tempvar);
    sprintf(pile[n-1].e,"%s",tempvar);}
    |EXPRESSION or EXPRESSION {pile[n-2].type=0;sprintf(tempvar,"T%-2d",temp);temp++;quadr("||",pile[n-2].e,pile[n-1].e,tempvar);
    sprintf(pile[n-2].e,"%s",tempvar); n--;}
    |EXPRESSION and EXPRESSION {pile[n-2].type=0;sprintf(tempvar,"T%-2d",temp);temp++;quadr("&&",pile[n-2].e,pile[n-1].e,tempvar);
    sprintf(pile[n-2].e,"%s",tempvar);  n--;}
    |EXPRESSION sup EXPRESSION {pile[n-2].type=0;sprintf(tempvar,"T%-2d",temp);temp++;quadr(">",pile[n-2].e,pile[n-1].e,tempvar);
    sprintf(pile[n-2].e,"%s",tempvar);  n--;}
    |EXPRESSION supe EXPRESSION {pile[n-2].type=0;sprintf(tempvar,"T%-2d",temp);temp++;quadr(">=",pile[n-2].e,pile[n-1].e,tempvar);
    sprintf(pile[n-2].e,"%s",tempvar);  n--;}
    |EXPRESSION equal EXPRESSION {pile[n-2].type=0;sprintf(tempvar,"T%-2d",temp);temp++;quadr("==",pile[n-2].e,pile[n-1].e,tempvar);
    sprintf(pile[n-2].e,"%s",tempvar);  n--;}
    |EXPRESSION nequal EXPRESSION {pile[n-2].type=0;sprintf(tempvar,"T%-2d",temp);temp++;quadr("!=",pile[n-2].e,pile[n-1].e,tempvar);
    sprintf(pile[n-2].e,"%s",tempvar); n--;}
    |EXPRESSION infe EXPRESSION {pile[n-2].type=0;sprintf(tempvar,"T%-2d",temp);temp++;quadr("<=",pile[n-2].e,pile[n-1].e,tempvar);
    sprintf(pile[n-2].e,"%s",tempvar);  n--;}
    |EXPRESSION inf EXPRESSION {pile[n-2].type=0;sprintf(tempvar,"T%-2d",temp);temp++;quadr("<",pile[n-2].e,pile[n-1].e,tempvar);
    sprintf(pile[n-2].e,"%s",tempvar);  n--;}
    |EXPRESSION plus EXPRESSION{pile[n-2].type=pile[n-2].type||pile[n-1].type;sprintf(tempvar,"T%-2d",temp);temp++;quadr("+",pile[n-2].e,pile[n-1].e,tempvar);
    sprintf(pile[n-2].e,"%s",tempvar);  n--;}
    |EXPRESSION min EXPRESSION {pile[n-2].type=pile[n-2].type||pile[n-1].type;sprintf(tempvar,"T%-2d",temp);temp++;quadr("-",pile[n-2].e,pile[n-1].e,tempvar);
    sprintf(pile[n-2].e,"%s",tempvar);  n--;}
    |EXPRESSION sur EXPRESSION {pile[n-2].type=pile[n-2].type||pile[n-1].type;
    if(strcmp(pile[n-1].e,"0         ")==0){
        printf("Erreur semantique : Division par zero, ligne %-2d\n",yylineno);}
    sprintf(tempvar,"T%-2d",temp);temp++;quadr("/",pile[n-2].e,pile[n-1].e,tempvar);
    sprintf(pile[n-2].e,"%s",tempvar);  n--;}
    |EXPRESSION fo EXPRESSION {pile[n-2].type=pile[n-2].type||pile[n-1].type;sprintf(tempvar,"T%-2d",temp);temp++;quadr("*",pile[n-2].e,pile[n-1].e,tempvar);
    sprintf(pile[n-2].e,"%s",tempvar);  n--;}
    |pg EXPRESSION pd {}
;

print:
    write pg ch pd pvg
    |write pg idf pd pvg{test = search(&symbolTable, ($3).text);
if (test == NULL) {
    printf("Erreur semantique : utilisation d'une variable ou constante non declaree, ligne %-2d , Entite fautive %s\n", ($3).ligne, ($3).text);
}else{
    if(strlen(test->type)>=8)
   printf("Erreur semantique : utilisation d'un tableau sans specifier l'index , ligne %-2d , Entite fautive %s\n", ($3).ligne, ($3).text); 
}}
    | write pg idf sbg idf sbd pd pvg{test = search(&symbolTable, ($3).text);
if (test == NULL) {
    printf("Erreur semantique : utilisation d'une variable non declaree, ligne %-2d , Entite fautive %s\n", ($3).ligne, ($3).text);}
else{if(strlen(test->type)<8)
   printf("Erreur semantique : utilisation d'une variable simple ou constante avec un INDEX , ligne %-2d , Entite fautive %s\n", ($3).ligne, ($3).text); 
else{ 
    struct node *test2;
test2=search(&symbolTable,($5).text);
if(test2==NULL) {
    printf("Erreur semantique : utilisation d'une variable non declaree comme INDEX, ligne %-2d , Entite fautive %s\n", ($5).ligne, ($5).text);
}else if(strcmp(test2->type,int_type)!=0){
    printf("Erreur semantique : l'index d'un tableau doit etre de type INTEGER, ligne %-2d , Entite fautive %s\n", ($5).ligne, ($5).text);
    } 
}}}
    | write pg idf sbg entier sbd pd pvg {test = search(&symbolTable, ($3).text);
if (test == NULL) {
    printf("Erreur semantique : utilisation d'une variable non declaree, ligne %-2d , Entite fautive %s\n", ($3).ligne, ($3).text);
}else{if(strlen(test->type)<8)
    printf("Erreur semantique : utilisation d'une variable simple ou constante avec un INDEX , ligne %-2d , Entite fautive %s\n", ($3).ligne, ($3).text);
    else{
        if($5>=(test->value)){
        printf("Erreur semantique : index hors limite , ligne %-2d , Entite fautive %d\n", ($3).ligne, $5);
    }
    }
}}
;

input:
    read pg idf pd pvg{test = search(&symbolTable, ($3).text);
if (test == NULL) 
    printf("Erreur semantique : utilisation d'une variable ou constante non declaree, ligne %-2d , Entite fautive %s\n", ($3).ligne, ($3).text);
    else if (test->type != NULL && strcmp(test->type, const_type) == 0) {
    printf("Erreur semantique : la valeur d'une constante ne peut etre modifiee, ligne %-2d , Entite fautive %s\n", ($3).ligne, ($3).text);
}else{
    if(strlen(test->type)>=8)
   printf("Erreur semantique : utilisation d'un tableau sans specifier l'index , ligne %-2d , Entite fautive %s\n", ($3).ligne, ($3).text); 
}}

    | read pg idf sbg idf sbd pd pvg{test = search(&symbolTable, ($3).text);
if (test == NULL) {
    printf("Erreur semantique : utilisation d'une variable non declaree, ligne %-2d , Entite fautive %s\n", ($3).ligne, ($3).text);}
else{if(strlen(test->type)<8)
   printf("Erreur semantique : utilisation d'une variable simple ou constante avec un INDEX , ligne %-2d , Entite fautive %s\n", ($3).ligne, ($3).text); 
else{ 
    struct node *test2;
test2=search(&symbolTable,($5).text);
if(test2==NULL) {
    printf("Erreur semantique : utilisation d'une variable non declaree comme INDEX, ligne %-2d , Entite fautive %s\n", ($5).ligne, ($5).text);
}else if(strcmp(test2->type,int_type)!=0){
    printf("Erreur semantique : l'index d'un tableau doit etre de type INTEGER, ligne %-2d , Entite fautive %s\n", ($5).ligne, ($5).text);
    } 
}}}
    | read pg idf sbg entier sbd pd pvg {test = search(&symbolTable, ($3).text);
if (test == NULL) {
    printf("Erreur semantique : utilisation d'une variable non declaree, ligne %-2d , Entite fautive %s\n", ($3).ligne, ($3).text);
}else{if(strlen(test->type)<8)
    printf("Erreur semantique : utilisation d'une variable simple ou constante avec un INDEX , ligne %-2d , Entite fautive %s\n", ($3).ligne, ($3).text);
    else{
        if($5>=(test->value)){
        printf("Erreur semantique : index hors limite , ligne %-2d , Entite fautive %d\n", ($3).ligne, $5);
    }
    }
}}
;        
%%
main ()
{

initializeHashMap(&symbolTable);
initializeHashMap(&symbolTablemc);
initializeHashMap(&symbolTables);
yyparse();
displaySymbolTable(&symbolTable,"IDF");
displaySymbolTable(&symbolTablemc,"MOT CLE");
displaySymbolTable(&symbolTables,"SEPARATEUR");
afficher_qdr();
}
yywrap()
{}
int yyerror(char *msg)
{   if (erreur==0)
    printf("Erreur syntaxique : ligne %-2d , col %-2d , Entite fautive %s\n",ld,cold,errortext);
    return 1;
}
