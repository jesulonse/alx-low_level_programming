#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers
 * from n to 98, folowed by a new line
 *
 * @n: input number
 *
 * Return: no return
 */
void print_to_98(int n)
{
	/*if n is greater than 98, print backwards from the number to 98*/
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
