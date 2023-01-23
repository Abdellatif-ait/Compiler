%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include "tableSymbol.h"
// #include "quad.h"



int yylex();
int yyerror();

%}
%union {
    int integer;
    float real;
    char string[255];
    struct Symbol* symbol;
}
%token <string>_SCAN <string>_PRINT 
%token <string>_IF <string>_ELSE 
%token <string>_COMMA <string>_SEMICOLON <string>_DOT
%token <string>_INT <string>_FLOAT <string>_STRING <string>_BOOL <string>_TABLEAU <string>_NULL
%token <string>_FUNCTION <string>_CONST <string>_CLASS <string>_RETURN
%token <string>_FOR <string>_WHILE
%token <string>_OPEN_PARENTHESIS <string>_CLOSE_PARENTHESIS <string>_CURLY_OPEN_BRACKET <string>_CURLY_CLOSE_BRACKET <string>_OPEN_BRACKET <string>_CLOSE_BRACKET
%token <string>_ID
%token <string>_EQUAL <string>_NON_EQUAL <string>_AND <string>_OR <string>_NOT <string>_INFERIOR <string>_SUPERIOR <string>_INFERIOR_EQUAL <string>_SUPERIOR_EQUAL
%token <string>_ADD <string>_SUB <string>_MULT <string>_DIV <string>_MOD <string>_POW 
%token <string>_ASSIGN
%token <integer>_INTVALUE <real>_FLOATVALUE <string>_BOOLVALUE <string>_STRINGVALUE
%token <string>_VOID
%start PROGRAM
%left _ADD _SUB _MULT _DIV _MOD 
%right _POW _NOT
%left _AND _OR _INFERIOR _SUPERIOR  _INFERIOR_EQUAL _SUPERIOR_EQUAL _EQUAL _NON_EQUAL

%type <symbol>EXPRESSION <symbol>DECLARATION_STATEMENT <symbol>FUNCTION_INVOCATION_STATEMENT <symbol>PARAMS <symbol>FOR_STATEMENT <symbol>IF_STATEMENT <symbol>ELSE_STATEMENT <symbol>PROGRAM
%type <string>TYPE 
%%

PROGRAM: PROGRAM LINE {
 }
| LINE {
 }
 ;
LINE: STATEMENT _SEMICOLON {
}
 ;
