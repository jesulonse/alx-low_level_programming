#include "main.h"

/**
 * _islower - This prints 1 if it isan alphabet of lower case
 * otherwise  print 0
 * @c: character in ascii code
 * Return: 1 for lowercase and  0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
