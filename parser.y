%{
#include <cstdlib>
#include <cstdio>
#include <cstring>
int err;

%}
%start program

%token pidentifier
%token num 
%token FOR FROM TO DOWNTO DO WHILE IF THEN ELSE ENDFOR BEGIN ENDWHILE ENDIF VAR END
%token READ WRITE
%token ASSIGN



%left '+' '-'
%left '*' '/' '%'

%%
program		: VAR vdeclarations BEGIN commands END				{}
		;

vdeclarations	: vdeclarations pidentifier					{}
		| vdeclarations pidentifier [num]				{}
		|								{}	
		;

commands	: commands command						{}
		| command							{}
		;

command		: identifier ASSIGN expression
		| IF condition THEN commands ELSE commands ENDIF
		| IF condition THEN commands ENDIF
		| WHILE condition DO commands ENDWHILE
		| FOR pidentifier FROM value TO value DO commands ENDFOR	{}
		| FOR pidentifier FROM value DOWNTO value DO commands ENDFOR	{}
		| READ identifier
		| WRITE value
		;

expression	: value
		| value '+' value						{}
		| value '-' value						{}
		| value '*' value						{}
		| value '/' value						{}
		| value '%' value						{}
		;

condition	: value '=' value						{}
		| value "<>" value						{}
		| value '<' value						{}
		| value '>' value						{}
		| value "<=" value						{}
		| value ">=" value						{}
		;

value		: num
		| identifier
		;

identifier	: pidentifier
		| pidentifier '[' pidentifier ']'
		| pidentifier '['num']'
		;
%%
