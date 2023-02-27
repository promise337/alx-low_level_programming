#include <stdio.h>

/**
 * swap_int - swaps the value of two integers.
 * @a: the first value to be swapped
 * @b: the second value 
 * Return: nothing
 */

void swap_int(int *a, int *b)

{

	int temp = *a;
	*a = *b;
	*b = temp;

}


