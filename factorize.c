#include "factor.h"

/**
 * len_factorize - The function factorize a number
 * @len_buffer: pointer to the address of the number
 *
 * Author: Lencho Ajema
 * Return: int
 */
int len_factorize(char *len_buffer)
{
	uint32_t len_num;
	uint32_t len_i;

	len_num = atoi(len_buffer);

	for (len_i = 2; len_i < len_num; len_i++)
	{
		if (len_num % len_i == 0)
		{
			printf("%d=%d*%d\n", len_num, len_num / len_i, len_i);
			break;
		}
	}

	return (0);
}
