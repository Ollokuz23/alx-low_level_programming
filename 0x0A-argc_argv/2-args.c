#include <stdlib.h>
#include <stdio.h>

/**
 * main - check code
 * @argc: counts the arguments no.
 * @argv: array to a string
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
