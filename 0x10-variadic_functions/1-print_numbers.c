#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed bewtween numbers
 * @n: number of integers
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		if (i == n - 1)
			printf("%d\n", va_arg(ap, int));
		else if (separator)
			printf("%d%s", va_arg(ap, int), separator);

	va_end(ap);
}
