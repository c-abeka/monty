#include "monty.h"

/**
 * get_line - get a string from the stdin
 * @file: file to be read
 * Return: on success returne the number of characters read
 */
char *get_line(char *file)
{
	FILE *fptr;
	char *line = NULL;
	stack_t *head = NULL;

	fptr = fopen(file, "r");
	if (!fptr)
	{
		fprintf(stderr, "Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}
	
	free(line);
	free(head);
	fclose(fptr);
	return (line);
}