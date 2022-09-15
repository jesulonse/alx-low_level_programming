#include "main.h"

/**
 * print_numbers - function prints digits 0 to 9
 * Return: 0123456789
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
