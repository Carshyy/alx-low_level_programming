#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - function name
 * declaration - print out alphabets 10 times
 *
 * Return : void
 */

void print alphabet x10(void)
{
	int alphabets;
	int b;

	for (b = 1; b <= 10; b++)
	{
		for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		{
			putchar(alphabets);
		}
	         putchar('\n');
	}
}
