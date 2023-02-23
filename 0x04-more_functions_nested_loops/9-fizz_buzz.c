#include <stdio.h>
#include "main.h"

/**
 * main - prints no.s 1 to 100
 * replacing multiplws of 3, 5 and both
 * with fizz, buzz & fizzbuzz
 *
 * Return: Always 0
 */
int main(void)
{
	int num;


	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0)
			printf("Fizz");
		else if ((num % 5) == 0)
			printf("Buzz");
		else if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);
				if (num == 100)
					continue;
		printf(" ");
	}
	printf("\n");
		return (0);
}
