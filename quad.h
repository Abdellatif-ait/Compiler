#define MAX_QUADRUPLES 1000

struct Quadruple
{
    char op[255];
    void *arg1;
    void *arg2;
    void *result;
};

extern struct Quadruple quadruples[MAX_QUADRUPLES];

int nextquad();
void initQuad();
void gen(char op[], void *arg1, void *arg2, void *result);
void backpatch(int quad, void *result);
void printQuad();