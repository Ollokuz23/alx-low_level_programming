#include "main.h"

/**
 * _strcat - joins the string pointed to by @src, includingbterminating
 * null byte pointed to by @dest
 * @dest: pointer to the string to be joined
 * @src: source string to be appended to
 *
 * Return: a pointer to the destination string @dest
 */
char *_strcat(char *dest, char *src)
{
	int ind = 0, dest_len = 0;


	while (dest[ind++])
		dest_len++;
	for (ind = 0; src[ind]; ind++)
		dest[dest_len++] = src[ind];
	return (dest);
}
