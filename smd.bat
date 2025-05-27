flex a.l
bison -d b.y
gcc lex.yy.c b.tab.c -lfl -ly -o output.exe
output < d.txt