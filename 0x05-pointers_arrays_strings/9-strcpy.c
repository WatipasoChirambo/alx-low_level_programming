#include "main.h"

/**
 * _strcpy - function copying the string pointed
 * to by source, incuding (\0) and buffer pointed to by destination.
 *
 * @dest: destination pointer
 * @src: source pointer
 *
 * Return: pointer to Destination
 */

char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src)
		*dest++ = *src++;
	return (temp);
}
