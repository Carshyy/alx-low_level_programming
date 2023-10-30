#include "stdio.h"

/**
 * _print_rev_recursion -reverse print a string
 * @S: string to be printed
 */
void _print_rev_recursion(char *s);
{
	if (*s != '\0')
	{
		_putchar(*s)
		_print_rev_recursion (s+1)
		}
}
