#include "main.h"

/**
 * print_numbers - prints no.s from 0 to 9
 * followed by a line
 *
 * Return: the printed no.s
 */
void print_numbers(void)
{
	int i;


	for (i = 0; i <= 9; i++)
		_putchar((i % 10) + '0');

	_putchar('\n');
}
