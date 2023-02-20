#include <stdio.h>
/**
 * main - prints all single digits numbers of base ten starting from zero
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');
	putchar('\n');
	return (0);
}
