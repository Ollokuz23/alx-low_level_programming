#include "main.h"
#include <stdio.h>

/**
 * print_array - prints a bo. of arrays
 * @a: no. of arrays
 * @n: bo of elements to be printed
 */
void print_array(int *a, int n)
{
	int ind;

	for (ind = 0; ind < n; ind++)
	{
		printf("%d", a[ind]);
		if (ind == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
