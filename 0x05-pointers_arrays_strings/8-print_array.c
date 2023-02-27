#include "main.h"
#include <stdio.h>

/**
 * print_array - function printing n elements of an array
 * followed by a new ine
 * @a: array
 * @n: integer
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	_putchar('\n');
}
