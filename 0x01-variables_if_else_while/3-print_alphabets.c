#include <stdio.h>
/**
 * main - prints the alphabets on lower case then on uppercase afterwards
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
