#include "main.h"

/**
 * _strpbrk - locates the first occurence in @s of
 *            any of the bytes in the string @accept
 * @s: string involved
 * @accept: set of bytes to be searched for
 *
 * Return: If a set is matched - a pointer to the matched
 *         byte
 *         If bo set is marched - Null
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
