#include "main.h"

#include "stdio.h"


/**
 * print_to_98 - prints all natural numbers from 0 to 98
 * Return: Always 0
 */

void print_to_98(int n)

{ 
	if (n <= 98)
	{
	for (; n <= 98; n++)
	{
	if (n == 98)
	{
	printf("%d");
	printf("\n");
        break;
	}
	else
	{
	printf("%d, ", n);
	}
	}
	}
	else
	{
	for (; n >= 98; n--)
	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", n);
	}
	}
	}


}