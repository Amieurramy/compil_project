Pour la compilation :

flex lexical.l
bison -d syntax.y
gcc  TS.c lex.yy.c syntax.tab.c -lfl -ly -o compiler

compiler.exe<test.txt

Imporatnt:
1- Utilisation d'une table de hachage pour la table des symboles.
2- Implémentation différente de yylval pour permettre une détection précise de l'emplacement des erreurs sémantiques.
3- Les parties lexicale et syntaxique sont complètes, il manque quelques implémentations pour la partie sémantique, qui sera complétée lors de la deuxième présentation.