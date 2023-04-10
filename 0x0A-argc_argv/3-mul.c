#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiples two numbers, handles error
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successssful, 1 if rror exists
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int result;

		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		return (0);
	}
}
