/* Lex Program that checks if a letter is either a consonant or a vowel, and if a number is either prime or nonprime*/
%{
/* Definition Section */
#include <stdio.h>
#include <stdlib.h>
int vowel=0;
int cons=0;
int flag,c,j;
%}
/* Rule Section */
%%

"a"|"e"|"i"|"o"|"u"|"A"|"E"|"I"|"O"|"U" {printf("is a VOWEL"); vowel++;}
[a-zA-z] {printf("Is a Consonant"); cons++;}

[0-9]+ {c=atoi(yytext);
        if(c==2)
            {
                printf("\nPrime Number");
            }
            else if(c==0 || c==1)
            {
                printf("\nNot a Prime Number");
            }
            else
            {
                for(j=2;j<c;j++)
                {
                    if(c%j==0)
                    flag=1;
                }
            if(flag==1)
                printf("\nNot a Prime Number");
            else if(flag==0)
                printf("\nPrime Number");
            }
        }
%%
/*Driver Code */
int yywrap()
{
return 1;
}
main()
{
printf("Enter characters or numbers \n");
yylex();
}
