#include "semantics.h"

extern Table *symTable;
Table *classTable;

void semanticAnalysis(Node *node)
{
    Node *aux = node;
    if (strcmp("Program", getTypeName(aux->type)) == 0)
    {
        addProgram(aux);
    }

    aux = aux->child;

    while (aux != NULL)
    {
        analyzeNode(aux);
        aux = aux->brother;
    }

    
}

void addProgram(Node *node)
{
    char *nodeName = node->child->value;
    Table *tmpTable;
    tmpTable = insertTable(nodeName, 0);
    classTable = tmpTable;
}

void analyzeNode(Node *node)
{
    const char *name = getTypeName(node->type);
    if (strcmp("FieldDecl", name) == 0)
    {
        addFieldDecl(node);
    }
    if (strcmp("MethodDecl", name) == 0)
    {
        addMethodDecl(node);
    }
}

void addFieldDecl(Node *node)
{
    Symbol *newSymbol;

    NodeType nodeType = node->child->type;
    char *nodeName = node->child->brother->value;

    SymbolType symbolType = getSymbolType(nodeType);

    newSymbol = createSymbol(nodeName, symbolType, 0, 0);
    insertSymbol(classTable, newSymbol);
}

void addVardecl(Table *tbl, Node *auxNode)
{
    char *nodeName = auxNode->child->brother->value;
    NodeType nodeType = auxNode->child->type;

    SymbolType symbolType = getSymbolType(nodeType);

    Symbol *newSymbol = createSymbol(nodeName, symbolType, 0, 0);
    if (tbl != NULL)
    {
        if (searchSymbol(tbl, nodeName) == NULL)
        {
            insertSymbol(tbl, newSymbol);
        }
        else
        {
            printf("Symbol %s already defined", nodeName);
        }
    }
}

void addMethodDecl(Node *auxNode)
{
    NodeType nodeType = auxNode->child->child->type;
    char *nodeName = auxNode->child->child->brother->value;
    Table *methodTbl = insertTable(nodeName, 1);
    Node *insideparam;
    NodeType paramtype;
    Symbol *newSymbol;

    SymbolType symbolType = getSymbolType(nodeType);

    newSymbol = createSymbol("return", symbolType, 0, 1);
    insertSymbol(methodTbl, newSymbol);

    newSymbol = createSymbol(nodeName, symbolType, 0, 1);
    newSymbol->tablePointer = methodTbl;
    insertSymbol(classTable, newSymbol);

    Node *paramdecl;
    paramdecl = auxNode->child->child->brother->brother->child;
    while (paramdecl != NULL)
    { 
        insideparam = paramdecl->child;
        while (insideparam->brother != NULL)
        {
            paramtype = insideparam->type;

            SymbolType symbolType = getSymbolType(paramtype);

            newSymbol = createSymbol(insideparam->brother->value, symbolType, 1, 0);
            insertSymbol(methodTbl, newSymbol);
            insideparam = insideparam->brother;
        }
        paramdecl = paramdecl->brother;
    }

    Node *mbchild;
    mbchild = auxNode->child->brother->child;
    while (mbchild != NULL)
    {
        if (mbchild->type == Node_VarDecl)
        {
            addVardecl(methodTbl, mbchild);
        }
        mbchild = mbchild->brother;
    }
}

//Remake this
SymbolType getSymbolType(NodeType nodeType)
{
    SymbolType symbolType = Symbol_StringArray;
    if (nodeType == Node_StringArray)
    {
        symbolType = Symbol_StringArray;
    }
    if (nodeType == Node_Int)
    {
        symbolType = Symbol_Int;
    }
    if (nodeType == Node_Double)
    {
        symbolType = Symbol_Double;
    }
    if (nodeType == Node_Void)
    {
        symbolType = Symbol_Void;
    }
    if (nodeType == Node_Bool)
    {
        symbolType = Symbol_Boolean;
    }
    return symbolType;
}
