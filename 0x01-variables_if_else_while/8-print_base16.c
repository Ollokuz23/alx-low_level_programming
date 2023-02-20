#include <stdio.h>
/**
 * main - prints all the numbers of base sixteen in lower case
 * followed by a line
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	char letter;


	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
