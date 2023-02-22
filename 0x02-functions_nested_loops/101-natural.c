#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (suceess)
 */

int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 5) == 0 || (i % 3) == 0)
		{
			sum += i;
		}

	}
	printf("%d", sum);

	return (0);
}
