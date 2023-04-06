#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string argument
 * Return: length of string (integer)
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (count);
}
