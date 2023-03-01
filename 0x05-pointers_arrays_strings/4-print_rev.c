#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: strings to be peinted
 *
 * Return: peinted strings
 */
void print_rev(char *s)
{
	int l = 0, inx;
	while (s[inx++])
		l++;
	for (inx = l - 1; inx >= 0; inx--)
		_putchar(s[inx]);
	_putchar('\n');
}
