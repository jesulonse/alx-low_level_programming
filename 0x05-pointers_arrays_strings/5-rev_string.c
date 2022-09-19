#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 *
 * @s: input parameter
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len, i, j;
	char a;

	/*populating length of string*/
	for (len = 0; s[len] != '\0'; i++)
	{
	}
	j = len - 1;
	for (i = j; i > j / 2; i--)
	{
		a = s[i];
		s[i] = s[j - 1];
		s[j - 1]; = a;
	}
}
