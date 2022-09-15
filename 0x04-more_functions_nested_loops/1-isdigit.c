#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for digit in a parameter
 *
 * @c: input parameter
 *
 * Return: 1 if parameter is digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
