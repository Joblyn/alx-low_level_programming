/**
 * _strncat - concatenates two strings
 *
 * @dest: string to be appended to
 * @src: string to be appended
 * @n: maximum bytes
 *
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (*(src + j) != '\0')
	{
		if (j == n)
			break;
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
