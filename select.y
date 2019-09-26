%{
#include <stdio.h>
#include <stdlib.h>  
int yyerror(const char* s);
int yylex();  

%}

%token W SELECT DISTINCT AS FUNC FROM WHERE GROUP HAVING ORDER BY LIMIT ASC DESC NUM ID LITERAL
%token OR AND XOR NOT IS NUL ANY ALL LE GE NE IN BETWEEN LIKE REG LS RS DIV MOD EXISTS TRUE FALSE UNKNOWN
%left '!'
%left UMINUS UPLUS '~'
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



%%

    START: ST1 ';' W              {printf("INPUT ACCEPTED...\n");
                                        exit(0);};

    ST1: SELECT W attr FROM W tableList ST2 W
        | SELECT W DISTINCT W attr FROM W tableList ST2 W
        ;

    ST2: WHERE W cond ST3 W 
        | ST3 
        ;
    
    ST3: GROUP W BY W ID ST4 W
        | GROUP W BY W NUM ST4 W
        | ST4 
        ;
    
    ST4: HAVING cond ST5 
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
            | FUNC '(' expr ')' 
            | FUNC '(' DISTINCT expr ')'
            | ID 
            | FUNC '(' expr ')' AS ID
            | FUNC '(' DISTINCT expr ')' AS ID
            | ID AS ID ;
    
    tableList: tableList ',' tableList 
            | ID 
            |'(' ST1 ')' AS ID;
    
    cond: cond OR cond 
        | cond AND cond 
        | cond XOR cond
        | NOT cond
        | '!' cond 
        | '(' cond ')'
        | bool_prim IS bool_val
        | bool_prim IS NOT bool_val
        | bool_prim
        ;

    bool_val: TRUE | FALSE | UNKNOWN ;
    
    bool_prim: bool_prim IS NUL
             | bool_prim IS NOT NUL
             | bool_prim EQ pred
             | bool_prim cmp_opr pred
             | bool_prim cmp_opr ALL '(' ST1 ')'
             | bool_prim cmp_opr ANY '(' ST1 ')'
             | pred
             ;            

    cmp_opr: '=' | '<' | '>' | LE | GE | NE ;

    pred: bit_expr pred1
        | bit_expr NOT pred1
        | bit_expr
        ;    

    pred1: IN '(' ST1 ')'
         | IN '(' ncond ')'
         | BETWEEN bit_expr AND pred
         | LIKE expr
         | REG bit_expr
         ; 

    ncond: cond ',' cond | cond ;

    bit_expr: bit_expr '|' bit_expr
            | bit_expr '&' bit_expr
            | bit_expr LS bit_expr
            | bit_expr RS bit_expr
            | bit_expr '+' bit_expr
            | bit_expr '-' bit_expr
            | bit_expr '-' bit_expr
            | bit_expr DIV bit_expr
            | bit_expr MOD bit_expr
            | bit_expr '^' bit_expr
            | expr
            ;
            
    expr: FUNC '(' expr1 ')'
        | '(' ST1 ')'
        | EXISTS '(' ST1 ')'
        | expr1
        ; 

    expr1: '+' expr1 
         | '-' expr1
         | '~' expr1
         | '!' expr1
         ; 

    simple_expr: ID
               | NUM
               | LITERAL
               | TRUE
               | FALSE
               | NUL
               ;
%%
#include"lex.yy.c"
#include<ctype.h>
main()
{
    printf("Enter the query:");
    yyparse();
}        