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
        ;        

    st2: WHERE expr st3 
        | st3 
        ;
    
    st3: GROUP  BY st4 st5
        | st5 
        ;

    st4: st4 ',' st4 | ID st7 | INT st7 ; 

    st5: HAVING expr st6 
        | st6 
        ;

    st6: ORDER  BY st4 
        |
        ;

    st7: DESC 
        | ASC  
        | 
        ;       
    
    attr: attrList 
        | '*' 
        | COUNT alias   
        ;

    attrList:attrList ','  attrList  
            | FUNC '(' val ')'  alias 
            | FUNC '(' DISTINCT  val ')'  alias 
            | val  alias  
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

%%

int yyerror()
{
    printf("INVALID STATEMENT !\n");
    return 0;
}

int main()
{
    printf("ENTER THE QUERY :\n");
    yyparse();
    return 1;
}        
