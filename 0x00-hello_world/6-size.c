#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char dcharacter;
	int deinteger;
	long thelong;
	long long along;
	float afloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(dcharacter));
	printf("Size of an int: %lu byte(s)\n", sizeof(deinteger));
	printf("Size of a long int: %lu byte(s)\n", sizeof(thelong));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(along));
	printf("Size of a float: %lu byte(s)\n", sizeof(afloat));
	return (0);
}
