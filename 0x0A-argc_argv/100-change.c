#include <stdio.h>
#include <stdlib.h>

/**
*main - prints the minimum number of coins to make change for a given amount
*@argc: argument count
*@argv: array of pointers to argument strings
*Return: number of coins or 1
*/
int main(int argc, char *argv[])
{
	int amount, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	while (amount >= 25)
	{
		amount -= 25, coins++;
	}
	while (amount >= 10)
	{
		amount -= 10, coins++;
	}
	while (amount >= 5)
	{
		amount -= 5, coins++;
	}
	while (amount >= 2)
	{
		amount -= 2, coins++;
	}
	if (amount == 1)
	{
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
