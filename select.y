%{
#include <stdio.h>
#include <stdlib.h>  
int yyerror();
int yylex();  

%}

%token SELECT DISTINCT AS FUNC COUNT FROM WHERE GROUP HAVING ORDER BY LIMIT ASC DESC ID LITERAL
%token OR AND XOR NOT IS NUL ANY ALL CMP IN BETWEEN LIKE REG LS RS DIV MOD EXISTS BOOL INT FLOAT


%left OR
%left XOR
%left AND
%nonassoc IN IS LIKE REG
%left NOT
%left BETWEEN
%left CMP 
%left '|'
%left '&'
%left LS RS
%left '+' '-'
%left '*' DIV MOD
%left '^'
%nonassoc UMINUS
%left ',' '(' ')'




%%

    start: st1 ';'              {  
                                    printf("INPUT ACCEPTED...\n");
                                    exit(1);
                                }
        ;

    st1: SELECT attr FROM tableList st2
        | SELECT DISTINCT attr FROM tableList st2
        |SELECT ALL attr FROM tableList st2
        ;        

    st2: WHERE expr st3 
        | st3 
        ;
    
    st3: GROUP  BY st4 st5
        | st5 
        ;

    st4: st4 ',' st4 | expr st7  ; 

    st5: HAVING expr1 st6 
        | st6 
        ;

    st6: ORDER  BY st8 st9
        | st9
        ;

    st7: DESC 
        | ASC  
        | 
        ;  

    st8: st8 ',' st8 | expr1 st7 ;

    st9: LIMIT INT
        | LIMIT INT ',' INT
        |
        ;
    
    attr: attrList 
        | '*'  
        ;

    attrList:attrList ','  attrList  
            | expr1 alias  
            ;

    alias:AS ID | ;
    
    tableList:tableList ','  tableList
            | ID  
            |'(' st1 ')'  alias ;
    
    expr: expr OR expr
        | expr XOR expr
        | expr AND expr
        | NOT expr
        | '(' expr ')'
        | bool_prim IS BOOL
        | bool_prim IS NOT BOOL
        | bool_prim
        ;

    bool_prim:  bool_prim IS NUL
        | bool_prim IS NOT NUL
        | bool_prim CMP pred
        | bool_prim CMP ALL '(' st1 ')'
        | bool_prim CMP ANY '(' st1 ')'
        | pred
        ;

    pred: bit_expr  pred1
        | bit_expr  NOT  pred1
        | bit_expr 
        ;    

    pred1: IN '(' st1 ')'
        | IN '(' expr_lst ')'
        | BETWEEN  bit_expr  AND  pred      %prec BETWEEN 
        | LIKE  simple_expr
        | REG  bit_expr
        ; 

    expr_lst: expr ',' expr_lst | expr ;

    bit_expr: bit_expr '|' bit_expr
            | bit_expr '&' bit_expr
            | bit_expr LS bit_expr
            | bit_expr RS bit_expr
            | bit_expr '+' bit_expr
            | bit_expr '-' bit_expr
            | bit_expr '*' bit_expr
            | bit_expr DIV bit_expr
            | bit_expr MOD bit_expr
            | bit_expr '^' bit_expr
            | simple_expr
            ;

    simple_expr: '+' simple_expr        %prec UMINUS
                | '-' simple_expr       %prec UMINUS
                | '~' simple_expr       %prec UMINUS
                | '!' simple_expr       %prec UMINUS
                | '(' st1 ')'
                | EXISTS '(' st1 ')'
                | val
                ;

    val: FLOAT
        | NUL
        | LITERAL
        | BOOL
        | ID
        | INT
        ;


        

    expr1: expr1 OR expr1
        | expr1 XOR expr1
        | expr1 AND expr1
        | NOT expr1
        | '(' expr1 ')'
        | bool_prim1 IS BOOL
        | bool_prim1 IS NOT BOOL
        | bool_prim1
        ;

    bool_prim1:  bool_prim1 IS NUL
        | bool_prim1 IS NOT NUL
        | bool_prim1 CMP pred2
        | bool_prim1 CMP ALL '(' st1 ')'
        | bool_prim1 CMP ANY '(' st1 ')'
        | pred2
        ;

    pred2: bit_expr1  pred3
        | bit_expr1  NOT  pred3
        | bit_expr1 
        ;    

    pred3: IN '(' st1 ')'
        | IN '(' expr1_lst ')'
        | BETWEEN  bit_expr1  AND  pred2      %prec BETWEEN 
        | LIKE  simple_expr1
        | REG  bit_expr1
        ; 

    expr1_lst: expr1 ',' expr1_lst | expr1 ;

    bit_expr1: bit_expr1 '|' bit_expr1
            | bit_expr1 '&' bit_expr1
            | bit_expr1 LS bit_expr1
            | bit_expr1 RS bit_expr1
            | bit_expr1 '+' bit_expr1
            | bit_expr1 '-' bit_expr1
            | bit_expr1 '*' bit_expr1
            | bit_expr1 DIV bit_expr1
            | bit_expr1 MOD bit_expr1
            | bit_expr1 '^' bit_expr1
            | simple_expr1
            ;

    simple_expr1: '+' simple_expr1        %prec UMINUS
                | '-' simple_expr1       %prec UMINUS
                | '~' simple_expr1       %prec UMINUS
                | '!' simple_expr1       %prec UMINUS
                | '(' st1 ')'
                | EXISTS '(' st1 ')'
                | FUNC '(' val ')'
                | FUNC '(' DISTINCT val ')'
                | COUNT
                | val
                ;

%%

int yyerror()
{
    printf("INVALID STATEMENT !\n");
    exit(1);
    return 0;
}

int main()
{
    printf("ENTER THE QUERY :\n");
    yyparse();
    return 1;
}        

