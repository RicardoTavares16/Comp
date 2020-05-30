#!/bin/bash

lex jucompiler.l
yacc -d jucompiler.y
gcc -g -Wall -o jucompiler lex.yy.c y.tab.c node.c semantics.c symtable.c 