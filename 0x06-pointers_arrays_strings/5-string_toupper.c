#include "main.h"

/**
 * string_toupper - changes lower case letters
 *           of a string to upper
 * @str: the steing to be changed
 *
 * Return: a pointer to the changed string
 */
char *string_toupper(char *str)
{
	int in = 0;

	while (str[in])
	{
		if (str[in] >= 'a' && str[in] <= 'z')
			str[in] -= 32;
		in++;
	}
	return (str);
}
