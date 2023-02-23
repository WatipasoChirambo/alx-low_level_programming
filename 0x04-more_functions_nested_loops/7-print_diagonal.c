#include "main.h"

/**
 * print_diagonal - function drawing a diagonal line on the terminal
 * @n: input number pf times '\' should be printed
 * Return: a diagoanl line print
 */

void print_diagonal(int n)
{
	int co, sp;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; sp < co; sp++)
		{
			for (sp = 1; sp < co; sp++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
