%{
#include <cstring>
#include <cstdlib>
#include "parser.tab.h"
%}
DIGIT [0-9]
%%
{DIGIT}+	{yylval.intval=atoi(yytext);}			
[ \t\n]+ 
.		{return(yytext[0])}
%%
