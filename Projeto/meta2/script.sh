#!/bin/bash

lex jucompiler.l
yacc -d jucompiler.y
cc -o jucompiler node.c y.tab.c lex.yy.c
