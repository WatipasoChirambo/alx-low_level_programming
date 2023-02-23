#include "main.h"
#include <stdio.h>


/** print_remaining_days - takes in date and prints days left in the year,
 * with leap year inclusive
 *
 * @day: day of the month
 * @month: month
 * @year: year
 * Return: void(nothing)
 */

void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0) && (!(year % 100 == 0) || (year % 400 == 0)))
	{
		if (month > 2)
		{
			day++;
		}

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 -day);
		}
	}
}