#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node_ast{
	struct node_ast* pai;
	struct node_ast* irmao;
	struct node_ast* filho;
	char id[100];
	char value[100];
}node;

node* add_node(char* nome);
node* add_node_value(char* nome, char* value);

void add_son(node* pai, node* filho);
void add_brother(node* irmao1, node* filho); 

void print_value(node* no);
void print_dot(int nivel);
void print_tree(node* root, int nivel);
void free_tree(node* root);
