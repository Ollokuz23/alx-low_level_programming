#include "main.h"

/**
 * _isalpha - Checks if a letter is lower or upper case
 * @c: character to be checked
 *
 * Return: 1  if a lower case or upper case,0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
