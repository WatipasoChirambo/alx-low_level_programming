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
	long int b;
	long long int c;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Szie of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
