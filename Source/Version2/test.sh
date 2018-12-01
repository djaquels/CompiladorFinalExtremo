bison -d gramatica.y
flex lexer.l
gcc main.c gramatica.tab.c lex.yy.c -o compilador
./compilador ejemplo.hippo

