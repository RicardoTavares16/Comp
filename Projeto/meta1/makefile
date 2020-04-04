build: analisador1

analisador1: lex.yy.c
	clang-3.9 -o analisador1 lex.yy.c

lex.yy.c: jucompiler.l
	lex jucompiler.l 

clean: 
	rm lex.yy.c analisador1