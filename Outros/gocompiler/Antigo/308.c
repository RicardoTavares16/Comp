#include "semantics.h"
#include <stdlib.h>

//ver ordem que imprime operacoes de atribuicao(=)

char* type_spec[] = {"int","float32","bool","string","undef"};

int on_func = 0;

Symbol* new_symbol(char* id,symbol_type s_type){
	Symbol* elem = (Symbol*)malloc(sizeof(Symbol));
	elem->id = id;
	elem->s_type = s_type;
	elem->is_param=0;
	elem->num_func = on_func;
	elem->params = (Symbol**)malloc(2000*sizeof(Symbol*));
	elem->type = "undef";
	elem->num_params = 0;
	elem->func_definition = NULL;
	elem->next = NULL;
	return elem;
}

void add_symbol(Symbol* ST, Symbol* new_symbol){
	Symbol* cur_node = ST;
	while(cur_node->next != NULL){
		cur_node = cur_node->next;
	}
	cur_node->next = new_symbol;

}

char* tolowercase(char* type){
	if(strcmp(type,"String")==0)
		return "string";
	else if(strcmp(type,"Int")==0)
		return "int";
	else if(strcmp(type,"Bool")==0) 
		return "bool";
	else if(strcmp(type,"Float32")==0)
		return "float32";
	else if(strcmp(type,"If")==0)
		return "if";
	else if(strcmp(type,"For")==0)
		return "for";
	return "null";

}

Symbol* init_symbol_table(node* node){
	Symbol* st = new_symbol(node->id->id,Global);
	return st;
}

Symbol* search_symbol(char *type,Symbol* function){
	Symbol* symbol = NULL;	
	if(function!=NULL){
		Symbol *aux = function->next;
		while(aux != NULL){
			if(strcmp(aux->id, type)==0)
				symbol =  aux;
			aux = aux->next;
		}
	}
	if(symbol==NULL || function==NULL){
		Symbol *aux = ST->next;
		while(aux != NULL){
			//printf("Aux id %s\n",aux->id);
			if(strcmp(aux->id, type)==0)
				symbol  = aux;
			aux = aux->next;
		}
	}
	return symbol;

}

Symbol* search_on_function(char *type,Symbol* function,char* id){
	//printf("Function id %s type %s\n",function->id,function->type);
	if(function!=NULL){
		Symbol *aux = function->next;
		//printf("Function id %s type %s\n",aux->id,aux->type);
		while(aux != NULL){
			if(strcmp(aux->id, type)==0 && strcmp(aux->type,id)==0)
				return  aux;
			aux = aux->next;
		}
	}
	return NULL;
}

Symbol* search_on_function_parmas(char* id,Symbol* function){
	if(function!=NULL){
		Symbol *aux = function->next;
		while(aux!=NULL){
			for(int i=0;i<aux->num_params;i++){
				if(strcmp(aux->params[i]->id,id)==0)
					return aux->params[i];
			}
			aux = aux->next;
		}
	}
	return NULL;
}


node* check_program(node* no){
	node* aux;
	error_semantic = 0;
	Symbol* newsymbol;	
	ST = init_symbol_table(no);
	if(strcmp(no->id->id,"Program")==0){
		aux = no->filho;
		while(aux!=NULL){
			if(strcmp(aux->id->id,"VarDecl")==0){
				check_VarDecl(aux,ST,0);
			}
			else if(strcmp(aux->id->id,"FuncDecl")==0){
				newsymbol = is_param(aux,ST,1);

			}
			aux = aux->irmao;
		}
		aux = no->filho;
		while(aux!=NULL){
			if(strcmp(aux->id->id,"FuncDecl")==0){
				check_FuncDecl(aux,ST);
			}
			aux = aux->irmao;
		}

	}
	return no;
}

