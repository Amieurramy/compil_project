flex lexical.l
bison -d syntax.y
gcc  TS.c lex.yy.c syntax.tab.c -lfl -ly -o compiler
