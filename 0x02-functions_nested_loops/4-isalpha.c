#include "main.h"

/**
 * _isalpha - checks if a letter is loweror upper case
 *
 * @c: character to be xhecked
 * Returns: 1  if a lower case or upper case,0 otherwise
 */
int _isalpha(c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
