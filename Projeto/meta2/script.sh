#!/bin/bash

lex jucompiler.l
yacc -d jucompiler.y
gcc -g -Wall -o jucompiler node.c y.tab.c lex.yy.c