STATEMENT: DECLARATION_STATEMENT
| ELSE_STATEMENT
| ASSIGN_STATEMENT
| FOR_STATEMENT
| WHILE_STATEMENT
| FUNCTION_STATEMENT
| RETURN_STATEMENT
| PRINT_STATEMENT
| SCAN_STATEMENT
| EXPRESSION_STATEMENT
| CLASS_STATEMENT
| IF_STATEMENT
;
IF_STATEMENT: _IF _OPEN_PARENTHESIS EXPRESSION _CLOSE_PARENTHESIS _CURLY_OPEN_BRACKET PROGRAM _CURLY_CLOSE_BRACKET {
    // int if_start = nextquad();
    // backpatch($3->falselist, if_start);
}
| _IF _OPEN_PARENTHESIS EXPRESSION _CLOSE_PARENTHESIS _CURLY_OPEN_BRACKET PROGRAM _CURLY_CLOSE_BRACKET ELSE_STATEMENT{
    // int if_start = nextquad();
    // backpatch($3->falselist, if_start);
    // backpatch($6->place, nextquad());
}
;
ELSE_STATEMENT: _ELSE _CURLY_OPEN_BRACKET PROGRAM _CURLY_CLOSE_BRACKET {
    // int else_start = nextquad();
    // backpatch($3->nextlist, else_start);
}
;
ASSIGN_STATEMENT: _ID _ASSIGN EXPRESSION {
    // printf('assign statement');
    // struct Symbol* var= lookup_symbol($1);
    // if(var == NULL){
    //     printf("Variable %s not declared \n", $1);
    //     exit(1);
    // }
    // if(var->type != $3->type){
    //     printf("Type mismatch in assignment \n");
    //     exit(1);
    // }
    // gen("EQ", $3->place, -1, var->place);
}
;
FOR_STATEMENT: _FOR _OPEN_PARENTHESIS DECLARATION_STATEMENT _SEMICOLON EXPRESSION _SEMICOLON EXPRESSION _CLOSE_PARENTHESIS _CURLY_OPEN_BRACKET PROGRAM _CURLY_CLOSE_BRACKET {
    // int for_start = nextquad();
    // backpatch($3->nextlist, for_start);
    // int for_end = nextquad();
    // gen("jump", -1, -1, for_start);
    // backpatch($5->truelist, for_end);
}
;
WHILE_STATEMENT: _WHILE _OPEN_PARENTHESIS EXPRESSION _CLOSE_PARENTHESIS _CURLY_OPEN_BRACKET PROGRAM _CURLY_CLOSE_BRACKET{
    // backpatch($3->truelist, nextquad());
    // backpatch($5->falselist, nextquad());
}
;
FUNCTION_STATEMENT: _FUNCTION TYPE _ID _OPEN_PARENTHESIS _CLOSE_PARENTHESIS _CURLY_OPEN_BRACKET PROGRAM _CURLY_CLOSE_BRACKET{
    // backpatch($7->falselist, nextquad());
}
| _FUNCTION TYPE _ID _OPEN_PARENTHESIS PARAMS _CLOSE_PARENTHESIS _CURLY_OPEN_BRACKET PROGRAM _CURLY_CLOSE_BRACKET{
    // backpatch($8->falselist, nextquad());
}
;
TYPE: _INT{
    strcpy($$,$1);
} 
| _FLOAT {
    strcpy($$,$1);
} 
| _STRING{
    strcpy($$,$1);
} 
| _BOOL{
    strcpy($$,$1);
} 
| _VOID {
    strcpy($$,$1);
}
;
PARAMS: DECLARATION_STATEMENT {
    $$ = $1;
}
| PARAMS _COMMA DECLARATION_STATEMENT {
    $$ = $1;
}
| PARAMS _COMMA _ID {
    $$ = $1;
}
| _ID {
    $$ = $1;
}
;
RETURN_STATEMENT: _RETURN EXPRESSION
;
PRINT_STATEMENT: _PRINT _OPEN_PARENTHESIS EXPRESSION _CLOSE_PARENTHESIS
;
SCAN_STATEMENT: _SCAN _OPEN_PARENTHESIS _ID _CLOSE_PARENTHESIS
;
EXPRESSION_STATEMENT: EXPRESSION
;
CLASS_STATEMENT: _CLASS _ID _CURLY_OPEN_BRACKET PROGRAM _CURLY_CLOSE_BRACKET
;
DECLARATION_STATEMENT: _INT _ID {
    // printf('declaration int statement');
    // struct Symbol* var = lookup_symbol($2);
    // if(var != NULL){
    //     printf("Variable %s already declared \n", $2);
    //     exit(1);
    // }
    // int* value = malloc(sizeof(int));
    // *value = 0;
    // add_symbol($2, INT, 0, value);
}
| _FLOAT _ID {
    // struct Symbol* var = lookup_symbol($2);
    // if(var != NULL){
    //     printf("Variable %s already declared \n", $2);
    //     exit(1);
    // }
    // float* value = malloc(sizeof(float));
    // *value = 0;
    // add_symbol($2, REAL, 0, value);
}
| _STRING _ID {
    // struct Symbol* var = lookup_symbol($2);
    // if(var != NULL){
    //     printf("Variable %s already declared \n", $2);
    //     exit(1);
    // }
    // char* value = malloc(sizeof(char)*100);
    // strcpy(value, "");
    // add_symbol($2, STRING, 0, value);
}
| _BOOL _ID {
    // struct Symbol* var = lookup_symbol($2);
    // if(var != NULL){
    //     printf("Variable %s already declared \n", $2);
    //     exit(1);
    // }
    // bool* value = malloc(sizeof(bool));
    // *value = false;
    // add_symbol($2, BOOL, 0, value);
}
| _TABLEAU _ID {
    // struct Symbol* var = lookup_symbol($2);
    // if(var != NULL){
    //     printf("Variable %s already declared \n", $2);
    //     exit(1);
    // }
    // int* value = malloc(sizeof(int));
    // *value = 0;
    // add_symbol($2, TABLEAU, 0, value);
}
| _ID _ID{
  // TODO
}
| _INT _ID _ASSIGN EXPRESSION {
    // struct Symbol* var = lookup_symbol($2);
    // if(var != NULL){
    //     printf("Variable %s already declared \n", $2);
    //     exit(1);
    // }
    // if($4->type != INT){
    //     printf("Type mismatch in assignment \n");
    //     exit(1);
    // }
    // int* value = malloc(sizeof(int));
    // *value = $4->value;
    // add_symbol($2, INT, 0, value);
}
| _FLOAT _ID _ASSIGN EXPRESSION {
    // struct Symbol* var = lookup_symbol($2);
    // if(var != NULL){
    //     printf("Variable %s already declared \n", $2);
    //     exit(1);
    // }
    // if($4->type != REAL){
    //     printf("Type mismatch in assignment \n");
    //     exit(1);
    // }
    // add_symbol($2, REAL, 0, 0);
    // gen("EQ", $2, $4->value, -1);
}
| _STRING _ID _ASSIGN EXPRESSION {
    // struct Symbol* var = lookup_symbol($2);
    // if(var != NULL){
    //     printf("Variable %s already declared \n", $2);
    //     exit(1);
    // }
    // if($4->type != STRING){
    //     printf("Type mismatch in assignment \n");
    //     exit(1);
    // }
    // char* value = malloc(sizeof(char)*100);
    // strcpy(value, $4->value);
    // add_symbol($2, STRING, 0, value);
}
| _BOOL _ID _ASSIGN EXPRESSION {
    // struct Symbol* var = lookup_symbol($2);
    // if(var != NULL){
    //     printf("Variable %s already declared \n", $2);
    //     exit(1);
    // }
    // if($4->type != BOOL){
    //     printf("Type mismatch in assignment \n");
    //     exit(1);
    // }
    // bool* value = malloc(sizeof(bool));
    // *value = $4->value;
    // add_symbol($2, BOOL, 0, value);
}
| _TABLEAU _ID _ASSIGN EXPRESSION {
    // struct Symbol* var = lookup_symbol($2);
    // if(var != NULL){
    //     printf("Variable %s already declared \n", $2);
    //     exit(1);
    // }
    // if($4->type != TABLEAU){
    //     printf("Type mismatch in assignment \n");
    //     exit(1);
    // }
    // int* value = malloc(sizeof(int));
    // *value = $4->value;
    // add_symbol($2, TABLEAU, 0, value);
}
| _ID _ID _ASSIGN EXPRESSION {
    // struct Symbol* var = lookup_symbol($2);
    // if(var == NULL){
    //     printf("Variable %s not declared \n", $2);
    //     exit(1);
    // }
    // if(var->type != $4->type){
    //     printf("Type mismatch in assignment \n");
    //     exit(1);
    // }
    /////////////////////////////// TODO 
}
| _CONST _ID _ASSIGN EXPRESSION {
    //const declaration
    // struct Symbol* var = lookup_symbol($2);
    // if(var != NULL){
    //     printf("Variable %s already declared \n", $2);
    //     exit(1);
    // }
    // switch ($4->type)
    // {
    // case INT:
    //     add_symbol($2, INT, 0, $4->value);
    //     break;
    // case REAL:
    //     add_symbol($2, REAL, 0, $4->value);
    //     break;
    // case STRING:
    //     add_symbol($2, STRING, 0, $4->value);
    //     break;
    // case BOOL:
    //     add_symbol($2, BOOL, 0, $4->value);
    //     break;
    // case TABLEAU:
    //     add_symbol($2, TABLEAU, 0, $4->value);
    //     break;
    // default:
    //     break;
    // }
}
;

