%option case-insensitive
%{
    #include <stdio.h> 
    #include "y.tab.h"
%}

%%       

[ \t\n]                             return W;
select                              return SELECT;
distinct                            return DISTINCT;
as                                  return AS;
count|min|max|avg|sum|abs           return FUNC;
from                                return FROM;
where                               return WHERE;
group                               return GROUP;
having                              return HAVING;
order                               return ORDER;
by                                  return BY;
limit                               return LIMIT;
or|"||"                             return OR;
and|"&&"                            return AND;
xor                                 return XOR;
not|"!"                             return NOT;
is                                  return IS;
null                                return NULL;
any                                 return ANY;
all                                 return ALL;
"<="                                return LE;
">="                                return GE;
"!="|"<>"                           return NE;
in                                  return IN;
between                             return BETWEEN;
<<<<<<< HEAD
like                                return LIKE;
regexp                              return REG;
"<<"                                return LS;
">>"                                return RS;
"div"|"/"                           return DIV;
"mod"|"%"                           return MOD;
exists                              return EXISTS;
desc                                return DESC;
asc                                 return ASC;
[0-9]*(\.[0-9]+)?                   return NUM;
[_A-Za-z]+[A-Za-z0-9_]*             return ID;
.                     return yytext[0];

=======
"group by"                          return GROUP;
having                              return HAVING;
"order by"                          return ORDER;
"NOT NULL"                          return NOTNULL;
"is null"                           return ISNULL;
"is not null"                       return ISNOTNULL;

or                                  return OR;
and                                 return AND;
xor                                 return XOR;
not                                 return NOT;
"not in"                            return NOTIN
in                                  return IN;
[0-9]*(\.[0-9]+)?                   return NUM;
[_A-Za-z]+[A-Za-z0-9_]*             return ID;
"<="                                return LE;
">="                                return GE;
"=="                                return EQ;
"!="                                return NE;
.                                   return yytext[0];
>>>>>>> 806f359ac447c7c70b8e5d6d06de9aee4f98fadd
%%

int yywrap()
{
    return 1;
}