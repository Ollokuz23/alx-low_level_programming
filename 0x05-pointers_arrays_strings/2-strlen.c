#include "main.h"
#include <string.h>

/**
 * _strlen - finds the string of a string
 * @s: string whose length is calculated
 * Return: length in bytes of a string
 */
int _strlen(char *s)
{
	int i = 0;


	while (s[i] != '\0')
		i++;
	return (i);
}
