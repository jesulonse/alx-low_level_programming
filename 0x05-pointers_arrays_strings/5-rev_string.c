#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string.
 *
 * @s: input parameter
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len = 0;
	int l = 0;
	char *y = s;
	int a = 0;
	char x;

	/*creating the string*/
	while (*y != '\0')
	{
		y++;
		len++;
	}
	l = len - 1;
	for ( ;a < ((l / 2) + 1) ; a++)
	{
		x = s[a];
		s[a] = s[l - a];
		s[l - a] = x;
	}
}
