#include <stdio.h>
#include <main.h>

/**
 * print_remaining_days - takes a date and prints how many days they are
 * left in the year, taking leap years into account
 * @momth - month in number format
 * @day - days in number format
 * @year - year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)

{
	if ((year % 4 == 0) && (year % 400 == 0 || year % 100 != 0))
	{
	if (month >= 3 && day >= 60)
	{
	day++;
	}
	printf("day of the year: %d\n", day);
	printf("remaining days: %d\n", 366 - day);
	}
	else
	{
	if (month == 2 && day == 60)
	{
	printf("invalid date: %02d/%02d/%04d\n", month, day -31, year);
	}
	else
	{
	printf("day of the year: %d\n", day);
        printf("remaining days: %d\n", 366 - day);
	}
	}

}

