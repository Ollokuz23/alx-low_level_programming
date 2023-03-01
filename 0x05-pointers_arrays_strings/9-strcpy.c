 #include "main.h"

/**
 * _strcpy - copies  a string pointed by @src
 * @dest : a buffer to copy the string to
 * @src: the source string copy
 *
 * Return: a pointer to the destination string  @dest
 */
char *_strcpy(char *dest, char *src)
{
	int ind = 0;

	while (src[ind])
	{
		dest[ind] = src[ind];
		ind++;
	}
return (dest);
}
