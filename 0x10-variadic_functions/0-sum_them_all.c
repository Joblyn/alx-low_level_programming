#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * sum_them_all - sums all integers passed to it
 * @n: first argument
 * Return: sum of integers.
 * if n = 0, returns 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}

