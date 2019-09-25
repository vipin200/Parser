%{
#include <stdio.h>
#include <stdlib.h>

%}
%token ID NUM SELECT NEWLINE DISTINCT FROM WHERE LE GE EQ NE OR AND LIKE GROUP HAVING ORDER ASC DESC IN
%right '='
%left AND OR
%left '<' '>' LE GE EQ NE

%%

    START  : ST1';'NEWLINE {printf("INPUT ACCEPTED...\n");exit(0);};

    ST1    : SELECT ATTR FROM tableList ST2
        | SELECT DISTINCT ATTR FROM tableList ST2
        ;
    ST2    : WHERE COND ST3 | ST3 ;
    
    ST3    : GROUP attributeList ST4 | ST4 ;
    
    ST4    : HAVING COND ST5 | ST5 ;

    ST5    : ORDER attributeList ST6 | ;
    
    ST6 : DESC | ASC | ;       
    
    ATTR  : attributeList | '*' | COUNT '(' '*' ')' |COUNT '(' '*' ')' AS ID    ;

    attributeList : attributeList ',' attributeList | FUNC '(' ID ')' | ID |FUNC '(' ID ')' AS ID|ID AS ID ;
    
    tableList    : tableList ',' tableList | ID |'(' ST1 ')' AS ID;
    
    COND : COND OR COND | COND AND COND | '(' COND ')' | ID OPR ANY '(' ST1 ')'
        |ID OPR ALL '(' ST1 ')' | NOT COND | COND OPR COND | ID |NUM |COND BETWEEN COND AND COND
        |EXISTS '(' ST1 ')' ;

    OPR : '=' | '<' | '>' | LE | GE | EQ | NE ;
%%
#include"lex.yy.c"
#include<ctype.h>
main()
{
    printf("Enter the query:");
    yyparse();
}        