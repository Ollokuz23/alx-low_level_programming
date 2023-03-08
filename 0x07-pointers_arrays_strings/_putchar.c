#include <unistd.h>

/**
 * _putchar - writes the character to the stdout
 * @c: the character to print
 *
 * Return: 1 on success
 *       : -1 on error, is printed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
