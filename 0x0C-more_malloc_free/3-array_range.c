#include "main.h"
#include <stdlib.h>

/**
* *array_range - creates an array of integers from min to max.
* @min: minimum int in array
* @max: maximum int in array
* Return: pointer to array or null
*/
int *array_range(int min, int max)
{
	int *ptr, *ret;
	int size;

	if (min > max)
		return (0);
	size = (max - min) + 1;
	ret = malloc(size * sizeof(int));
	if (ret == 0)
		return (0);
	ptr = ret;
	while (size--)
		*ptr++ = max - size;
	return (ret);
}
