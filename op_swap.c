#include "monty.h"

/**
 * swap - Swaps top two elements of stack
 * @stack: The head of stack
 * @line: line with error
 * Return: nothing
 */
void swap(stack_t **stack, unsigned int line)
{
    unsigned int len = line;
    stack_t *temp;

    temp = *stack;
    while (temp)
    {
        temp = temp->next;
        len++;
    }
    if (len < 2)
    {
        fprintf(stderr, "L%d: can't swap, stack too short", len);
        exit(EXIT_FAILURE);
    }
}
