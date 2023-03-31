#include "main.h"

/**
 * reverse_array - reverse the content of an array
 *
 * @a: array of integers
 * @n: number of elements
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, j, temp;

	while (i < n - 1)
	{
		j = i + 1;
		while (j > 0)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
			j--;
		}
		i++;
	}
}
