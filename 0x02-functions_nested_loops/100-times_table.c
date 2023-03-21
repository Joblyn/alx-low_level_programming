#include "main.h"

/**
 * print_times_table - Prints n times table
 *
 * @n: number times table (0 < n <= 15)
 *
 * Return: void
 */
void print_times_table(int n)
{
	int a, b, op;

	if ((n >= 0) && (n <= 15))
	{
		a = 0;
		while (a <= n)
		{
			_putchar(48);
			b = 1;
			while (b <= n)
			{
				op = a * b;
				_putchar(44);
				_putchar(32);
				if (op <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(op + 48);
				}
				else if (op <= 99)
				{
					_putchar(32);
					_putchar((op / 10) + 48);
					_putchar((op % 10) + 48);
				}
				else
				{
					_putchar(((op / 100) % 10) + 48);
					_putchar(((op / 10) % 10) + 48);
					_putchar((op % 10) + 48);
				}

				b++;
			}
			_putchar('\n');
			a++;
		}
	}
}
