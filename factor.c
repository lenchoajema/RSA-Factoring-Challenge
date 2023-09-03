#include "factor.h"

/**
 * main - main function
 *
 *
 * Return: void
 */
int main(int argc, char *argv[])
{
	FILE *len_fptr;
	size_t len_count;
	ssize_t len_line;
	char *len_buffer = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: factor <filename>\n");
		exit(EXIT_FAILURE);
	}
	len_fptr = fopen(argv[1], "r");
	if (len_fptr == NULL)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((len_line = getline(&len_buffer, &len_count, len_fptr)) != -1)
	{
		len_factorize(len_buffer);
	}
	return (0);
}
