#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 *
 * @n: input number.
 *
 * Retur: void.
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	printf("%d\n", n);
}
