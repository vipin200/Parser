%option case-insensitive
%{
    #include <stdio.h> 
    #include "y.tab.h"
    int yyerror();
    
%}

Pstar \*+
Knostar [^*]*
Nostarfwdslash [^*/]
KEYWORDS  ADD|ALTER|ANALYZE|AUTO_INCREMENT|BDB|BERKELEYDB|BIGINT|BINARY|BLOB|BOTH|BTREE|CASCADE|CASE|CHANGE|CHAR|CHARACTER|CHECK|COLLATE|COLUMN|COLUMNS|CONSTRAINT|CREATE|CROSS|CURRENT_DATE|CURRENT_TIME|CURRENT_TIMESTAMP|DATABASE|DATABASES|DAY_HOUR|DAY_MINUTE|DAY_SECOND|DEC|DECIMAL|DEFAULT|DELAYED|DESCRIBE|DISTINCTROW|DOUBLE|DROP|ELSE|ENCLOSED|ERRORS|ESCAPED|EXPLAIN|FIELDS|FOR|FORCE|FOREIGN|FULLTEXT|FUNCTION|GEOMETRY|GRANT|HASH|HELP|HIGH_PRIORITY|HOUR_MINUTE|HOUR_SECOND|IF|INDEX|INFILE|INNER|INNODB|INSERT|INTEGER|INTERVAL|INTO|JOIN|KEY|KEYS|KILL|LEADING|LEFT|LINES|LOAD|LOCALTIME|LOCALTIMESTAMP|LOCK|LONG|LONGBLOB|LONGTEXT|MASTER_SERVER_ID|MATCH|MEDIUMBLOB|MEDIUMINT|MEDIUMTEXT|MIDDLEINT|MINUTE_SECOND|MRG_MYISAM|NATURAL|NUMERIC|ON|OPTIMIZE|OPTION|OPTIONALLY|OUTER|OUTFILE|PRECISION|PRIMARY|PRIVILEGES|PROCEDURE|PURGE|READ|REAL|REFERENCES|RENAME|REPLACE|REQUIRE|RESTRICT|RETURNS|REVOKE|RIGHT|RLIKE|RTREE|SET|SHOW|SMALLINT|SOME|SONAME|SPATIAL|SQL_BIG_RESULT|SQL_CALC_FOUND_ROWS|SQL_SMALL_RESULT|SSL|STARTING|STRAIGHT_JOIN|STRIPED|TABLE|TABLES|TERMINATED|THEN|TINYBLOB|TINYINT|TINYTEXT|TO|TRAILING|TYPES|UNION|UNIQUE|UNLOCK|UNSIGNED|UPDATE|USAGE|USE|USER_RESOURCES|USING|VALUES|VARBINARY|VARCHAR|VARCHARACTER|VARYING|WARNINGS|WHEN|WITH|WRITE|YEAR_MONTH|ZEROFILL|DELETE|LOW_PRIORITY|QUICK|IGNORE|PARTITION|TOP|PERCENT
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

\"((\\\")|[^"])*\"                          return LITERAL;
'((\\')|[^'])*'                             return LITERAL; 

X'[0-9A-F]+' |  0X[0-9A-F]+                 return LITERAL;

0B[01]+ | B'[01]+'                          return LITERAL;

[A-Za-z0-9_$]+ |
`((\\`)|[^`])+`                             return ID;

                   

#.*                                         ;
"--"[ \t].*                                 ;
"/*"{Knostar}{Pstar}({Nostarfwdslash}{Knostar}{Pstar})*"/"   ;

[ \t\n]                                     ;       
.                                           return *yytext;
{KEYWORDS}                                  { yyerror(); }

%%

int yywrap()
{
    return 1;
}