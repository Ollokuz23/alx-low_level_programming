#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: the array of integers to be reversed
 * @n: no. of elements in array
 */
void reverse_array(int *a, int n)
{
	int tp, ix;

	for (ix = n - 1; ix >= n / 2; ix--)
	{
		tp = a[n - 1 - ix];
		a[n - 1 - ix] = a[ix];
		a[ix] = tp;
	}
}
