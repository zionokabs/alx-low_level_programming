#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: int argument
 * @argv: pointer to array of string arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc > 0)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	printf("0\n");
	return (0);
}
