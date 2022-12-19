#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string whose the length should be returned.
 * Return: The length of s.
 */

int _strlen(char *s)
{

	int a = 0; /* start the counter from 0*/

	for (; *s++;)
		a++;
	return (a);
}
