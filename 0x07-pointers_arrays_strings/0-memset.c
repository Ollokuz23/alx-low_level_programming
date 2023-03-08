#include "main.h"

/**
 * _memset - fills the first n bytes of memmory pointed
 *           to by @s by a constant @b
 * @s: pointer to memory to be filled
 * @b: character filling the area
 * @n: no. of bytes
 *
 * Return: a pointer to the memmory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}


