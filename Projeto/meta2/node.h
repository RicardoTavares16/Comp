#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef enum {
    Program

}NodeType;

typedef struct node{
	NodeType type;
	struct node* father;
	struct node* brother;
	struct node* child;
	char* value;
}Node;