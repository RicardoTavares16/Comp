#include "node.h"

Node* createNode(NodeType type){
	Node * node = (Node *)malloc(sizeof(Node));
	if (node != NULL){
		node->type = type;
		node->child = NULL;
		node->brother= NULL;
		node->value = NULL;
	}
	return node;
}

const char* getDayName(NodeType typeEnum) 
{
   switch (typeEnum) 
   {
    case Program: return "Program";
    
   }

}