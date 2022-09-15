#include "main.h"

/**
 * print_diagonal - This prints diagonal n number of times
 *
 * @n: input parameter
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (a = 0; a < n; a++)
	{
		for (b = 0; b <= a; b++)
		{
			if (a == b)
			{
				_putchar('\\');
				_putchar('\n');
			}
			_putchar(' ');
		}
	}
}
