#include "quad.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Quadruple quadruples[MAX_QUADRUPLES];
int next_quad = 0;

int nextquad() {
    return next_quad++;
}

void gen(char* op, int arg1, int arg2, int result) {
    strcpy(quadruples[next_quad].op ,op);
    quadruples[next_quad].arg1 = arg1;
    quadruples[next_quad].arg2 = arg2;
    quadruples[next_quad].result = result;
    next_quad++;
}

void backpatch(int quad, int result) {
    quadruples[quad].result = result;
}
