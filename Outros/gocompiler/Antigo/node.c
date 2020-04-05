#include <stdlib.h>
#include "node.h"
node *auxTree[2048];

Token* new_token(char* id, int line, int col){
  Token* t = (Token*)malloc(sizeof(Token));
  t->id = strdup(id);
  t->line = line;
  t->column = col;
  return t;
}

node* add_node(char* nome){
	node* no = (node*) malloc( sizeof(node) );
    no->id = new_token(nome, 0, 0);
    no->irmao = NULL;
    no->filho = NULL;
    no->pai = NULL;
    no->s_type = "undef";
    no->num_params = 0;
    no->is_function=0;
    no->params = (char**)malloc(2000*sizeof(char*));
    return no;
}

node* add_node_value(char* nome,Token* value){
    char* aux_id = NULL;
    node* no = (node*)malloc(sizeof(node));
    no->id = (Token*)malloc(sizeof(Token));
    if (value!=NULL){
        aux_id = strdup(value->id);
        value->id = strdup(nome);
        strcpy(no->value,aux_id);
    }else{
        value = new_token(nome, 0, 0);
    }
    no->id = value;
    no->irmao = NULL;
    no->filho = NULL;
    no->pai = NULL;
    no->s_type = "undef";
    no->num_params = 0;
    no->is_function=0;
    no->params = (char**)malloc(2000*sizeof(char*));
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
	printf("%s(%s)\n",no->id->id,no->value);
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
        if(strcmp(root->id->id, "Id") == 0 || strcmp(root->id->id, "StrLit") == 0 || strcmp(root->id->id, "RealLit") == 0 || strcmp(root->id->id, "IntLit") == 0){
            print_value(root);
        } else {
            printf("%s\n",root->id->id);
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

void print_anoted_tree(node *root,int prof){
    int i;
    node* aux;
    print_dot(prof);
    if(strcmp(root->id->id,"Id")==0 || strcmp(root->id->id,"StrLit")==0 ||  strcmp(root->id->id,"RealLit")==0 || strcmp(root->id->id,"IntLit")==0){
        //printf("STYPE %s\n",root->s_type);
        if(strcmp(root->s_type,"undef")==0)
            printf("%s(%s)\n", (char*)(root->id->id), (char*)root->value);
        else if(strcmp(root->s_type,"undef2")==0){
            if(strcmp(root->id->id,"Id")==0)
                printf("%s(%s) - undef\n", (char*)(root->id->id), (char*)root->value);
            else
                printf("%s - undef\n", (char*)(root->id->id));
        }
        else{
            if(root->is_function){
              printf("%s(%s) - (", (char*)(root->id->id), (char*)root->value);
              for(i=0;i<=root->num_params;i++){
                 if(i==0){
                    if(root->params[i]!=NULL){
                       printf("%s",root->params[i]);
                   }
                   else{
                       printf("");
                   }
               }
               else{
                printf(",%s",(char*)root->params[i]);
            }
        }
        printf(")\n");
    }           
    else
        printf("%s(%s) - %s\n", (char*)(root->id->id), (char*)root->value,(char*)root->s_type);
}
}
else{
    if(strcmp(root->s_type,"undef")==0)
        printf("%s\n",(char*)(root->id->id)); 
    else if(strcmp(root->s_type,"undef2")==0){
        if(strcmp(root->id->id,"Id")==0)
            printf("%s(%s) - undef\n", (char*)(root->id->id), (char*)root->value);
        else

            printf("%s - undef\n", (char*)(root->id->id));
    }
    else{
      if(strcmp((char*)root->s_type,"null")==0){
         printf("%s\n",(char*)(root->id->id));
     }
     else{
       printf("%s - %s\n",(char*)(root->id->id),(char*)root->s_type);
   }
}
}   

aux = root->filho;
while(aux!=NULL){
    print_anoted_tree(aux,prof+1);
    aux = aux->irmao;
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