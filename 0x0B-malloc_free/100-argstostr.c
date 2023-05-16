#include <stdlib.h>
# include "main.h"
#include <string.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k;
	int total_length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	total_length += strlen(av[i]) + 1;

	str = malloc(sizeof(char) * total_length);

	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	{
		str[k] = av[i][j];
		k++;
	}
	str[k] = '\n';
	k++;
	}

	return (str);
}

