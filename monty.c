#include "monty.h"

/**
 * main - opens a monty file 
 * *argc: argument count
 * *argv: arguments
 * Return: EXIT_SUCCESS on success and EXIT_FAILURE on fail
 */
int main(int argc, char *argv[])
{
	FILE *file =  NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	get_line(argv[1]);
	return (EXIT_SUCCESS);
}
