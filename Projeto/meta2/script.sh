#!/bin/bash

lex jucompiler.l
yacc -d jucompiler.y
cc -o jucompiler node.c y.tab.c lex.yy.c

FILESPATH=../../Comp2020/meta2

if [ $# -eq 0 ]
then
    for file in $FILESPATH/*
    do
        if [[ $file != .out ]]; then
            figlet -t -k $(basename $file)

            FILENAME=${file%.}
            ./jucompiler -t < $file | diff --strip-trailing-cr $FILENAME -
        fi
    done

else
    file=$FILESPATH/$1
    figlet -t -k $(basename $file)

    FILENAME=${file%.*}
    ./jucompiler $2 < $file | diff --strip-trailing-cr $FILENAME.out -
fi    