#include <stdio.h>

/**
 * main - This prints fizz at the multiple of 3
 * and buzz at multiple of 5 and fizzbuzz at the multiple of 3 and 5
 *
 * Return: 0 Success
 */
int main(void)
{
	int n;

	putchar('1');
	putchar(' ');
	for (n = 2; n <= 100; n++)
	{
		if (n % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
	putchar('\n');
	return (0);
}
