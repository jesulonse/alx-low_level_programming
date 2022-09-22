#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: input value
 *
 * Return: void
*/
char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	i = 0;
	/*Ensuring that char is not emppty all through the iteration*/
	for ( ; n[i] != 0; i++)
	{
		j = 0;
		/*Iterating through the 10 items of the array*/
		for ( ; j < 10; j++)
		{
			/*Checking if the elements of the array ae equal*/
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}

	}
	return (n);
}
