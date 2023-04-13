#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memore using malloc
 * @b: memory size
 *
 * Return: pointer to allocated memory
 * if malloc fails, exit with status code 98
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
