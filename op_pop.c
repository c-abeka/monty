#include "monty.h"

/**
 * pop - Removes top element from stack
 * @stack: the stack head
 * @line: line on which error occured
 * Return: popped item
 */
void pop(stack_t **stack, unsigned int line)
{
    stack_t *current = *stack, *temp = NULL;

    if (*stack == NULL)
    {
        fprintf(stderr, "L%d: can't pop an empty stack\n");
        exit(EXIT_FAILURE);
    }
    temp = current;
    if (current->next)
    {
        current = current->next;
        current->prev = temp->prev;
        *stack = current;
    }
    else
    {
        *stack = NULL;
    }
    free(temp);
}