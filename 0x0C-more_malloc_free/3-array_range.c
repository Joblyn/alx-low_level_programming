#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates and array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer to the newly created array
 *		NULL, if min > max
 *		NULL, if malloc fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arr[i] = min;

	return (arr);
}
