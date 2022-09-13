#include "main.h"

/**
 * print_alphabet_x10 - Print alphabets in 10 times
 *
 * return: ALways 0
 */
void print_alphabet_x10(void)
{
	int i, a;

	for (i = 0; i < 10; i++)
	{
		for (a = 97; a < 123; a++)
		{
			_putchar(a);
		}
	_putchar('\n');
	}
}