void check_VarDecl(node* no, Symbol* ST,int is_on_function){
	node* filho2 = no->filho;
	node* filho1 = filho2->irmao;
	Symbol* newsymbol = new_symbol(filho1->value,Variable);
	newsymbol->type = tolowercase(filho2->id->id);
	//Symbol* symb;
	//int add = 1;
	//here
	
	// Symbol* param = search_on_function_parmas(filho1->value,ST);
	// if(param!=NULL){
	// 	//printf("Here\n");
	// 	add = 0;
	// 	error_semantic = 1;		
	// 	printf("Line %d, column %d: Symbol %s already defined\n",filho1->id->line,filho1->id->column,filho1->value);
	// }
	
	// if(is_on_function){ //ver melhor funcao do symb
	// 	//symb = search_on_function(filho1->value,ST,tolowercase(filho2->id->id));
	// 	// if(symb!=NULL){
	// 	// 	printf("Symb num_fun %d\n",symb->num_func);
	// 	// 	printf("On_func %d\n",on_func);
	// 	// 	if(symb->num_func==on_func)
	// 	// 		printf("YES\n");
	// 	// }
	// 	symb = search_symbol(filho1->value,NULL);
	// 	//printf("Filho1->value %s filho2->id->id %s\n",filho1->value,filho2->id->id);
	// 	if(symb != NULL && symb->s_type!=Variable){ // se ja tiver sido declarado na funcao
	// 		//printf("Here2\n");
	// 		add = 0;
	// 		error_semantic = 1;		
	// 		printf("Line %d, column %d: Symbol %s already defined\n",filho1->id->line,filho1->id->column,filho1->value);
	// 	}
	// 	else if(symb != NULL && symb->s_type==Variable && symb->num_func==on_func){
	// 		//printf("Here3\n");
	// 		add = 0;
	// 		error_semantic = 1;		
	// 		printf("Line %d, column %d: Symbol %s already defined\n",filho1->id->line,filho1->id->column,filho1->value);
	// 	}	
	// }
	// else{
	// 	//printf("Filho 1 value %s\n",filho1->value);
	// 	symb = search_symbol(filho1->value,NULL);
	// 	if(symb!=NULL && symb->num_params>=1){ //se for uma funcao(nao sei se e necessario)
	// 		//printf("Here3\n");
	// 		add = 0;
	// 		error_semantic = 1;		
	// 		printf("Line %d, column %d: Symbol %s already defined\n",filho1->id->line,filho1->id->column,filho1->value);
	// 	}
	// 	//new
	// 	else if(symb!=NULL){
	// 		//printf("Here4\n");
	// 		error_semantic = 1;
	// 		add = 0;		
	// 		printf("Line %d, column %d: Symbol %s already defined\n",filho1->id->line,filho1->id->column,filho1->value);
	// 	}	
	// 	// }else if(symb!=NULL && strcmp(symb->type,tolowercase(filho2->id->id))!=0){ // se for de tipo diferente
	// 	// 	printf("Here4\n");
	// 	// 	error_semantic = 1;
	// 	// 	add = 0;		
	// 	// 	printf("Line %d, column %d: Symbol %s already defined\n",filho1->id->line,filho1->id->column,filho1->value);
	// 	// }else if(symb!=NULL) // se existir, não volta a adicionar na tabela de simbolos
	// 	// 	add = 0;
	// }
	// if(add)
		add_symbol(ST,newsymbol);
	//necessaria condicao?
	check_variable(filho2,ST);
	
}

void check_params(node* no, Symbol* ST){
	node* filho1 = no->filho;
	node* aux = filho1->filho;
	node* aux2 = NULL;
	node* aux3 = NULL;
	Symbol* newsymbol;

	while(aux!=NULL){
		if(strcmp(aux->id->id,"FuncParams")==0){
			aux2 = aux->filho;
			while(aux2!=NULL){
				aux3 = aux2->filho;
				if(aux3!=NULL){
					newsymbol = new_symbol(aux3->irmao->value,Variable);	
					newsymbol->is_param = 1;
					newsymbol->type = (char*)strdup(tolowercase(aux3->id->id));
					add_symbol(ST,newsymbol);
				}
				aux2 = aux2->irmao;
			}
		}
		aux = aux->irmao;
	}

}

