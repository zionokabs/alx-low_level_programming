#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: A pointer to the first charcter of the string
 *	 to print in reverse.
 */
void print_rev(char *s)
{
	int n = _strlen(s);
	int i;

	for (i = n - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
