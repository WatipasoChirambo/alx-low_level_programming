#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 5) == 0 || (i % 3))
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
