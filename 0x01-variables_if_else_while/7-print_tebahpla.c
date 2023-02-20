#include <stdio.h>
/**
 * main - prints the alphabets in lower case in reverse order
 *
 * Return: 0 (succeess)
 */
int main(void)
{
	char c;


	for (c = 'z'; c <= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
