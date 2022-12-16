#include "monty.h"

/**
 * swap - Swaps top two elements of stack
 * @stack: The head of stack
 * @line: line with error
 * Return: nothing
 */
void swap(stack_t **stack, unsigned int line)
{
    unsigned int len = 0, temp = 0;
    
    len = count_stack(*stack);
    if (len < 2)
    {
        fprintf(stderr, "L%d: can't swap, stack too short", line);
        exit(EXIT_FAILURE);
    }
}
