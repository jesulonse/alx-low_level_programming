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

	for (zeros = 0; zeros <= 7; zeros++)
	{
		for (ones = zeros + 1; ones <= 8; ones++)
		{
			for (twos = ones + 1; twos <= 9; twos++)
			{
				putchar((zeros % 10) + '0');
				putchar((ones % 10) + '0');
				putchar((twos % 10) + '0');

				putchar(',');
				putchar(' ');
			}
			if (zeros == 7 && ones == 8 && twos == 9)
			{
				continue;
			}
		}
	}
	putchar('\n');
	return (0);
}
