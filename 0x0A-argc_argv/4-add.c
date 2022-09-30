#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*num_checker - checks if a given char is number or not
*@a: char to be checked
*Return: 1, if its a number, else 0
*/
int num_checker(char *a)
{
	int i, num, len;

	i = 0;
	num = 0;
	len = strlen(a);
	while (i < len)
	{
		if (a[i] < '0' || a[i] > '9')
		{
			return (-1);
		}
		else
		{
			num = num * 10 + (a[i] - '0');
		}
		i++;
	}
	return (num);
}
/**
*main - adds two positive numbers
*@argc: arguement count
*@argv: array of pointers to arguement strings
*Return: addition or 0 or error and 1
*/
int main(int argc, char *argv[])
{
	int i, b, result;

	result = 0;
	/*iterating through the array to sunm the numbers*/
	for (i = 1; i < argc; i++)
	{
		b = num_checker(argv[i]);
		if (b == -1)
		{
			printf("Error\n");
			return (1);
		}
		result += b;
	}
	printf("%d\n", result);
	return (0);
}
