
#include "main.h"

/**
 * largest_number - return the largest of 3 numbers
 * @g: first number
 * @h: second number
 * @j: third number
 * Return: largest number
 */

int largest_number(int g, int h, int j)
{
	int largest;

	if (g >= h && g >= j)
	{
		largest = g;
	}	
	else if(h >= g && h >= j)
	{
		largest = h;
	}
	else if (j >= g && j >= h)
	{
		largest = j;
	}

	return (largest);
}
