#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "symbol_table.h"
#include "node.h"

node* check_program(node* node);
Symbol* ST;
Symbol* new_symbol(char* id,symbol_type s_type);
Symbol* init_symbol_table(node* node);
int error_semantic;


void check_VarDecl(node* no, Symbol* ST, int is_on_function);
void check_FuncDecl(node* node,Symbol* ST);
void check_variable(node* terminal,Symbol* ST);
void add_symbol(Symbol* ST, Symbol* new_symbol);
char* tolowercase(char* type);
Symbol* search_symbol(char *type,Symbol* ST);
Symbol* search_on_function(char *type,Symbol* function,char* id);
void check_return(Symbol* ST);
void check_addsubmultdiv(node* terminal,Symbol* ST);
void check_id(node* terminal, Symbol* function);
void check_eq_ne_lt_le_ge(node* terminal, Symbol* function);
void check_minusplusnot(node* terminal,Symbol* ST);
void verify_return(node* terminal,Symbol* ST);
void check_and_or(node* terminal, Symbol* ST);
void check_comma(node* terminal, Symbol* ST);
Symbol* search_variable(char *type,Symbol* function);
void check_mod(node* terminal,Symbol* ST);
void print_symbol_table();
void print_symbol(Symbol* symbol);
Symbol* is_param(node* no, Symbol* ST,int op);
void check_if_for(node* no, Symbol* ST);
void check_childs(node* terminal,Symbol* ST);
void check_call(node* no,Symbol* ST);
void check_id_call(node* terminal, Symbol* function);
void check_intlit(node* terminal,Symbol* ST);
void check_parse_args(node* no,Symbol* ST);
int search_variable_func_decl(char *type,Symbol* function);