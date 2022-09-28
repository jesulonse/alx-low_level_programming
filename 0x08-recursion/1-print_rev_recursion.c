#include "main.h"

/**
*_print_rev_recursion - prints a string in reverse.
*@s: input value
*
*Return: nothing
*/
void _print_rev_recursion(char *s)
{
	/*base case: provided this is a string*/
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