Symbol* is_param(node* no, Symbol* ST,int op){
	node* filho1 = no->filho;
	node* aux = filho1->filho;
	node* aux2 = NULL;
	node* aux3 = NULL;
	Symbol* newsymbol;
	Symbol* symbolfun;
	int i=0;
	if(op)
		symbolfun = new_symbol(filho1->filho->value,FuncDecl);
	else
		symbolfun = new_symbol(filho1->filho->value,FuncTable);
	symbolfun->type = tolowercase(filho1->filho->irmao->id->id);
	while(aux!=NULL){
		//printf("Aux id: %s\n",aux->id);
		if(strcmp(aux->id->id,"FuncParams")==0){
			aux2 = aux->filho;
			while(aux2!=NULL){
				aux3 = aux2->filho;
				if(aux3!=NULL){
					symbolfun->num_params++;
					newsymbol = new_symbol(aux3->irmao->value,Variable);	
					newsymbol->is_param = 1;
					newsymbol->type = (char*)strdup(tolowercase(aux3->id->id));
					//add_symbol(ST,newsymbol);
					symbolfun->params[i++] = newsymbol;
				}
				aux2 = aux2->irmao;
			}
			add_symbol(ST,symbolfun);
		}
		aux = aux->irmao;
	}
	return symbolfun;
}

int search_variable_func_decl(char *type,Symbol* function){
	int i = 0;
	Symbol* symbol = NULL;	
	if(function!=NULL){
		Symbol *aux = function->next;
		while(aux != NULL){
			if(strcmp(aux->id, type)==0)
				i++;
			aux = aux->next;
		}
	}
	if(symbol==NULL || function==NULL){
		Symbol *aux = ST->next;
		while(aux != NULL){
			if(strcmp(aux->id, type)==0)
				i++;
			aux = aux->next;
		}
	}
	return i;
}


void check_FuncDecl(node* no, Symbol* ST){
	on_func++; //identificador da funcao
	node* filho1 = no->filho;
	node* filho2 = filho1->irmao;
	node* aux;
	// printf("Filho1 filho1 value %s\n",filho1->filho->value);
	// printf("Filho2 id %s\n",filho1->filho->irmao->id->id);
	//Symbol* symbol = search_variable(filho1->filho->value,NULL);
	//int aux2 = search_variable_func_decl(filho1->filho->value,NULL);
	//printf("Aux %d\n",aux2);
	// if(symbol!=NULL)
	// 	printf("Symbol id %s type %s\n",symbol->id,symbol->type);
	// if(symbol!=NULL){
	// 	printf("Sim\n");
	// 	if(symbol->s_type==FuncDecl)
	// 		printf("1\n");
	// 	if(symbol->s_type==FuncTable)
	// 		printf("1\n");
	// 	if(symbol->s_type==Variable)
	// 		printf("1\n");
	// 	if(symbol->s_type==Global)
	// 		printf("1\n");
	// }
	// if(symbol!=NULL && symbol->s_type!=FuncDecl){
	// 	error_semantic = 1;		
	// 	printf("Line %d, column %d: Symbol %s already defined\n",filho1->filho->id->line,filho1->filho->id->column,filho1->filho->value);
	// }
	// else if(symbol!=NULL && aux2>=2){
	// 	error_semantic = 1;		
	// 	printf("Line %d, column %d: Symbol %s already defined\n",filho1->filho->id->line,filho1->filho->id->column,filho1->filho->value);
	// }
	Symbol* newsymbol = is_param(no,ST,0);
	check_return(newsymbol);
	check_params(no,ST);
	if(filho2->filho!=NULL){
		aux = filho2->filho;
		while(aux!=NULL){
			check_variable(aux,ST);
			aux = aux->irmao;
		}
		
	}
}

