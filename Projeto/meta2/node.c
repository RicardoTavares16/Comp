#include "node.h"

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
    case Node_PROGRAM: return "Program";
	case Node_ID: return "Id";
	case Node_INTLIT: return "Intlit";
	case Node_REALLIT: return "Reallit";
	case Node_STRLIT: return "Strlit";
	case Node_BOOLIT: return "Boolit";
    
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
		if (node->type == Node_ID || node->type == Node_INTLIT || node->type == Node_REALLIT || node->type == Node_STRLIT || node->type == Node_BOOLIT){
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
