flex lexical.l
bison -d syntaxique.y 
gcc lex.yy.c syntaxique.tab.c -lfl -ly  -o acad.exe
acad<pgm.txt
