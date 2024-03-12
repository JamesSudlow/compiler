grammar ifcc;

axiom : prog EOF ;

prog : 'int' 'main' '(' ')' '{' formule return_stmt '}' ;

return_stmt: RETURN val ';' ;
formule: dec formule| ass formule | deca formule|;
dec: 'int' VAR morevar';';
morevar: ',' VAR morevar|;
deca: 'int' VAR '=' expr ';';
ass: VAR '=' expr ';';
expr: '(' expr ')' # par
| expr OP=('*' | '/') expr # multdiv
| expr OP=('+' | '-')  expr # addplus
| val #value
;
RETURN : 'return' ;
val: CONST | VAR;
CONST : [0-9]+ ;
VAR : [a-zA-Z][a-zA-Z0-9]* ;
COMMENT : '/*' .*? '*/' -> skip ;
DIRECTIVE : '#' .*? '\n' -> skip ;
WS    : [ \t\r\n] -> channel(HIDDEN);
