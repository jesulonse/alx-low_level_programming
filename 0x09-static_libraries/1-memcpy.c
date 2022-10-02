#include "main.h"

/**
* _memcpy - function that copies memory area
* @dest: memory area where ut is stored
* @src: memory area where is copied
* @n: number of bytes
*
* Return: copied memory with n byted changed
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	while (n > 0)
	{
		dest[j] = src[i];
		i++;
		j++;
		n--;
	}
	return (dest);
}
