#include "main.h"

/**
 * swap_int - function swapping integer values.
 * @x: integer pointer
 * @y: integer pointer
 * Return: nothing
 */

void swap_int(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}
