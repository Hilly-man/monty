#include "monty.h"

/**
 * f_pall - prints stack
 * @head: head of stack
 * @counter: not used
 * Return: nothing
*/

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
	{
		return;
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

int main()
{
	stack_t* stack = NULL;
	unsigned int counter = 0;

	f_pall(&stack, counter);

	return 0;
}
