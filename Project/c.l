%{
#include <stdio.h>
#include <stdlib.h>

int fvar = 1;

%}

alpha [a-zA-Z]
digit [0-9]

%%
\"({alpha}|{digit}|[ ])*\" { fvar = 0;return COUTSTR; }
[ \t]		{ fvar = 0; }
[\n][ \t]*   		{ fvar = 1; yylineno = yylineno + 1;}
cout 		{ fvar = 0; return COUT; }
endl		{ fvar = 0;return ENDL;}
cin 		{ fvar = 0;return CIN;}
public|private|protected 	{ fvar = 0;return ACCESS;}
int		{ fvar = 0;return INT;}
float 		{ fvar = 0;return FLOAT;}
char 		{ fvar = 0;return CHAR;}
void 		{ fvar = 0;return VOID;}
double 		{ fvar = 0;return DOUBLE;}
fn1|fn2		{ fvar = 0;return FNAME;}
fn		{ fvar = 0;return NFNAM;}
for 		{ fvar = 0;return FOR;}
while		{ fvar = 0;return WHILE;}
if		{ fvar = 0;return IF;}
else		{ fvar = 0;return ELSE;}
printf  	{ fvar = 0;return PRINTF;}
struct 		{ fvar = 0;return STRUCT;}
class 		{ fvar = 0;return CLASS;}
^"#include ".+ ;
{digit}+       	{ fvar = 0;return NUM;}
{alpha}({alpha}|{digit})* {
				if (fvar) {
					yylval = *yytext - 'a';
					printf("fvar = 1 yylval = %d\n", yylval);
					return CUSTOM;
				}
				fvar = 0;
				yylval = *yytext - 'a';
				printf("fvar = 0 ID: %s\n", yytext);
				return ID;
			}
"<<"		{ fvar = 0;return COUTOP;}
">>" 		{ fvar = 0;return CINOP;}
"<="    	{ fvar = 0;return LE;}
">="    	{ fvar = 0;return GE;}
"=="    	{ fvar = 0;return EQ;}
"!="    	{ fvar = 0;return NE;}
">"		{ fvar = 0;return GT;}
"<"		{ fvar = 0;return LT;}
"."     	{ fvar = 0;return DOT;}
\/\/.* ;	
\/\*(.*\n)*.*\*\/ ;
.       return yytext[0];
%%
