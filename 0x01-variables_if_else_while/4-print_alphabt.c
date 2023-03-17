#include <stdio.h>

/**
 * main - Write all lowercase alphabets, except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_case = 'a';

	while (lower_case <= 'z')
	{
		if (lower_case != 'q' && lower_case != 'e')
		{
			putchar(lower_case);
		}
		lower_case = lower_case + 1;

	}
	putchar('\n');

	return (0);
}
