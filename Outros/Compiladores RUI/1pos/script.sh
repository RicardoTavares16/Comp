#!/bin/bash

lex jac.l
yacc -d jac.y
cc -o jucompiler y.tab.c lex.yy.c
