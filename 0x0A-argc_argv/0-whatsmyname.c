#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: int argument
 * @argv: pointer to array of string arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
