#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: 1
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2-15-10-19\n";

	write(2, str, 59);

	return (1);
}
