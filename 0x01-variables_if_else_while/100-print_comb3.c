#include <stdlib.io>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int first_num, second_num;

	for (first_num = '0'; first_num < '9'; first_num++)
	{
		for(second_num = first_num + 1; second_num <= '9'; second_num++)
		{
			if (second_num != first_num)
			{
				putchar(first_num);
				putchar(second_num);

				if (first_num == '8' && second_num == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
