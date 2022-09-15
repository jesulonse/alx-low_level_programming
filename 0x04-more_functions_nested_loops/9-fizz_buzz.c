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

	for (n = 1; n <= 100; n++)
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
	/*printf("Buzz");*/
	printf("\n");
	return (0);
}
