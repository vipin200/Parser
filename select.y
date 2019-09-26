%{
#include <stdio.h>
#include <stdlib.h>  
int yyerror(const char* s);
int yylex();  

%}

%token W SELECT DISTINCT AS FUNC FROM WHERE GROUP HAVING ORDER BY LIMIT ASC DESC NUM ID LITERAL
%token OR AND XOR NOT IS NUL ANY ALL LE GE NE IN BETWEEN LIKE REG LS RS DIV MOD EXISTS TRUE FALSE UNKNOWN
%left '!'
%left '-' '+' '~'
%left ' ^ '
%left ' * ' DIV MOD
%left ' + ' ' - '
%left LS RS
%left ' & '
%left ' | '
%left ' = ' ' < ' ' > ' LE GE EQ NE IS LIKE REG IN
%left BETWEEN
%left NOT
%left AND
%left OR



%%

    START: ST1 ';' W              {printf("INPUT ACCEPTED...\n");
                                        exit(0);};

    ST: SELECT W attr FROM W tableList ST2
        | SELECT W DISTINCT W attr FROM W tableList ST2
        | ST1
        ;

    ST1: SELECT W cond1 W
        | SELECT W DISTINCT W cond1 W
        | SELECT W cond1 W AS W ID W
        | SELECT W DISTINCT W cond1 W AS W ID W
        ;

    ST2: WHERE W cond W ST3 
        | ST3 
        ;
    
    ST3: GROUP W BY W ST4 ST5
        | ST5 
        ;

    ST4: ID ',' W ID | ID W

    ST5: HAVING W cond W ST6 
        | ST6 
        ;

    ST6: ORDER W BY W ST4 ST7 
        | ORDER W BY W simple_expr W ST7
        | 
        ;

    ST7: DESC 
        | ASC 
        | 
        ;       
    
    attr: attrList 
        | '*' W
        | COUNT '( ' '*' ')' W 
        | COUNT '(' '*' ')' W AS W ID W;

    attrList: attrList ',' W attrList  
            | FUNC '(' param ')' W 
            | FUNC '(' DISTINCT W param ')' W 
            | ID W
            | FUNC '(' param ')' W AS W ID W
            | FUNC '(' DISTINCT W param ')' W AS W ID W
            | ID W AS W ID W ;
    
    param: ID | cond2 ;
    
    tableList: tableList  ',' W tableList 
            | ID W
            |'(' ST ')' W AS W ID W;
    
    cond: cond W OR W cond 
        | cond W AND W cond 
        | cond W XOR W cond
        | NOT W cond
        | '!' cond 
        | '(' cond ')'
        | bool_prim W IS W bool_val
        | bool_prim W IS W NOT W bool_val
        | bool_prim
        ;

    bool_val: TRUE | FALSE | UNKNOWN ;
    
    bool_prim: bool_prim W IS W NUL
             | bool_prim W IS W NOT W NUL
             | bool_prim W EQ W pred
             | bool_prim cmp_opr pred
             | bool_prim cmp_opr ALL '(' ST ')'
             | bool_prim cmp_opr ANY '(' ST ')'
             | pred
             ;            

    cmp_opr: ' = ' | ' < ' | ' > ' | W LE W | W GE W | W NE W ;

    pred: bit_expr W pred1
        | bit_expr W NOT W pred1
        | bit_expr
        ;    

    pred1: IN '(' ST ')'
         | IN '(' ncond ')'
         | BETWEEN W bit_expr W AND W pred
         | LIKE W expr
         | REG W bit_expr
         ; 

    ncond: cond ',' cond | cond ;

    bit_expr: bit_expr ' | ' bit_expr
            | bit_expr ' & ' bit_expr
            | bit_expr W LS W bit_expr
            | bit_expr W RS W bit_expr
            | bit_expr ' + ' bit_expr
            | bit_expr ' - ' bit_expr
            | bit_expr ' * ' bit_expr
            | bit_expr W DIV W bit_expr
            | bit_expr W MOD W bit_expr
            | bit_expr ' ^ ' bit_expr
            | expr
            ;

    expr: 
        | FUNC '(' expr1 ')'
        | '(' ST ')'
        | EXISTS '(' ST ')'
        | expr1
        ; 

    expr1: ID | exp2 ;

    expr2: '+' expr2 
         | '-' expr2
         | '~' expr2
         | '!' expr2
         | simple_expr
         ; 

    simple_expr: NUM
               | LITERAL
               | TRUE
               | FALSE
               | NUL
               ;

    cond1: '(' ST ')'
         | cond2
         ;

    cond2: cond2 opr cond2
         | '(' cond2 ')'
         | expr2;

    
    opr: cmp_opr
        | ' + ' | ' - ' | ' * ' | W DIV W | W MOD W
        | ' & ' | ' | ' | W LS W | W RS W | ' ^ '
        | W AND W | W OR W | W XOR W 
        ;
%%

int yyerror(char const *s)
{
    printf("Invalid Statement : %s\n",s);
    return 0;
}

int main()
{
    printf("Enter the query(Enter Space between strings) : ");
    yyparse();
    return 1;
}        