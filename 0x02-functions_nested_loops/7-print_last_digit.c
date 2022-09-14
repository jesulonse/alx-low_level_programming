#include "main.h"

/**
 * print_last_digit - Prints the last digit of
 * a number
 *
 * @n: input number as integer
 *
 * Return: Last digit
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = n * -1;
	}
	_putchar('0' + n);
	return (n);
}
