%option noyywrap

%{
extern "C" int yylex(); 
extern "C" int yyparse();
#include <cstring>
#include <cstdlib>
#include "parser.tab.hpp"
%}
DIGIT [0-9]
%%
{DIGIT}+	{yylval.intval=atoi(yytext);
		return(num);}			
[ \t\n]+ 
.		{return(yytext[0]);}
%%
