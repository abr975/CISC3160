/* Definition Section */
%{
 #include "y.tab.h"
 #include <stdlib.h>
 void yyerror(char *);
%}
/* Rule Section */
%%
[a-z] {
 yylval = *yytext - 'a';
 return VARIABLE;
 }
[0-9]+ {
 yylval = atoi(yytext);
 return INTEGER;
 }
[-+()=*\n] { return *yytext; }
[ \t] ; /* skip whitespace */
. yyerror("Unknown character");
/* Code Section */
%%
int yywrap(void) {
 return 1;
}