void check_variable(node* terminal,Symbol *ST){
	if(strcmp(terminal->id->id,"IntLit")==0){
		check_intlit(terminal,ST);
		terminal->s_type = "int";	
	}
	if(strcmp(terminal->id->id,"RealLit")==0){
		terminal->s_type = "float32";	
	}
	else if(strcmp(terminal->id->id,"Mod")==0){
		check_mod(terminal,ST);
	}
	else if(strcmp(terminal->id->id,"Add")==0 || strcmp(terminal->id->id,"Sub")==0 || strcmp(terminal->id->id,"Mul")==0 || strcmp(terminal->id->id,"Div")==0){
		check_addsubmultdiv(terminal,ST);
	}
	else if(strcmp(terminal->id->id,"Eq")==0 || strcmp(terminal->id->id,"Ne")==0 || strcmp(terminal->id->id,"Lt")==0 || strcmp(terminal->id->id,"Le")==0 || strcmp(terminal->id->id,"Ge")==0 || strcmp(terminal->id->id,"Gt")==0)
		check_eq_ne_lt_le_ge(terminal,ST);
	else if(strcmp(terminal->id->id,"Or")==0 || strcmp(terminal->id->id,"And")==0)
		check_and_or(terminal,ST);
	else if(strcmp(terminal->id->id,"Minus")==0 || strcmp(terminal->id->id,"Not")==0 || strcmp(terminal->id->id,"Plus")==0)
		check_minusplusnot(terminal,ST);
	else if(strcmp(terminal->id->id,"Id")==0){
		check_id(terminal,ST);
	}
	else if(strcmp(terminal->id->id,"VarDecl")==0){
		check_VarDecl(terminal,ST,1);
	}
	else if(strcmp(terminal->id->id,"If")==0 || strcmp(terminal->id->id,"For")==0){
		check_if_for(terminal,ST);
	}
	else if(strcmp(terminal->id->id,"Return")==0 || strcmp(terminal->id->id,"Block")==0 || strcmp(terminal->id->id,"Print")==0){
		check_childs(terminal,ST);
	}
	else if(strcmp(terminal->id->id,"ParseArgs")==0 ){
		check_parse_args(terminal,ST);
	}
	else if(strcmp(terminal->id->id,"Assign")==0){
		check_addsubmultdiv(terminal,ST);
	}
	else if(strcmp(terminal->id->id,"Call")==0){
		check_call(terminal,ST);
	}
}
void check_parse_args(node* no,Symbol* ST){
	node* aux = no->filho;
	//node* filho1 = no->filho;
	//node* filho2 = filho1->irmao;
	while(aux!=NULL){
		check_variable(aux,ST);
		aux = aux->irmao;
	}

	 // if(strcmp(filho1->s_type,"int")!=0){
	 // 	printf("Line %d, column %d: Operator strconv.Atoi cannot be applied to types %s, %s\n",no->id->line,no->id->column, filho1->s_type,filho2->s_type);
	 // }
	 // else{
	 // 	if(strcmp(filho2->s_type,"int")!=0 && strcmp(filho2->s_type,"string")){
	 // 		printf("Line %d, column %d: Operator strconv.Atoi cannot be applied to types %s, %s\n",no->id->line,no->id->column, filho1->s_type,filho2->s_type);
	 // 	}
	 // }
	no->s_type = "int";
}

void check_intlit(node* no,Symbol* ST){
	int conf = 1;
	if(no->value[0]=='0'){
		if(((int)(no->value[1])<48 || (int)(no->value[1])>55) && strlen(no->value)>1){
			conf = 0;
		}
		else{
			for(int i=2;i<strlen(no->value);i++){
				if(((int)(no->value[i])<48 || (int)(no->value[i])>55)){
					conf = 0;
				}
			}
		}
	}
	// if(!conf){
	// 	error_semantic=1;
	// 	printf("Line %d, column %d: Invalid octal constant %s\n",no->id->line,no->id->column,no->value);
	// }
}

void check_call(node* no,Symbol* ST){
	node* aux = no->filho;
	node* id = aux;
	aux=aux->irmao;
	while(aux!=NULL){
		check_variable(aux,ST);
		aux = aux->irmao;
	}	
	check_id_call(id,ST);
	no->s_type = no->filho->s_type;
}

void check_childs(node* terminal,Symbol* ST){
	node* aux = terminal->filho;
	while(aux!=NULL){
		check_variable(aux,ST);
		aux = aux->irmao;
	}	 
}

