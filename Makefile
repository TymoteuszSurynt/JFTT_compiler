main: parser.ypp scanner.l
	@bison -d parser.ypp
	@lex scanner.l
	@g++ -o compiler lex.yy.c parser.tab.cpp -lm -std=c++11
clean:
	rm calc.x lex.yy.c lex.yy.h parser.tab.cpp parser.tab.cpp *.o
