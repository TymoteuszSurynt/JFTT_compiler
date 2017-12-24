main: parser.y scanner.l
	bison -d parser.y
	lex scanner.l
	c++ -o compiler lex.yy.c parser.tab.c -lm
