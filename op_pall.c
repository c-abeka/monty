#include "monty.h"

/**
 * pall - prints all values in a stack
 * @stack: Pointer to top of stack
 * @line: working line of monty bytecode file
 */
void pall(stack_t **stack, unsigned int line)
{
	stack_t *temp = NULL;
	(void) line;
	
	if (*stack)
		temp = *stack;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
