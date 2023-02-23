#include "main.h"

/**
 * more_numbers - writes 10 times the no.s 0 t0 14
 * followed by a new line
 *
 * Return: the no.s prompted
 */
void more_numbers(void)
{
	int j, i = 0;


	while (i <= 9)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar((j % 10) + '0');
	
		_putchar((i % 10) + '0');
		i++;
		}
		_putchar('\n');
	}
}