EXPRESSION: EXPRESSION _ADD EXPRESSION { 
    // if($1->type != $3->type){
    //     printf("Type mismatch in addition \n");
    //     exit(1);
    // }
    // int quad= nextquad();
    // gen("ADD", $1->place, $3->place, quad);
}
| EXPRESSION _SUB EXPRESSION { 
//   if($1->type != $3->type){
//         printf("Type mismatch in addition \n");
//         exit(1);
//     }
//     int quad= nextquad();
    // gen("SUB", $1->place, $3->place, quad);
}
| EXPRESSION _MULT EXPRESSION { 
//   if($1->type != $3->type){
//         printf("Type mismatch in addition \n");
//         exit(1);
//     }
//     int quad= nextquad();
    // gen("MUL", $1->place, $3->place, quad);
}
| EXPRESSION _DIV EXPRESSION { 
//   if($1->type != $3->type){
//         printf("Type mismatch in addition \n");
//         exit(1);
//     }
//     int quad= nextquad();
    // gen("DIV", $1->place, $3->place, quad);
}
| EXPRESSION _MOD EXPRESSION { 
//   if($1->type != $3->type){
//         printf("Type mismatch in addition \n");
//         exit(1);
//     }
//     int quad= nextquad();
    // gen("MOD", $1->place, $3->place, quad);
}
| EXPRESSION _POW EXPRESSION { 
//   if($1->type != $3->type){
//         printf("Type mismatch in addition \n");
//         exit(1);
//     }
//     int quad= nextquad();
    // gen("POW", $1->place, $3->place, quad);
}
| EXPRESSION _AND EXPRESSION { 
//   if($1->type != $3->type){
//         printf("Type mismatch in addition \n");
//         exit(1);
//     }
//     int quad= nextquad();
    // gen("AND", $1->place, $3->place, quad);
}
| EXPRESSION _OR EXPRESSION  { 
//   if($1->type != $3->type){
//         printf("Type mismatch in addition \n");
//         exit(1);
//     }
//     int quad= nextquad();
    // gen("OR", $1->place, $3->place, quad);
}
| EXPRESSION _INFERIOR EXPRESSION { 
//   if($1->type != $3->type){
//         printf("Type mismatch in addition \n");
//         exit(1);
//     }
//     int quad= nextquad();
    // gen("INF", $1->place, $3->place, quad);
}
| EXPRESSION _SUPERIOR EXPRESSION { 
//   if($1->type != $3->type){
//         printf("Type mismatch in addition \n");
//         exit(1);
//     }
//     int quad= nextquad();
    // gen("SUP", $1->place, $3->place, quad);
}
| EXPRESSION _INFERIOR_EQUAL EXPRESSION { 
//   if($1->type != $3->type){
//         printf("Type mismatch in addition \n");
//         exit(1);
//     }
//     int quad= nextquad();
    // gen("INFE", $1->place, $3->place, quad);
}
| EXPRESSION _SUPERIOR_EQUAL EXPRESSION { 
//   if($1->type != $3->type){
//         printf("Type mismatch in addition \n");
//         exit(1);
//     }
//     int quad= nextquad();
    // gen("SUPPE", $1->place, $3->place, quad);
}
| EXPRESSION _EQUAL EXPRESSION { 
//   if($1->type != $3->type){
//         printf("Type mismatch in addition \n");
//         exit(1);
//     }
//     int quad= nextquad();
    // gen("EQUAL", $1->place, $3->place, quad);
}
| EXPRESSION _NON_EQUAL EXPRESSION { 
//   if($1->type != $3->type){
//         printf("Type mismatch in addition \n");
//         exit(1);
//     }
//     int quad= nextquad();
    // gen("NEQUAL", $1->place, $3->place, quad);
}
| _OPEN_PARENTHESIS EXPRESSION _CLOSE_PARENTHESIS { 
    // int quad= nextquad();
    // gen("EQ", $2->place,-1, quad);
}
| _NOT EXPRESSION { 
    // int quad= nextquad();
    // gen("NOT", $2->place,-1, quad);
}
| _ID {
    // int quad= nextquad();
    // gen("EQ", $1->place,-1, quad);
}
| _INTVALUE {
    // $$->type="INT";
    // $$->value=$1;
}
| _FLOATVALUE {
    // $$->type="FLOAT";
    // $$->value=$1;
}
| _BOOLVALUE {
    // $$->type="BOOL";
}
| _STRINGVALUE {

}
| OBJECT_VALUE {
    // $$=$1;
}
| _OPEN_BRACKET TABLEVALUE _CLOSE_BRACKET {
    // $$=$2;
}
| FUNCTION_INVOCATION_STATEMENT {
    // int quad= nextquad();
    // // gen("EQ", $1->place,-1, quad);
}
| ARRAY_ELEMENT {
    // int quad= nextquad();
    // // gen("EQ", $1->place,-1, quad);
}

