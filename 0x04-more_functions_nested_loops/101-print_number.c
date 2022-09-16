#include "main.h"

/**
 * print_number - print numbers using putchar
 *
 * @n: inout integer
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int a, i;

	if (n < 0)
	{
		a = -n;
		_putchar('-');
	}
	else
	{
		a = n;
	}
	i = 1000000000;
	do {
		if (i <= a || i == 1)
		{
			_putchar(a / i % 10 + '0');
		}
		i /= 10;
	} while (i != 10);
}
