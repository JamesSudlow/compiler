grammar ifcc;

axiom : prog EOF ;

prog : 'int' 'main' '(' ')' '{' formule return_stmt '}' ;

return_stmt: RETURN expr ';' ;
formule: 'int' deca ';' formule|'int' dec ';' formule| ass formule|fonction formule|;
more: ',' dec|',' deca|;
dec:  VAR more;
deca: VAR '=' expr more;
ass: VAR '=' expr ';';
expr: '(' expr ')' # par
| expr OP=('*' | '/'| '%') expr # multdiv
| expr OP=('+' | '-')  expr # addplus
| val #value
;
fonction: Name=('putchar('|'other')expr');'|Name=('getchar('|'other')VAR');';
RETURN : 'return' ;
val: CONST | VAR;
CONST : [0-9]+ ;
VAR : [a-zA-Z][a-zA-Z0-9]* ;
COMMENT : '/*' .*? '*/' -> skip ;
DIRECTIVE : '#' .*? '\n' -> skip ;
WS    : [ \t\r\n] -> channel(HIDDEN);
