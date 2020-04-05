#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Token {
  char* id;
  int line;
  int column;
} Token;

typedef struct node_ast{
	struct node_ast* pai;
	struct node_ast* irmao;
	struct node_ast* filho;
	Token* id;
	char value[100];
	int num_params;
	char* s_type;
	int is_function;
	char** params;
}node;

node* add_node(char* nome);
node* add_node_value(char* nome,Token* value);

void add_son(node* pai, node* filho);
void add_brother(node* irmao1, node* filho); 

void print_value(node* no);
void print_dot(int nivel);
void print_tree(node* root, int nivel);
void free_tree(node* root);
void print_anoted_tree(node *root,int prof);
Token* new_token(char* id, int line, int col);