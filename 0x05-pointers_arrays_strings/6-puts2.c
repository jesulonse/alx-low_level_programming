#include "main.h"
#include <stdio.h>

/**
 * puts - prints every other character of a string,
 * starting with the first character, followed by a new line
 *
 * @str: input parameter
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int len = 0;
	int a = 0;
	char *x = str;
	int z;

	/*string creation*/
	while (*x != '\0')
	{
		x++;
		len++;
	}
	a = len - 1;
	for (z = 0 ; z <= a; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');

}
