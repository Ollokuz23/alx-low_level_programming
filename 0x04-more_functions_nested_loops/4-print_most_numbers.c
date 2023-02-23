#include "main.h"

/**
 * print_most_numbers - prints the no.s from 0 to 9
 * followed by a line
 * except 2 and 4
 *
 * Return: the required no.s
 */
void print_most_numbers(void)
{
	int i;


	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
			_putchar((i % 10) + 1);
	}
	_putchar('\n');
}

