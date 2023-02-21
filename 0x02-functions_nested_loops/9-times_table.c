#include "main.h"

/**
 * times_table - function definition
 *
 * Description: function printing 9 times tables starting with 0
 *
 * Return: nothing
 *
 */

void times_table(int n)
{
	int i;
	int j;
	int n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;

			if ((n / 10) == 0)
			{
				if (j != 0)
					_putchar(' ');
				_putchar(n + '0');

				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');

			}
			else
			{
				_putchar((n / 10) + '0');
				_puchar((n % 10) + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');

			}
		}
		_putchar("\n");
	}
}
