#include "main.h"

/**
 * _isalpha - checking if its an alphabet
 *
 * Description: function return 1 if the 
 * character is a letter, lower or uppercase
 *
 * Return: 1 or 0
 *
 */

int _isalpha(int c)
{
	char lower, upper;
	int letter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				letter = 1;
		}
	}
	return (letter);
}
