#include "main.h"
  

/**
 * print_last_digits - prints the last digits of a number
 * @n: the number to be printed
 */


int print_last_digit(int n)

{

	int last;

        last = n % 10;
	if (last < 0)
	{
	last = last * -1;
	}
        _putchar(last + '0');
        return (last);

}	
