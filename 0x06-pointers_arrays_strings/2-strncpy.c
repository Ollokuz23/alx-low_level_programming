#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: buffer storing the string copy
 * @src: source string
 * @n: max no. of strings to be copied from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, s_l = 0;


	while (src[i++])
		s_l++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = s_l; i < n; i++)
		dest[i] = '\n';
	return (dest);
}
