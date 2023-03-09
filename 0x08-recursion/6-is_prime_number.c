#include "main.h"

int is_divisible(int nm, int dv);
int is_prime_number(int n);

/**
 * is_divisible - checks if a no. is divisible
 * @nm: no. to be checked
 * @dv: divisor
 *
 * Return: if no. is divisible - 0
 *         if it isn't - 1
 */

int is_divisible(int nm, int dv)
{
	if (nm % dv == 0)
		return (0);
	if (dv == nm / 2)
		return (1);

	return (is_divisible(nm, dv + 1));
}

/**
 * is_prime_number - checks  if the input integer is a prime number
 * @n: no. to be checked
 *
 * Return: 1 if @n is a prime no.
 *         else 0
 */
int is_prime_number(int n)
{
	int dv = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (is_divisible(n, dv));
}
