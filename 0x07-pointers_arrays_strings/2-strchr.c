#include "main.h"
#include <stddef.h>

/**
* _strchr - locates a character in a string.
* @s: string value
* @c: character value
*
* Return: a pointer to a character
*/
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
