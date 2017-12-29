%option noyywrap

%{
extern "C" int yylex(); 
extern "C" int yyparse();
#include <cstring>
#include <cstdlib>
#include "parser.tab.hpp"
%}
DIGIT	[0-9]
ID	[a-zA-Z][a-zA-Z0-9]*
%%
{DIGIT}+	{yylval.intval=atoi(yytext);return(num);}
":="		{return(ASSIGN);}	
VAR		{return(VAR);}
BEGIN		{return (BEG);}	
READ		{return (READ);}
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

{ID}		{yylval.pid=yytext; return(pidentifier);}
[ \t\n]+ 
.		{return(yytext[0]);}
%%
