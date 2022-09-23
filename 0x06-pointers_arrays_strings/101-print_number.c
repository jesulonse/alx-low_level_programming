#include "main.h"

/**
*print_number - prints an integer
*
*@n: input value
*
*Return: Nothing
*/
void print_number(int n)
{
	unsigned int m, d, count;

	/*if the number is less than 0*/
	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}
	d = m;
	count = 1;
	/*initialize the counter and consider above 9*/
	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}
	for ( ; count >= 1; count /= 10)
	{
		_putchar(((m / count) % 10) + 48)
	}
}
