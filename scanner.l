%option noyywrap
%option yylineno

%{
extern "C" int yylex(); 
extern "C" int yyparse();
#include <cstring>
#include <cstdlib>
#include <string>
#include "parser.tab.hpp"
%}
DIGIT	[0-9]
ID	[_a-z]+
%%
\(.+\)		{}
{DIGIT}+	{yylval.intval=atoi(yytext);return(num);}
":="		{return(ASSIGN);}
"<>"		{return(DIFF);}
"<="		{return(SOE);}
">="		{return(BOE);}
VAR		{return(VAR);}
BEGIN		{return(BEG);}	
READ		{return(READ);}
WRITE		{return(WRITE);}
END		{return(END);}
FOR		{return(FOR);}
FROM 		{return(FROM);}
TO		{return(TO);}
DOWNTO		{return(DOWNTO);}
DO		{return(DO);}
WHILE		{return(WHILE);}
IF		{return(IF);}
THEN		{return(THEN);}
ELSE		{return(ELSE);}
ENDFOR		{return(ENDFOR);}
ENDWHILE	{return(ENDWHILE);}
ENDIF		{return(ENDIF);}
{ID}		{yylval.pid=strdup(yytext); return(pidentifier);}
[ \t\n]+ 	{}
.		{return(yytext[0]);}
%%
