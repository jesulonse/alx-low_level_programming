#include <stdio.h>
#include "main.h"

/**
 * main - entry block
 * @void: no arguments
 *
 * Return: 0 Success
 */
int main(void)
{
	int n;

	putchar('1');
	for (n = 2; n <= 100; n++)
	{
		if (n % 15 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else
		{
			printf(" %d", n);
		}
	}
	putchar('\n');
	return (0);
}
