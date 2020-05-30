#ifndef SYMTAB_H
#define SYMTAB_H

typedef enum {
 Symbol_StringArray,
 Symbol_Int,
 Symbol_Double,
 Symbol_Void,
 Symbol_Boolean,
} SymbolType;

typedef struct table{
	char* name;
	int type; // 0 = class 1 = method
	struct table* brother;
	struct symbol* child;
} Table;

typedef struct symbol{
	char* name;
	SymbolType symType;
	int varMethod; // 0 = var 1 = method
	int isParam; 
	struct symbol* brother;
	struct table* tablePointer;
} Symbol;

Table *insertTable(char *name, int type);
void insertSymbol(Table *table, Symbol *symbol);
Symbol *createSymbol(char *name, SymbolType type, int isParam, int varMethod);
Table *searchTable(char *tableName);
Symbol *searchSymbol(Table *table, char *symbolName);
const char* getSymbolTypeName(SymbolType typeEnum);
void printTable(Table *table);
char *getParams(Table *table);
void printSymbols(Symbol *symbol);




#endif