typedef enum {
    Node_Program,
	Node_Id,
	Node_Intlit,
	Node_Reallit,
	Node_Strlit,
	Node_Boolit,
	Node_FieldDecl,
	Node_Bool,
	Node_Int,
	Node_Double,
	Node_Comp,
	Node_MethodDecl,
	Node_MethodHeader,
	Node_MethodParams,
	Node_MethodBody,
	Node_Void,
	Node_ParamDecl,
	Node_StringArray,
	Node_VarDecl,
	Node_Block,
	Node_While,
	Node_Return,
	Node_Print,
	Node_Error,
	Node_If,
	Node_Assign,
	Node_Call,
	Node_ParseArgs,
	Node_Length,

	Node_Mul,
	Node_Div,
	Node_Mod,
	Node_And,
	Node_Or,
	Node_Eq,
	Node_Ge,
	Node_Gt,
	Node_Le,
	Node_Lt,
	Node_Ne,
	Node_Sub,
	Node_Add
	

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
void free_tree(Node* root);