void check_if_for(node* no, Symbol* ST){
	node* aux = no->filho;
	while(aux!=NULL){
		check_variable(aux,ST);
		aux = aux->irmao;
	}
	// if(strcmp(no->id->id,"If")==0){
	// 	if(strcmp(no->filho->s_type,"bool")!=0){
	// 		error_semantic = 1;
	// 		printf("Line %d, column %d: Incompatible type %s in %s statement\n",no->id->line,no->id->column,no->filho->s_type,tolowercase(no->id->id));
	// 	}
	// }
	// else{
	// 	if(strcmp(no->filho->id->id,"Lt")!=0 && strcmp(no->filho->id->id,"Gt")!=0 && strcmp(no->filho->id->id,"Le")!=0 && strcmp(no->filho->id->id,"Ge")!=0 && strcmp(no->filho->s_type,"bool")!=0 && strcmp(no->filho->id->id,"Block")!=0){
	// 		error_semantic = 1;
	// 		printf("Line %d, column %d: Incompatible type %s in %s statement\n",no->id->line,no->id->column,no->filho->s_type,tolowercase(no->id->id));
	// 	}
	// }
}

void check_return(Symbol* ST){
	Symbol* newsymbol = new_symbol("return",Return);
	newsymbol->type = (char*)strdup(ST->type);
	add_symbol(ST,newsymbol);
}


void check_mod(node* terminal,Symbol* ST){
    node* aux = terminal->filho;
    //node* filho1 = aux;
    //node* filho2 = aux->irmao;
    while(aux!=NULL){
    	check_variable(aux,ST);
    	aux = aux->irmao;
    }

   //  if(strcmp(filho1->s_type,"int")==0 && strcmp(filho2->s_type,"int")==0){
   //      terminal->s_type = (char*)strdup(filho1->s_type);
   //  }
   //  else{
   //      error_semantic = 1;
   //      printf("Line %d, column %d: Operator %% cannot be applied to types %s, %s\n",terminal->id->line,terminal->id->column, filho1->s_type,filho2->s_type);
 		// terminal->s_type = (char*)strdup("undef");
   //  }
}

void check_addsubmultdiv(node* terminal,Symbol* ST){ 
    node* aux = terminal->filho;
    node* filho1 = aux;
    //node* filho2 = filho1->irmao;

    while(aux!=NULL){
    	check_variable(aux,ST);
    	aux=aux->irmao;
    }

 //    if(strcmp(filho1->s_type,filho2->s_type)!=0){
 //        error_semantic = 1;
 //        if(strcmp(terminal->id->id,"Assign")==0){
 //        	 printf("Line %d, column %d: Operator = cannot be applied to types %s, %s\n",terminal->id->line,terminal->id->column, filho1->s_type,filho2->s_type);
 //        	 terminal->s_type = (char*)strdup("undef");
 //        }
 //        else if(strcmp(terminal->id->id,"Add")==0){
 //            printf("Line %d, column %d: Operator + cannot be applied to types %s, %s\n",terminal->id->line,terminal->id->column, filho1->s_type,filho2->s_type);
 //            terminal->s_type = (char*)strdup("undef");
 //        }
 
 //        else if(strcmp(terminal->id->id,"Sub")==0){
 //            printf("Line %d, column %d: Operator - cannot be applied to types %s, %s\n",terminal->id->line,terminal->id->column, filho1->s_type,filho2->s_type);
 //            terminal->s_type = (char*)strdup("undef");
 //        }

 //        else if(strcmp(terminal->id->id,"Mul")==0){
 //            printf("Line %d, column %d: Operator * cannot be applied to types %s, %s\n",terminal->id->line,terminal->id->column, filho1->s_type,filho2->s_type);
 //            terminal->s_type = (char*)strdup("undef");
 //        }
       
 //        else{
 //            printf("Line %d, column %d: Operator / cannot be applied to types %s, %s\n",terminal->id->line,terminal->id->column, filho1->s_type,filho2->s_type);
 //            terminal->s_type = (char*)strdup("undef");
 //        }
 
 //    }else{
 //    	if(strcmp(filho1->s_type,"bool")==0){
	//     	if(strcmp(terminal->id->id,"Add")==0){
	//             printf("Line %d, column %d: Operator + cannot be applied to types %s, %s\n",terminal->id->line,terminal->id->column, filho1->s_type,filho2->s_type);
	//             terminal->s_type = (char*)strdup("undef");
	//     	}
	 
	//         else if(strcmp(terminal->id->id,"Sub")==0){
	//             printf("Line %d, column %d: Operator - cannot be applied to types %s, %s\n",terminal->id->line,terminal->id->column, filho1->s_type,filho2->s_type);
	//             terminal->s_type = (char*)strdup("undef");
	//         }
	       
	//         else if(strcmp(terminal->id->id,"Div")==0){
	//             printf("Line %d, column %d: Operator / cannot be applied to types %s, %s\n",terminal->id->line,terminal->id->column, filho1->s_type,filho2->s_type);
	//             terminal->s_type = (char*)strdup("undef");
	//         }

	//         else if(strcmp(terminal->id->id,"Mul")==0){
 //            	printf("Line %d, column %d: Operator * cannot be applied to types %s, %s\n",terminal->id->line,terminal->id->column, filho1->s_type,filho2->s_type);
 //            	terminal->s_type = (char*)strdup("undef");
	//         }
 //            else
 //            	terminal->s_type = (char*)strdup(filho1->s_type);
 //    	}
 //    	else if(strcmp(filho1->s_type,"string")==0){
 //    		if(strcmp(terminal->id->id,"Sub")==0){
	//             printf("Line %d, column %d: Operator - cannot be applied to types %s, %s\n",terminal->id->line,terminal->id->column, filho1->s_type,filho2->s_type);
	//             terminal->s_type = (char*)strdup("undef");
 //    		}
	       
	//         else if(strcmp(terminal->id->id,"Div")==0){
	//             printf("Line %d, column %d: Operator / cannot be applied to types %s, %s\n",terminal->id->line,terminal->id->column, filho1->s_type,filho2->s_type);
	//             terminal->s_type = (char*)strdup("undef");
	//         }

	//         else if(strcmp(terminal->id->id,"Mul")==0){
 //            	printf("Line %d, column %d: Operator * cannot be applied to types %s, %s\n",terminal->id->line,terminal->id->column, filho1->s_type,filho2->s_type);
 //            	terminal->s_type = (char*)strdup("undef");
	//         }
 //            else
 //            	terminal->s_type = (char*)strdup(filho1->s_type);
 //    	}
 //    	else{
 //    		terminal->s_type = (char*)strdup(filho1->s_type);
 //    	}	
	// }
	terminal->s_type = (char*)strdup(filho1->s_type);
}

