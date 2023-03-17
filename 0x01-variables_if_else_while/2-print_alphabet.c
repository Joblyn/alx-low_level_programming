#include <stdio.h>

/**
 * main - Write all lower-case alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		putchar('\n');
		letter = letter + 1;
	}

	return (0);
}
