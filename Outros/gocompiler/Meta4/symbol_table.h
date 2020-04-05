#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

typedef enum{FuncDecl,FuncTable,Global,Variable,Return}symbol_type;

typedef struct table_elem{
	char* id;
	char* type;
	int num_params;
	int num_func;
	symbol_type s_type;
	int is_param;
	struct table_elem** params;
	struct table_elem* next;
}Symbol;

#endif