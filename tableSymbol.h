#define MAX_SYMBOLS 100

enum Type
{
    INT,
    REAL,
    BOOL,
    STRING,
    VOID,
    OBJECT,
    UNDEFINED,
    TABLEAU
};

struct Symbol
{
    char name[255];
    int type;
    void *value;
    int scope_level;
    int is_function;
    int falselist;
    int nextlist;
    int truelist;
    int function_param_count;
    int function_param_types[MAX_SYMBOLS];
    int place;
};

struct SymbolTable
{
    struct Symbol symbols[MAX_SYMBOLS];
    int count;
    int scope_level;
};

extern struct SymbolTable symbol_table;

void init_symbol_table();

struct Symbol *lookup_symbol(char name[]);

void add_symbol(char name[], int type, int isFunction, void *value);

void enter_scope();

void exit_scope();

void add_function_param(char name[], int type);

void print_table();
