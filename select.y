%{
#include <stdio.h>
#include <stdlib.h>  
int yyerror(const char* s);
int yylex();  

%}

%token W SELECT DISTINCT AS FUNC FROM WHERE GROUP HAVING ORDER BY LIMIT ASC DESC NUM ID LITERAL
%token OR AND XOR NOT IS NULL ANY ALL LE GE NE IN BETWEEN LIKE REG LS RS DIV MOD EXISTS
%left '!'
%left UMINUS '~'
%left '^'
%left '*' DIV MOD
%left '+' '-'
%left LS RS
%left '&'
%left '|'
%left '=''<' '>' LE GE EQ NE IS LIKE REG IN
%left BETWEEN
%left NOT
%left AND
%left OR
%right ASSIGNMENT



%%

    START: ST1 ';' W              {printf("INPUT ACCEPTED...\n");
                                        exit(0);};

    ST1: SELECT W attr FROM W tableList ST2 W
        | SELECT W DISTINCT W attr FROM W tableList ST2 W
        ;

    ST2: WHERE W COND ST3 W 
        | ST3 
        ;
    
    ST3: GROUP W BY W ID ST4 W
        | GROUP W BY W NUM ST4 W
        | ST4 
        ;
    
    ST4: HAVING COND ST5 
        | ST5 
        ;

    ST5: ORDER BY ID ST6 
        | ORDER BY NUM ST6
        | 
        ;
    
    ST6: DESC 
        | ASC 
        | 
        ;       
    
    attr: attrList 
        | '*' 
        | COUNT '(' '*' ')' 
        | COUNT '(' '*' ')' AS ID;

    attrList: attrList ',' attrList 
            | FUNC '(' ID ')' 
            | FUNC '(' DISTINCT ID ')'
            | ID 
            | FUNC '(' ID ')' AS ID
            | FUNC '(' DISTINCT ID ')' AS ID
            | ID AS ID ;
    
    tableList: tableList ',' tableList 
            | ID 
            |'(' ST1 ')' AS ID;
    
    COND: COND OR COND 
        | COND AND COND 
        | COND XOR COND 
              
        | '(' COND ')' | ID OPR ANY '(' ST1 ')'
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