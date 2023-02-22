#include "main.h"

/**
 * main - prints the alphabets in lower case followed by a line
 *
 * Return: 0 on success
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c)
	}
	_putchar('\n');
}
