#include "factor.h"

/**
 * main - main function
 *
 * Author: Lencho Ajema
 * Return: void
 */
int main(int len_argc, char *len_argv[])
{
	FILE *len_fptr;
	size_t len_count;
	ssize_t len_line;
	char *len_buffer = NULL;

	if (len_argc != 2)
	{
		fprintf(stderr, "Usage: factor <filename>\n");
		exit(EXIT_FAILURE);
	}
	len_fptr = fopen(len_argv[1], "r");
	if (len_fptr == NULL)
	{
		fprintf(stderr, "Error: can't open file %s\n", len_argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((len_line = getline(&len_buffer, &len_count, len_fptr)) != -1)
	{
		len_factorize(len_buffer);
	}
	return (0);
}
