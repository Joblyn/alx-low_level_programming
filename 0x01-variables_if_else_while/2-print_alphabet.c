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
		letter = letter + 1;
	}
	putchar('\n');

	return (0);
}
