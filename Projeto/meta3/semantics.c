#include "semantics.h"

extern Table *symTable;
Table *classTable;

static char *semantic_errors[] = {"Cannot find symbol %s>",
"Incompatible type %s in <token> statement",
"Number %s out of bounds",
"Operator %s cannot be applied to type <type>",
"Operator %s cannot be applied to types <type>, <type>",
"Reference to method %s is ambiguous",
"Symbol %s already defined"};


void createSymbolTable(Node *node)
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

    printTable(symTable);
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
    Symbol *new_symbol;

    NodeType nodeType = node->child->type;
    char *node_name = node->child->brother->value;

    SymbolType symbolType = getSymbolType(nodeType);

    new_symbol = createSymbol(node_name, symbolType, 0, 0);
    insertSymbol(classTable, new_symbol);
}

void addVardecl(Table* tbl, Node* aux_node){ 
	char* node_name = aux_node->child->brother->value; 
	NodeType nodeType = aux_node->child->type;

	SymbolType symbolType = getSymbolType(nodeType);

	Symbol *new_symbol = createSymbol(node_name,symbolType,0,0);
	if(tbl != NULL){
		if(searchSymbol(tbl,node_name)==NULL){
			insertSymbol(tbl,new_symbol);
		}
		else{
			printf(semantic_errors[6], node_name);
		}
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

void addMethodDecl(Node* aux_node){

	NodeType node_type = aux_node->child->child->type;
	char *node_name = aux_node->child->child->brother->value;
	Table *method_tbl = insertTable(node_name,1);
	Node* insideparam;
	NodeType paramtype;
	Symbol *new_symbol;

    SymbolType symbolType = getSymbolType(node_type);
   
	new_symbol = createSymbol("return",symbolType,0,1);
	insertSymbol(method_tbl,new_symbol);
		
	//criar simbolo para adicionar a tabela da classe
	
	new_symbol = createSymbol(node_name,symbolType,0,1);
	new_symbol->tablePointer = method_tbl;
	insertSymbol(classTable,new_symbol);

	//TODO: ver todos os ParamDecl e criar simbolos para por na tabela, isto ainda nao esta a funcionar bem
	
	Node* paramdecl;
	paramdecl = aux_node->child->child->brother->brother->child;
	//printf(">>> Paramdecl: %s\n",Node_names[paramdecl->type]);
	while(paramdecl != NULL){ // if ParamDecl != null
		insideparam = paramdecl->child;
		while(insideparam->brother != NULL){
			paramtype = insideparam->type;
			  if (paramtype == Node_StringArray)
            {
                symbolType = Symbol_StringArray;
            }
            if (paramtype == Node_Int)
            {
                symbolType = Symbol_Int;
            }
            if (paramtype == Node_Double)
            {
                symbolType = Symbol_Double;
            }
            if (paramtype == Node_Void)
            {
                symbolType = Symbol_Void;
            }
            if (paramtype == Node_Bool)
            {
                symbolType = Symbol_Boolean;
            }


			//printf("<<>><<>> TIPO: %s\n",insideparam->brother->value);
			new_symbol = createSymbol(insideparam->brother->value,symbolType,1,0);
			//printf("METHOD TABLE : %s\n", method_tbl->name);
			insertSymbol(method_tbl,new_symbol);
			//insert_symbol(class_table,new_symbol);
			insideparam= insideparam->brother;	
		}
		paramdecl=paramdecl->brother;

	}
	
	Node* mbchild; // Ponteiro do MethodBody's Child
	mbchild = aux_node->child->brother->child;
	while(mbchild != NULL){
		//printf("Comparing node type %s with VarDecl\n",Node_names[mbchild->type]);
		if(mbchild->type == Node_VarDecl){
			addVardecl(method_tbl, mbchild);
		}
		mbchild = mbchild->brother;
	}

}