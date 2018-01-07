main: parser.ypp scanner.l
	@bison -d parser.ypp
	@lex scanner.l
	@g++ -o compiler lex.yy.c parser.tab.cpp -lm -std=c++11 -Wno-write-strings
clean:
	rm parser.tab.cpp parser.tab.hpp lex.yy.c *.out compiler
