#include "main.h"

/**
 * _islower - function
 *
 * @c: input charcter
 *
 * Description: using _printchar function to print alphabet in lower case
 *
 * Return: 1 if lower or 0 if uppercase
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