;
FUNCTION_INVOCATION_STATEMENT : _ID _OPEN_PARENTHESIS PARAMS _CLOSE_PARENTHESIS {
    // struct Symbol* var = lookup_symbol($1);
    // if(var == NULL){
    //     printf("Function %s not declared \n", $1);
    //     exit(1);
    // }
    // if(var->is_function != 1){
    //     printf("Variable %s is not a function \n", $1);
    //     exit(1);
    // }
    // int quad= nextquad();
    // // gen("EQ", var->place, -1, quad);
}
;
OBJECT_VALUE : OBJECT_VALUE _DOT _ID {}
| _ID _DOT _ID{}
;
ARRAY_ELEMENT : _ID _OPEN_BRACKET _INTVALUE _CLOSE_BRACKET {
    // struct Symbol* var = lookup_symbol($1);
    // if(var == NULL){
    //     printf("Variable %s not declared \n", $1);
    //     exit(1);
    // }
    
    // int quad= nextquad();
    // //gen("EQ", $1->place,-1, quad);
}
| _ID _OPEN_BRACKET _ID _CLOSE_BRACKET
| _ID _OPEN_BRACKET ARRAY_ELEMENT _CLOSE_BRACKET
;
TABLEVALUE : TABLEVALUE _COMMA EXPRESSION
| EXPRESSION_STATEMENT
;



%%
main(int argc, char **argv)
{
    init_symbol_table();
    yyparse();
  // init symbol table
    
}

yyerror(char *s)
{
  fprintf(stderr, "Error: %s\n", s);
}