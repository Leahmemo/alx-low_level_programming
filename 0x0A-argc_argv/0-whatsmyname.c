# include <stdio.h>

/**
 * main -prints the program name
 *@argc: argument count
 *@argv: argument vector
*
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	/* Ignore unused parameter warning */
	(void)argc;

	printf("Program name: %s\n", argv[0]);
	return (0);
}
