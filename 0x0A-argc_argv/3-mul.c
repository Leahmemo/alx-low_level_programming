# include <stdio.h>
# include <stdlib.h>
/**
 * main - prints the result of multiplication
 * @argc: argument counter
 * @argv: the array of strings in the argument
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{

	int i = atoi(argv[1]);
	int j = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else

	{
		printf("%d\n", i * j);
	}
	return (0);
}
