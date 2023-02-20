#include <stdio.h>
/**
 * main - prints out single digits of numbers of base ten from zero to nine
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	printf("\n");
	return (0);
}