void check_eq_ne_lt_le_ge(node* terminal, Symbol* function){
    node* aux = terminal->filho;
    //node* filho1 = aux;
    //node* filho2 = filho1->irmao;

    while(aux!=NULL){
    	check_variable(aux,ST);
    	aux=aux->irmao;
    }

 //    if(strcmp(filho1->s_type,filho2->s_type)!=0){
 //        error_semantic = 1;
 //        if(strcmp(terminal->id->id,"Eq")==0)
 //            printf("Line %d, column %d: Operator == cannot be applied to types %s, %s\n",terminal->id->line,terminal->id->column, filho1->s_type,filho2->s_type);
       
 //        else if(strcmp(terminal->id->id,"Ne")==0)
 //            printf("Line %d, column %d: Operator != cannot be applied to types %s, %s\n",terminal->id->line,terminal->id->column, filho1->s_type,filho2->s_type);
       
 //        else if(strcmp(terminal->id->id,"Lt")==0)
 //            printf("Line %d, column %d: Operator < cannot be applied to types %s, %s\n",terminal->id->line,terminal->id->column, filho1->s_type,filho2->s_type);
 
 //        else if(strcmp(terminal->id->id,"Gt")==0)
 //            printf("Line %d, column %d: Operator > cannot be applied to types %s, %s\n",terminal->id->line,terminal->id->column, filho1->s_type,filho2->s_type);
   
 //        else if(strcmp(terminal->id->id,"Le")==0)
 //            printf("Line %d, column %d: Operator <= cannot be applied to types %s, %s\n",terminal->id->line,terminal->id->column, filho1->s_type,filho2->s_type);
       
 //        else if(strcmp(terminal->id->id,"Ge")==0)
 //            printf("Line %d, column %d: Operator >= cannot be applied to types %s, %s\n",terminal->id->line,terminal->id->column, filho1->s_type,filho2->s_type);
	// }
 //    else{
 //    	if(strcmp(filho1->s_type,"bool")==0){
 //    		if(strcmp(terminal->id->id,"Lt")==0)
 //            	printf("Line %d, column %d: Operator < cannot be applied to types %s, %s\n",terminal->id->line,terminal->id->column, filho1->s_type,filho2->s_type);
 
	//         else if(strcmp(terminal->id->id,"Gt")==0)
	//             printf("Line %d, column %d: Operator > cannot be applied to types %s, %s\n",terminal->id->line,terminal->id->column, filho1->s_type,filho2->s_type);
	   
	//         else if(strcmp(terminal->id->id,"Le")==0)
	//             printf("Line %d, column %d: Operator <= cannot be applied to types %s, %s\n",terminal->id->line,terminal->id->column, filho1->s_type,filho2->s_type);
	       
	//         else if(strcmp(terminal->id->id,"Ge")==0)
	//             printf("Line %d, column %d: Operator >= cannot be applied to types %s, %s\n",terminal->id->line,terminal->id->column, filho1->s_type,filho2->s_type);
 //    	}
 //    }
    terminal->s_type = (char*)strdup("bool");
}

