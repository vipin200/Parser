%option case-insensitive
%{
    #include <stdio.h> 
    #include "y.tab.h"
%}

%%

[ \t\n]
select                              return SELECT;
distinct                            return DISTINCT;
count|min|max|avg|sum|abs           return FUNC;
from                                return FROM;
where                               return WHERE;
limit                               return LIMIT;
like                                return LIKE;
desc                                return DESC;
asc                                 return ASC;
any                                 return ANY;
exists                               return EXISTS;
as                                  return AS;
all                                 return ALL;
between                             return BETWEEN;
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
%%

int yywrap()
{
    return 1;
}