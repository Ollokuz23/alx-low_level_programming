#include "main.h"

int find_sqrt(int nm, int rt);
int _sqrt_recursion(int n);

/**
 * find_sqrt - finds th natural sqrt root of an inputted no.
 * @nm:  no. to find sqrt of
 * @rt: root to be tested
 *
 * Return: If no. has a natural sqrt - sqrt
 *         If not, - -1
 */
int find_sqrt(int nm, int rt)
{
	if ((rt * rt) == nm)
		return (rt);
	if (rt == nm / 2)
		return (-1);
	return (find_sqrt(nm, rt + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: no. whose square root is to be found
 *
 * Return: square root of the no. @n - n
 *        if no square root found - -1
 */
int _sqrt_recursion(int n)
{
	int rt = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, rt));
}
