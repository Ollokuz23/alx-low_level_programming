#include "main.h"

/**
 * _strstr - finds the first occurence of the substring @needle
 *           in a string @haystack
 *           terminating '\0' are not compared
 * @haystack: string to be searched
 * @needle: substring to be located
 *
 * Return: If substring is located - a pointer to the
 *         beginning of the located substring.
 *         If substring is not located - NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while
			(haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
