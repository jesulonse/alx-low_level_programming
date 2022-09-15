#include "main.h"

/**
 * print_line - this prints line _ n times
 * and not print a line when n is 0 or less
 *
 * @n: input number
 *
 * Return: Void
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
