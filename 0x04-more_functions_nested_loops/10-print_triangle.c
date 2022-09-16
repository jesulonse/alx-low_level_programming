#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: takes in a integer for size of triangle
 *
 * Return: 0
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (j = 1; j <= size; j++)
	{
		for (i = size - j; i > 0; i--)
		{
			_putchar(' ');
		}
		for (i = j; i > 0; i--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
