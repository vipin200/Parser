%option case-insensitive
%{
    #include <stdio.h> 
    #include "y.tab.h"
%}

Pstar \*+
Knostar [^*]*
Nostarfwdslash [^*/]

%%       

select                                      return SELECT;
distinct                                    return DISTINCT;
as                                          return AS;
count"(*)"                                  return COUNT;
count|min|max|avg|sum                       return FUNC;
from                                        return FROM;
where                                       return WHERE;
group                                       return GROUP;
having                                      return HAVING;
order                                       return ORDER;
by                                          return BY;
limit                                       return LIMIT;
or|"||"                                     return OR;
and|"&&"                                    return AND;
xor                                         return XOR;
not                                         return NOT;
"<="|">="|"!="|"<>"|"<=>"|"<"|">"|"="       return CMP;
"<<"                                        return LS;
">>"                                        return RS;
div|"/"                                     return DIV;
mod|"%"                                     return MOD;
is                                          return IS;
null                                        return NUL;
any                                         return ANY;
all                                         return ALL;
in                                          return IN;
between                                     return BETWEEN;
like                                        return LIKE;
regexp                                      return REG;
exists                                      return EXISTS;
desc                                        return DESC;
asc                                         return ASC;
true                                        return BOOL;
false                                       return BOOL;
unknown                                     return BOOL;

[1-9][0-9]*                                 return INT;
[0-9]*(\.[0-9]+)?                           return FLOAT;

\"((\\\")|[^"])*\" | '((\\')|[^'])*'        return LITERAL; 

X'[0-9A-F]+' |  0X[0-9A-F]+                 return LITERAL;

0B[01]+ | B'[01]+'                          return LITERAL;

[A-Za-z0-9_$]+ |
`((\\`)|[^`])+`                             return ID;

                   

#.*                                         ;
"--"[ \t].*                                 ;
"/*"{Knostar}{Pstar}({Nostarfwdslash}{Knostar}{Pstar})*"/"   ;

[ \t\n]                                     ;       
.                                           return *yytext;

%%

int yywrap()
{
    return 1;
}