void check_and_or(node* terminal, Symbol* ST){
    node* aux = terminal->filho;
    //node* filho1 = aux;
    //node* filho2 = filho1->irmao;

    while(aux!=NULL){
    	check_variable(aux,ST);
    	aux=aux->irmao;
    }
 
    // if(strcmp(filho1->s_type,"bool")!=0){
    //    	error_semantic = 1;
    //    	if(strcmp(terminal->id->id,"And")==0){
    //         printf("Line %d, column %d: Operator && cannot be applied to types %s, %s\n",terminal->id->line,terminal->id->column,filho1->s_type,filho2->s_type);
    //         terminal->s_type = "bool";
    //    	}
    //    	else{
    //         printf("Line %d, column %d: Operator || cannot be applied to types %s, %s\n",terminal->id->line,terminal->id->column,filho1->s_type,filho2->s_type);
    //         terminal->s_type = "bool";
    //    	}
    // }
    // else
    	terminal->s_type = "bool"; 
}

void check_minusplusnot(node* terminal,Symbol* ST){
 	node* filho1;
    filho1 = terminal->filho;
 
    check_variable(filho1,ST);

 //    if(strcmp(filho1->s_type,"int")!=0 && strcmp(filho1->s_type,"float32")!=0 && strcmp(terminal->id->id,"Not")!=0){
 //        error_semantic = 1;
 //        if(strcmp(terminal->id->id,"Minus")==0){
 //            printf("Line %d, column %d: Operator - cannot be applied to type %s\n",terminal->id->line,terminal->id->column,filho1->s_type);
 //        }
 //        else if(strcmp(terminal->id->id,"Plus")==0){
 //            printf("Line %d, column %d: Operator + cannot be applied to type %s\n",terminal->id->line,terminal->id->column, filho1->s_type);
 //        }
 //    }

 //    else if(strcmp(filho1->s_type,"bool")!=0 && strcmp(terminal->id->id,"Not")==0){
 //    	printf("Line %d, column %d: Operator ! cannot be applied to type %s\n",terminal->id->line,terminal->id->column, filho1->s_type);
 //    	terminal->s_type = (char*)strdup("bool");	
 //    }

 //    else if(strcmp(terminal->id->id,"Not")==0)
	// 	terminal->s_type = (char*)strdup("bool");

	// else        
		terminal->s_type = filho1->s_type;
}

void check_id(node* terminal, Symbol* function){
    Symbol* symbol = search_variable(terminal->value,function);
    if(symbol!=NULL){
	terminal->s_type = (char*)strdup(symbol->type);
	}
    // }else{
    //     error_semantic =1;
    //     printf("Line %d, column %d: Cannot find symbol %s\n",terminal->id->line,terminal->id->column,terminal->value);
    //     terminal->s_type = (char*)strdup("undef");
    // }
}

