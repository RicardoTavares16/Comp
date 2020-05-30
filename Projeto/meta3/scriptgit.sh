#!/bin/bash

lex jucompiler.l
yacc -d jucompiler.y
gcc -g -Wall -o jucompiler lex.yy.c y.tab.c node.c semantics.c symtable.c 

FILESPATH=../../Comp2020/meta3

if [ $# -eq 0 ]
then
    for file in $FILESPATH/*
    do
        if [[ $file != .out ]]; then
            figlet -t -k $(basename $file)

            FILENAME=${file%.}
            ./jucompiler -l < $file | diff --strip-trailing-cr $FILENAME -
        fi
    done

else
    file=$FILESPATH/$1
    figlet -t -k $(basename $file)

    FILENAME=${file%.*}
    ./jucompiler $2 < $file | diff --strip-trailing-cr $FILENAME.out -
fi