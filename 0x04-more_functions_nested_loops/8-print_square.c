#include "main.h"

/**
 * print_square - prints a square using #
 * @size: size od the square
 *
 */
void print_square(int size)
{
	int hgt, len;


	if (size > 0)
	{
		for (hgt = 0; hgt < size; hgt++)
		{
			for (len = 0; len < size; len++)
				_putchar('#');
			if (hgt == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
