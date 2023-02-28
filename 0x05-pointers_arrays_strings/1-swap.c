#include "main.h"

/**
 * swap_int - swaps the values of 2 integers
 * @a: the first integer
 * @b: the second ineteger
 *
 * Return: the swapped integer values
 */
void swap_int(int *a, int *b)
{
	int tp = *a;
	*a = *b;
	*b = tp;
}
