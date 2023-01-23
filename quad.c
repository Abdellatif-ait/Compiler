#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "quad.h"

struct Quadruple quadruples[MAX_QUADRUPLES];
int next_quad = 0;

int nextquad()
{
    return next_quad++;
}

void initQuad()
{
    for (int i = 0; i < MAX_QUADRUPLES; i++)
    {
        strcpy(quadruples[i].op, "");
        quadruples[i].arg1 = NULL;
        quadruples[i].arg2 = NULL;
        quadruples[i].result = NULL;
    }
}

void gen(char op[], void *arg1, void *arg2, void *result)
{
    strcpy(quadruples[next_quad].op, op);
    quadruples[next_quad].arg1 = arg1;
    quadruples[next_quad].arg2 = arg2;
    quadruples[next_quad].result = result;
    next_quad++;
}

void backpatch(int quad, void *result)
{
    quadruples[quad].result = result;
}

void printQuad()
{
    printf("%s", "---- Quadruples:---- \n");
    for (int i = 0; i < next_quad; i++)
    {
        printf("instruction: %s  || op1: %p  || op2: %p  || result: %p \n", quadruples[i].op, quadruples[i].arg1, quadruples[i].arg2, quadruples[i].result);
    }
}