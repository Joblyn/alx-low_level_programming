#include <stdio.h>

/**
 * main - Write all alphabets in lowercase, then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_case = 'a';
	char upper_case = 'A';

	while (lower_case <= 'z')
	{
		putchar(lower_case);
		lower_case++;
	}

	while (upper_case <= 'Z')
	{
		putchar(upper_case);
		upper_case = upper_case + 1;
	}
	putchar('\n');

	return (0);
}
