#include <stdio.h>

/**
 * main - entry point
 *
 * Description: printing size of values
 *
 * Return: 0 (success)
 */

int main(void)
{
	int a;
	char d;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %lu byte(S)\n", (unsigned long)sizeof(a));

	return (0);
}
