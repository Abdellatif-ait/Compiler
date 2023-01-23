#define MAX_QUADRUPLES 1000

struct Quadruple {
    char* op;
    int arg1;
    int arg2;
    int result;
};

extern struct Quadruple quadruples[MAX_QUADRUPLES];

int nextquad();
void gen(char* op, int arg1, int arg2, int result);
void backpatch(int quad, int result);