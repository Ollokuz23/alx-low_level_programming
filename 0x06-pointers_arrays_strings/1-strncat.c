#include "main.h"

/**
 * _strncat - concatenates two strings and uses at most n bytes from
 * src
 * and src doesn't need to be terminated if it contains n or more bytes
 * @dest: string to be appended to
 * @src: contains strings to join with
 * @n: no. of bytes from src to be appended to dest
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int ind = 0, d_l = 0;


	while (dest[ind++])
		d_l++;
	for (ind = 0; src[ind] && ind < n; ind++)
		dest[d_l++] = src[ind];
	return (dest);
}

