#ifndef SEMANTICS_H
#define SEMANTICS_H

#include "node.h"
#include "symtable.h"

void createSymbolTable(Node *node);
void addProgram(Node *node);
void analyzeNode(Node *node);
void addFieldDecl(Node *node);
void addVardecl(Table* tbl, Node* auxNode);
void addMethodDecl(Node* auxNode);
SymbolType getSymbolType(NodeType nodeType);

#endif