#include "main.h"

/**
 * _strcat - function concatenating two strings
 * @dest: string
 * @src: string
 * Return: pointer to resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while(*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';

	return (temp);
}
