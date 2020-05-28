#ifndef SEMANTICS_H
#define SEMANTICS_H

#include "node.h"
#include "symtable.h"

void createSymbolTable(Node *node);
void addProgram(Node *node);
void analyzeNode(Node *node);
void addFieldDecl(Node *node);
void addVardecl(Table* tbl, Node* aux_node);
void addMethodDecl(Node* aux_node);


#endif