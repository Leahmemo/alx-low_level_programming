#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: array of pointers to argument strings
 *
 * Return: 0 if successful, 1 if an error occurs
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int i, j;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
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

