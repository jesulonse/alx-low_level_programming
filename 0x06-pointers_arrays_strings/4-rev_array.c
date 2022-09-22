#include "main.h"

/**
*reverse_array - reverse array of integers
*@a: array
*@n: input value
*
*Return: nothing
*/
void reverse_array(int *a, int n)
{
	int b;
	int i;

	for (i = 0; i < n--; i++)
	{
		b = a[i];
		a[i] = a[n];
		a[n] = b;
	}
}
