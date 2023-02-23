#include "main.h"

/**
 * _isdigit - checks for a digit from 0 through 9
 * @c: the character through which the check is made
 *
 * Return: 1 if the c is a digit
 * if not  0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
