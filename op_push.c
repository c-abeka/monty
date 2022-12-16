#include "monty.h"

/**
 * push - pushes an element to the stack
 * @stack: the stack
 * @line: the element to be pushed
 * Return: none
 */
void push(stack_t **stack, unsigned int line)
{
	stack_t *node = NULL;
	

	if (stack == NULL)
	{
		fprintf(stderr, "L%d: Stack not found]\n", line);
		exit(EXIT_FAILURE);
	}
	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(stack);
		exit(EXIT_FAILURE);
	}
	node->n = line;

	if (*stack)
	{
		node->next = *stack;
		node->prev = (*stack)->prev;
		(*stack)->prev = node;
		*stack = node;
		return;
	}

	node->next = *stack;
	node->prev = NULL;
	*stack = node;

	
}
