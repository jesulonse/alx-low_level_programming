#include "main.h"

/**
*rot13 - encodes a string using rot13.
*
*@n: input value
*Return: void
*/
char *rot13(char *n)
{
	int i, j;

	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	/*Ensuring that char is not emppty all through the iteration*/
	for ( ; n[i] != '\0'; i++)
	{
		j = 0;
		/*Ensuring that char is not emppty all through the iteration*/
		for ( ; s1[j] != '\0'; j++)
		{
			/*Checking if the elements of the array ae equal*/
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
				break;
			}
		}
	}
	return (n);
}
