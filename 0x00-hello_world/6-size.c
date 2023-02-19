#include <stdio.h>
/**
 * main - prints the sizes of variables types
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;
	printf("size of a char: %lu\n", (long unsigned)(sizeof(c));
	printf("size of an int: %lu\n", (long unsigned)(sizeof(i));
	printf("size of a long int: %lu\n", (long unsigned)(sizeof(li));
	printf("size of a long long int: %lu\n", (long unsigned)(sizeof(lli));
	printf("size of a float: %lu\n", (long unsigned)(sizeof(f));
}
