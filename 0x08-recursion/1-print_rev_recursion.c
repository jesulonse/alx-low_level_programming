#include "main.h"

/**
*_print_rev_recursion - prints a string in reverse.
*@s: input value
*
*Return: nothing
*/
void _print_rev_recursion(char *s)
{
	/*base case*/
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_print_rev_recursion(s + 1);
}
