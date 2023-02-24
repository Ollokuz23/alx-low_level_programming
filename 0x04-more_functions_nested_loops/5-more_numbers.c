#include "main.h"

/**
 * more_numbers - writes 10 times the no.s 0 t0 14
 * followed by a new line
 *
 * Return: the no.s prompted
 */
void more_numbers(void)
{
	int num, count;


	for (count = 0; count <= 9; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}	
