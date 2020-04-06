#include "node.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

Node* createNode(NodeType type){
	Node* node = (Node*)malloc(sizeof(Node));
	if (node != NULL){
		node->type = type;
		node->child = NULL;
		node->brother= NULL;
		node->value = NULL;
	}
	return node;
}

const char* getTypeName(NodeType typeEnum) 
{
   switch (typeEnum) 
   {
    case Node_Program: return "Program";
	case Node_Id: return "Id";
	case Node_Intlit: return "Intlit";
	case Node_Reallit: return "Reallit";
	case Node_Strlit: return "Strlit";
	case Node_Boolit: return "Boolit";
	case Node_FieldDecl: return "FieldDecl";
	case Node_Comp: return "Comp";
	case Node_MethodDecl: return "MethodDecl";
	case Node_MethodHeader: return "MethodHeader";
	case Node_MethodParams: return "MethodParams";
	case Node_MethodBody: return "MethodBody";
	case Node_Void: return "Void";
	case Node_ParamDecl: return "ParamDecl";
	case Node_StringArray: return "StringArray";
	case Node_Bool: return "Bool";
	case Node_Int: return "Int";
	case Node_Double: return "Double";
	case Node_VarDecl: return "VarDecl";
	case Node_Block: return "Block";
	case Node_While: return "While";
	case Node_Return: return "Return";
	case Node_Print: return "Print";
	case Node_Error: return "Error";
	case Node_If: return "If";
    case Node_Assign: return "Assign";
	case Node_Call: return "Call";
	case Node_ParseArgs: return "ParseArgs";
	case Node_Length: return "Length";
	case Node_Mul: return "Mul";
	case Node_Div: return "Div";
	case Node_Mod: return "Mod";
	case Node_And: return "And";
	case Node_Or: return "Or";
	case Node_Eq: return "Eq";
	case Node_Ge: return "Ge";
	case Node_Gt: return "Gt";
	case Node_Le: return "Le";
	case Node_Lt: return "Lt";
	case Node_Ne: return "Ne";
	case Node_Sub: return "Sub";
	case Node_Add: return "Add";
   }
}

void insertChild(Node* father, Node* newChild){

	Node* tmp = father->child;
	if(newChild == NULL){
		printf("NewChild null\n");
	}
	if(father == NULL){
		printf("Father null\n");
	}
	if(tmp == NULL){
		newChild->father = father;
		father->child = newChild;
	}
}

void insertBrother(Node* brother, Node* self){

	Node* aux = brother;

	if(aux != NULL && self != NULL){
		while(aux->brother != NULL){
			aux = aux->brother;
		}
		aux->brother = self;
	
		self->father = aux->father;
	}
}

void changeType(Node* newType, Node* nodes){

	while (nodes->brother != NULL){
		nodes->child->type = newType->child->type;
		nodes = nodes->brother;
	}
		nodes->child->type = newType->child->type;

}

void printTree(Node* node, int level){
	printDots(level);
	if(node != NULL){
		if (node->type == Node_Id || node->type == Node_Intlit || node->type == Node_Reallit || node->type == Node_Strlit || node->type == Node_Boolit){
			printLeaf(node);
		}
		else{
			printf("%s\n", getTypeName(node->type));	
		}

		Node* child = node->child;
		if (child != NULL){
			printTree(child,level+1);
			while(child->brother != NULL){
				child = child->brother;
				printTree(child,level +1);
			}
		}
	}
}

void printDots(int n){
	while(n > 0){
		printf("..");
		n--;
	}
}

void printLeaf(Node* node){
	printf("%s(%s)\n", getTypeName(node->type), node->value);
}

void free_tree(Node* root){
    
    Node* tmp = NULL;
    Node* tmp_2 = NULL;
    Node* son = NULL;

    if(root!=NULL){
        tmp = root;
        son = root->child;
        free(tmp);
        while(son!=NULL){
        	tmp_2 = son;
        	son = son->brother;
        	free_tree(tmp_2);
        }
    }
}