void check_id_call(node* terminal, Symbol* function){
	node* aux;
	Symbol* params;
	int error = 0;
	int i=0;

	Symbol* symbol = search_variable(terminal->value,function);
	if(terminal->irmao!=NULL){
		params = new_symbol("Temp",FuncTable);
		aux = terminal->irmao;
		while(aux!=NULL){
			params->num_params++;
			params->params[i] = new_symbol("Temp",FuncTable);
			params->params[i]->type=aux->s_type;
			i++;
			aux=aux->irmao;
		}
	}
	else{
		params = new_symbol("Temp",FuncTable);
		params->num_params = 0;
	}

	if(symbol!=NULL){
		if(symbol->num_params==params->num_params){
			for(int i=0;i<symbol->num_params;i++){
				if(strcmp(symbol->params[i]->type,params->params[i]->type)!=0){
					error = 1;
				}
			}
			//if(error==0){
				terminal->s_type=(char*)strdup(symbol->type);
				terminal->is_function=1;
				for(int i=0;i<symbol->num_params;i++){
					if(strcmp(symbol->params[i]->type,"null")!=0){
						terminal->params[i]=symbol->params[i]->type;
						terminal->num_params=i;
					}
				}
			//}
		}
		else{
			error = 1;
		}
	}
	else{
		error = 1;
	}
	if(error){
    		error_semantic =1;
    		node* aux=terminal->irmao;
    		char params[100];
    		params[0] = '\0';
    		int i = 1;
    		while(aux!=NULL){
    			if(i){
    				sprintf(params,"%s",aux->s_type);
    				i=0;
    			}
    			else{
    				strcat(params,",");
    				strcat(params,aux->s_type);
    			}
    			aux=aux->irmao;
    		}
        	// printf("Line %d, column %d: Cannot find symbol %s(%s)\n",terminal->id->line,terminal->id->column,terminal->value,params);
        	// terminal->s_type = (char*)strdup("undef");
    	}
	//printf("saiu\n\n");
}

Symbol* search_variable(char *type,Symbol* function){
	Symbol* symbol = NULL;	
	if(function!=NULL){
		Symbol *aux = function->next;
		while(aux != NULL){
			if(strcmp(aux->id, type)==0)
				symbol =  aux;
			aux = aux->next;
		}
	}
	if(symbol==NULL || function==NULL){
		Symbol *aux = ST->next;
		while(aux != NULL){
			if(strcmp(aux->id, type)==0)
				symbol  = aux;
			aux = aux->next;
		}
	}
	return symbol;
}


void print_symbol_table(){
	Symbol *child_symbols;
	Symbol *cur_symbol = ST;
	while (cur_symbol !=NULL){
		print_symbol(cur_symbol);
		cur_symbol = cur_symbol->next;
	}
	cur_symbol = ST->next;
	while(cur_symbol !=NULL){
		if(cur_symbol->func_definition !=NULL){
			child_symbols = cur_symbol->func_definition;
			while(child_symbols!=NULL){
				print_symbol(child_symbols);
				child_symbols = child_symbols->next;
			}
		}
		cur_symbol = cur_symbol->next;
	}

}
void print_symbol(Symbol* symbol){
	int i;
	char aux[1000];
	strcpy(aux,"");
	if(symbol->s_type==Global){
		printf("===== Global Symbol Table =====\n");
	}
	else if(symbol->s_type==FuncDecl){
		printf("%s\t(",symbol->id);
		if(symbol->num_params>0){
			printf("%s",symbol->params[0]->type);
			for(i=1;i<symbol->num_params;i++){
				printf(",%s",symbol->params[i]->type);
			}
		}
		if(strcmp(symbol->type,"null")!=0)
			printf(")\t%s\n",symbol->type);
		else
			printf(")\tnone\n");
	}
	else if(symbol->s_type==Variable){
		printf("%s\t\t%s",symbol->id,symbol->type);
		if(symbol->is_param)
			printf("\tparam");
		printf("\n");
	}
	else if(symbol->s_type==Return){
		if(strcmp(symbol->type,"null")!=0)
			printf("return\t\t%s\n",symbol->type);
		else
			printf("return\t\tnone\n");
	}
	else if(symbol->s_type==FuncTable){
		for(i=0;i<symbol->num_params;i++){
			if(i==0){
				sprintf(aux,"%s",symbol->params[i]->type);
			}
			else{
				strcat(aux,",");
				strcat(aux,symbol->params[i]->type);
			}
		}
		printf("\n===== Function %s(%s) Symbol Table =====\n",symbol->id,aux);
	}
}
