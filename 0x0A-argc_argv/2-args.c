# include <stdio.h>

/**
 * main - prints all arguments
 * @argc: argument count
 * @argv: the array of strings containig argument
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{

	int i;

	/*ignore unused parameters*/
	(void)argc;


	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
