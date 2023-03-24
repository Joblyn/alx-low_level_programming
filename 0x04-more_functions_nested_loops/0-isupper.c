#include "main.h"

/**
 * _isupper - check if input is an uppercase character
 *
 * @c: The alphabet character
 *
 * Return: 1 if uppercase, else 0
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
