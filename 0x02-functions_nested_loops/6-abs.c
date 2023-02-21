#include "main.h"

/**
 * _abs - absolute value
 * @r: integer input
 *
 * Description: function returns absolute value of number
 *
 * Return: absolute value of number r
 */

int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
