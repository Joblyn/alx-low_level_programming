#include "main.h"

/**
 * print_alphabet_x10 - Print 10 times the alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int line = 0;
	char alph;

	while (line < 10)
	{
		alph = 'a';
		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}

		_putchar('\n');
		line++;
	}
}
