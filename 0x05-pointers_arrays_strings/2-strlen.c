#include "main.h"
#include <stdio.h>

/**
 * _strlen - gives the length of a string
 *
 * @*s: input parameter
 *
 * Return: NOthing
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
