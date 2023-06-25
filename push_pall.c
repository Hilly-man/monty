#include "monty.h"

/**
 * initStack - Initialize the stack
 * @stack: Pointer to the Stack
 * Description: This function initializes
 * the stack by setting the top value to -1
 */

void initStack(Stack *stack)
{
	stack->top = -1;
}

/**
 * push - Push an element into the stack
 * @stack: Pointer to the Stack
 * @value: The value to be pushed into the stack
 * Description: This function adds an element to the stack.
 */

void push(Stack *stack, int value)
{
	if (stack->top == STACK_SIZE - 1)
	{
		printf("Stack Overflow\n");
		exit(EXIT_FAILURE);
	}
	stack->data[++stack->top] = value;
}

/**
 * pall - Print all the elements in the stack
 * @stack: Pointer to the Stack
 * Description: This function prints all the values in the stack
 */

void pall(Stack *stack)
{
	int i;

	for (i = stack->top; i >= 0; i--)
	printf("%d\n", stack->data[i]);
}

/**
* main - monty code interpreter
* Return: 0 on success
* Description: This is the main function of the
* program that serves as a Monty code interpreter.
*/

int main(void)
{
	Stack stack;

	initStack(&stack);

	push(&stack, 1);
	push(&stack, 2);
	push(&stack, 3);
	pall(&stack);

	return (0);
}
