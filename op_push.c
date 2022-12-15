#include "monty.h"

/**
 * push - pushes an element to the stack
 * @stack: the stack
 * @var: the element to be pushed
 * Return: none
 */
int push(stack_t **stack, unsigned int line)
{
	stack_t **node = NULL;
	

	if (stack == NULL)
	{
		fprintf(stderr, "L%d: Stack not found]\n", line);
		exit(EXIT_FAILURE);
	}
	node = malloc(sizeof(stack_t));
	if (node = NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(stack);
		exit(EXIT_FAILURE);
	}

	node->next = *stack;
	node->prev = NULL;
	node->n = arg.arg;
	if (*stack)
		(*stack)->prev = node;
	*stack = node;
}
