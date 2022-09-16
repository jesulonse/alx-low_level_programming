#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: takes in a integer for size of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int row, column;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (row = 1; row < size; row++)
	{
		for (column = size - row; column > 0; column--)
		{
			_putchar(' ');
			for (column = row; column > 0; column--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
