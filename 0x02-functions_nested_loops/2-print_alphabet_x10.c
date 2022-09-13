#include "main.h"

/**
 * 2-print_alphabet_x10 - Print alphabets in 10 times
 *
 * return void
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
