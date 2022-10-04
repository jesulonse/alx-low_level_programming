#include "main.h"
#include <stdlib.h>

/**
* *create_array - creates an array of chars, and
* initializes it with a specific char.
* @size: size of the array
* @c: character to be initialized
* Return: pointer to array or null
*/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	/*creating an array*/
	str = malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	for ( ; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
