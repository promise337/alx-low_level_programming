#include "main.h"

/**
 * reverse_array - reverses the content bof an array of integers
 * @a: array of integeres to be reversed
 * @n: the number of elements in the array
 */

void reverse_array(int *a, int n)

{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}

}
