#include "main.h"

#include <stdio.h>

/**
 * _strncat - concatenate two strings using at most an imputed number of bytes from src
 * @dest: the string to be appended upon
 * @src: the string to be appended to dest
 * @n: number of bytes to be appended to dest from src
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
}
