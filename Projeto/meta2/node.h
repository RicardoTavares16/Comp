#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef enum {
    Node_PROGRAM,
	Node_ID,
	Node_INTLIT,
	Node_REALLIT,
	Node_STRLIT,
	Node_BOOLIT

}NodeType;

typedef struct node{
	NodeType type;
	struct node* father;
	struct node* brother;
	struct node* child;
	char* value;
}Node;

//AST
Node* createNode(NodeType type);
const char* getTypeName(NodeType typeEnum);
void insertChild(Node* father, Node* newChild);
void insertBrother(Node* brother, Node* self);
void changeType(Node* newType ,Node* nodes);

//Prints
void printTree(Node* node, int level);
void printDots(int n);
void printLeaf(Node* node);