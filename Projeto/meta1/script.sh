#!/bin/bash

lex jucompiler.l
clang-3.9 -o jucompiler lex.yy.c

FILESPATH=../../Comp2020/meta1

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