#include "main.h"
#include <stdlib.h>

/**
* *_strdup - produces a pointer to a newly allocated space
* @str: string to copy
* Return: pointer to array or null
*/
char *_strdup(char *str)
{
	char *str_dup;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	i++;
	str_dup = malloc(sizeof(*str) * i);
	if (str_dup == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		str_dup[j] = str[j];
		j++;
	return (str_dup);
}
