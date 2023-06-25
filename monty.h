#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

#define STACK_SIZE 1024

typedef struct Stack {
    int data[STACK_SIZE];
    int top;
} Stack;

void initStack(Stack* stack);
void push(Stack* stack, int value);
void pall(Stack* stack);

#endif /* MONTY_H */
