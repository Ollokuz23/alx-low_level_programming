#include "main.h"

/**
 * is_lower - xhecks if a character is lower case
 * @ c: the character to be checked
 *
 * Return: 1 if true 0 otherwise
 */
int _islower(int c)
{
	if (c >=  'a' &&  c <= 'z')
		return (1);
	else
		return (0);
}

