#include "main.h"

/**
 * binary_to_uint - converts a binary numer to unsigned int
 * @b: binary
 *
 * Return: unsigned int or 0
 */
unsigned int binary_to_uint(const char *b)
{
	
	unsigned int ui = 0;
	int decval, len;

	if (!b) return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, decval = 1; len >= 0; len--, decval *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] & 1) ui += decval;
	}

	return (ui);
}
