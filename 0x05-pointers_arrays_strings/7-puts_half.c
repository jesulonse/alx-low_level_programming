#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string,
 * followed by a new line
 *
 * @str: input parameter
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int len = 0;
	char *x = str;
	int a;

	/*creating the string*/
	while (*x != '\0')
	{
		x++;
		len++;
	}
	if (len % 2 == 0)
	{
		a = len / 2;
	}
	else
	{
		a = (len + 1) / 2;
	}
	for ( ; a < len ; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
