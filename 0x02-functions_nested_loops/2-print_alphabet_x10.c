#include "main.h"

/**
 * print_alphabet_x10 - printing alphabet 10 times(lower case)
 *
 * Description: function using _putchar to print
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
