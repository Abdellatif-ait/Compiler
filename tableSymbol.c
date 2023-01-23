#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tableSymbol.h"

struct SymbolTable symbol_table;

void init_symbol_table() {
    // init symbole table
    symbol_table.count = 0;
    symbol_table.scope_level = 0;
    // init symbols
    for (int i = 0; i < MAX_SYMBOLS; i++) {
        strcpy(symbol_table.symbols[i].name,"");
        symbol_table.symbols[i].type = UNDEFINED;
        symbol_table.symbols[i].value = NULL;
        symbol_table.symbols[i].scope_level = 0;
        symbol_table.symbols[i].is_function = 0;
        symbol_table.symbols[i].falselist = 0;
        symbol_table.symbols[i].nextlist = 0;
        symbol_table.symbols[i].truelist = 0;
        symbol_table.symbols[i].function_param_count = 0;
        symbol_table.symbols[i].place = 0;
        for (int j = 0; j < MAX_SYMBOLS; j++) {
            symbol_table.symbols[i].function_param_types[j] = UNDEFINED;
        }
    }
}

struct Symbol* lookup_symbol(char name[]) {
    for (int i = 0; i < symbol_table.count; i++) {
        if (strcmp(symbol_table.symbols[i].name, name) == 0 && symbol_table.symbols[i].scope_level == symbol_table.scope_level) {
            return &symbol_table.symbols[i];
        }
    }
    return NULL;
}

void add_symbol(char name[], int type, int is_function, void* value) {
    if (lookup_symbol(name)!= NULL) {
        printf("Error: Redeclaration of symbol %s\n", name);
        return;
    }
    struct Symbol symbol;
    strcpy(symbol.name,strdup(name));
    symbol.type = type;
    symbol.value = value;
    symbol.scope_level = symbol_table.scope_level;
    symbol.is_function = is_function;
    symbol.function_param_count = 0;
    symbol_table.symbols[symbol_table.count++] = symbol;
}

void enter_scope() {
    symbol_table.scope_level++;
}

void exit_scope() {
    for (int i = 0; i < symbol_table.count; i++) {
        if (symbol_table.symbols[i].scope_level == symbol_table.scope_level) {
            free(symbol_table.symbols[i].name);
            for (int j = i; j < symbol_table.count - 1; j++) {
                symbol_table.symbols[j] = symbol_table.symbols[j + 1];
            }
            symbol_table.count--;
            i--;
        }
    }
    symbol_table.scope_level--;
}

void add_function_param(char name[], int type) {
    struct Symbol* symbol = lookup_symbol(name);
    if (symbol == NULL) {
        printf("Error: Symbol %s not found\n", name);
        return;
    }
    symbol->function_param_types[symbol->function_param_count++] = type;
}
