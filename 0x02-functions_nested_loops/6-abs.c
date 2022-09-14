#include "main.h"

/**
 * _abs - gives the absolute value
 * of an integer
 *
 * @n: input number as integer
 *
 * Return: Absolute value
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
