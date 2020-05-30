#!/bin/bash

lex jac.l
yacc -d jac.y
gcc -g -Wall -o jucompiler lex.yy.c y.tab.c ast.c print.c semantics.c symboltable.c