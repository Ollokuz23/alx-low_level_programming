#include "main.h"

/**
 * factorial - returns the factorial of a no.
 * @n: the no. of factorial to find
 *
 * Return: n > 0 - print n factorial
 *        if n < 0 - -1 indicating error
 */
int factorial(int n)
{
	int res = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	res *= factorial(n - 1);

	return (res);
}
