#include <stdlib.h>
#include "node.h"

node* add_node(char* nome){
	node* no = (node*) malloc( sizeof(node) );
	strcpy(no->id, nome);
    no->irmao = NULL;
	no->filho = NULL;
	no->pai = NULL;
	return no;
}

node* add_node_value(char* nome, char* value){
    node* no = (node*)malloc(sizeof(node));
	strcpy(no->id, nome);
    no->irmao = NULL;
    no->filho = NULL;
    no->pai = NULL;
    strcpy(no->value, value);
	return no;
}

void add_son(node* pai, node* filho){
    if(filho!=NULL){
	    if(pai->filho!=NULL){
			filho->irmao=pai->filho;
			filho->pai=pai;
			pai->filho=filho;
	    }
	    else{
			filho->pai=pai;
			pai->filho=filho;
	    }
    }
}

void add_brother(node* irmao1, node* filho){
    if(irmao1!=NULL && filho!=NULL){
		while(irmao1->irmao!=NULL){
	    	irmao1=irmao1->irmao;
		}
	    irmao1->irmao=filho;
	    filho->pai=irmao1->pai;
    }
}

void print_value(node* no){
	printf("%s(%s)\n",no->id,no->value);
}

void print_dot(int nivel){
	if(nivel==0) return;
	for(int i = 0; i < nivel; i++){
	    printf("..");
	}
}

void print_tree(node* root, int nivel){
    if(root != NULL) {
        print_dot(nivel);
        if(strcmp(root->id, "Id") == 0 || strcmp(root->id, "StrLit") == 0 || strcmp(root->id, "RealLit") == 0 || strcmp(root->id, "IntLit") == 0){
            print_value(root);
        } else {
            printf("%s\n",root->id);
        }

       	node* filho = root->filho;

        if(filho != NULL){
        	print_tree(filho, nivel + 1);

            while(filho->irmao != NULL){
                filho = filho->irmao;
                print_tree(filho, nivel + 1);
            }

        }
    }
}

void free_tree(node* root){
    
    node* tmp = NULL;
    node* tmp_2 = NULL;
    node* son = NULL;

    if(root!=NULL){
        tmp = root;
        son = root->filho;
        free(tmp);
        while(son!=NULL){
        	tmp_2 = son;
        	son = son->irmao;
        	free_tree(tmp_2);
        }
    }
}