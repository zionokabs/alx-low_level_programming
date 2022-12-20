#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: A pointer to the first charcter of the string
 *	 to print in reverse.
 */

void print_rev(char *s)
{
	int a, b;

	b = 0;

	while (s[b] != '\0')
		b++;

	for (a = b - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
