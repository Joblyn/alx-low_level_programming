#include "main.h"

/**
 * string_toupper - change lowercase of string
 * to uppercase
 *
 * @str: string
 *
 * Return: new string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if ((*(str + i) >= 97) && (*(str + i) <= 122))
			*(str + i) = *(str + i) - 32;
		i++;
	}

	return (str);
}
