#include <stdio.h>

/**
 * main - Print combinations of three digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int zeros;
	int ones;
	int twos;

	for (zeros = 0; zeros < 8; zeros++)
	{
		for (ones = zeros + 1; ones < 9; ones++)
		{
			for (twos = ones + 1; twos < 10; twos++)
			{
				putchar((zeros % 10) + '0');
				putchar((ones % 10) + '0');
				putchar((twos % 10) + '0');
				if (zeros == 7 && ones == 8 && twos == 9)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
