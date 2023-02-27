#include "main.h"

/**
 * puts2 - function printing every character starting with the 
 * first character, followed by new line
 * @s: sting
 * Return: Nothing
 */

void puts2(char *s)
{
	int len = 0, i = 0;

	while (s[len] != '\0')
		len++;

	len -= 1;

	for (; i <= len; i+=2)
		_putchar(s[i]);

	_putchar('\n');
}
