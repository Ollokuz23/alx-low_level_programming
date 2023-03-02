#include <unistd.h>
/**
 * _putchar - writes the character to the stdout
 * @c: the charcter to print
 *
 * Return: 1 on success
 * on error -1, is printed.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
