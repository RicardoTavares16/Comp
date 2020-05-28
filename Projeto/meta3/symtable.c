#include "symtable.h"
#include "node.h"

extern Table* symTable;

Table *insertTable(char *name, int type)
{
    Table *auxSymTable = (Table *)malloc(sizeof(Table));
    auxSymTable->name = name;
    auxSymTable->type = type;

    Table *tmp;

    if (symTable == NULL)
    {
        symTable = auxSymTable;
    }
    else
    {
        tmp = symTable;
        while (tmp->brother != NULL)
        {
            tmp = tmp->brother;
        }
        tmp->brother = auxSymTable;
    }
    return auxSymTable;
}

void insertSymbol(Table *table, Symbol *symbol)
{
    Symbol *tmp;
    if (table != NULL)
    {
        if (table->child == NULL)
        {
            table->child = symbol;
        }
        else
        {
            tmp = table->child;
            while (tmp->brother != NULL)
            {
                tmp = tmp->brother;
            }
            tmp->brother = symbol;
        }
    }
}

Symbol *createSymbol(char *name, SymbolType type, int isParam, int varMethod)
{
    Symbol *symbol = (Symbol *)malloc(sizeof(Symbol));
    symbol->name = name;
    symbol->symType = type;
    symbol->isParam = isParam;
    symbol->brother = NULL;
    symbol->varMethod = varMethod;
    symbol->tablePointer = NULL;
    return symbol;
}

Table *searchTable(char *tableName)
{
    Table *tmpTable = symTable;
    while (tmpTable != NULL)
    {
        if (strcmp(tmpTable->name, tableName) == 0)
        {
            return tmpTable;
        }
        tmpTable = tmpTable->brother;
    }
    if (tmpTable == NULL)
    {
        return NULL;
    }
    return NULL;
}

Symbol *searchSymbol(Table *table, char *symbolName)
{
    Symbol *tmpSymbol = table->child;
    while (tmpSymbol != NULL)
    {
        if (strcmp(tmpSymbol->name, symbolName) == 0)
        {
            return tmpSymbol;
        }
        tmpSymbol = tmpSymbol->brother;
    }
    if (tmpSymbol == NULL)
    {
        return NULL;
    }
    return NULL;
}

void printTable(Table *table)
{
    Table *tmp;
    tmp = table;
    while (tmp != NULL)
    {
        if (tmp->type == 0)
        {
            printf("===== Class %s Symbol Table =====\n", tmp->name);
            printSymbols(tmp->child);
        }
        else
        {
            char *params = getParams(tmp);
            printf("===== Method %s(%s) Symbol Table =====\n", tmp->name, params);
            printSymbols(tmp->child);
        }
        tmp = tmp->brother;
        if (tmp != NULL)
        {
            printf("\n");
        }
    }
}

const char* getSymbolTypeName(SymbolType typeEnum) 
{
   switch (typeEnum) 
   {
    case Symbol_StringArray: return "String[]";
    case Symbol_Int: return "int";
    case Symbol_Double: return "double";
    case Symbol_Void: return "void";
    case Symbol_Boolean: return "boolean";
	default: return "";
   }
}

char *getParams(Table *table)
{
    Symbol *son = table->child;
    char* retstring = malloc (sizeof (char) * 200);
    while (son != NULL)
    {
        if (son->isParam == 1)
        {
            if (strcmp(retstring, "") == 0)
            {
                strcpy(retstring, getSymbolTypeName(son->symType));
            }
            else
            {
                strcat(retstring, ",");
                strcat(retstring, getSymbolTypeName(son->symType));
            }
        }
        son = son->brother;
    }

    return retstring;
}

void printSymbols(Symbol *symbol)
{
    Symbol *aux = symbol;
    char *method_params;
    while (aux != NULL)
    {
        if (aux->isParam == 1)
            printf("%s\t\t%s\tparam\n", aux->name, getSymbolTypeName(aux->symType));
        else
        {
            if (aux->varMethod == 1 && aux->tablePointer != NULL)
            {
                method_params = getParams(aux->tablePointer);
                printf("%s\t(%s)\t%s\n", aux->name, method_params, getSymbolTypeName(aux->symType));
            }
            else
            {
                printf("%s\t\t%s\n", aux->name, getSymbolTypeName(aux->symType));
            }
        }
        aux = aux->brother;
    }
}