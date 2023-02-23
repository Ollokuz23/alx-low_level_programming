#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: no. of times the line is drawn
 *
 * Return: a line if n > 0
 * else , return '\n'
 */
void print_line(int n)
{
	if (n > 0 &&  n++)
		_putchar('_');
	else
		_putchar('\n');
}
