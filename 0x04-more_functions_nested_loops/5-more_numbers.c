#include "main.h"

/**
 * more_numbers - print 10 times the number since o to 9
 * Return: 10 times the number since o to 9
 */

void more_numbers(void)

{

	int x, y;

	for (x = 0; x < 10; x++)
	{
	for (y = 0; y <= 14; y++)
	{
	if (y > 9)
	{
	_putchar((y / 10) + '0');
	}
	_putchar((y % 10) + '0');
	}
	_putchar('\n');
	}

}
