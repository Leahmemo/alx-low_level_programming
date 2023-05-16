# include "main.h"
# include <stdlib.h>
# include <string.h>

/**
 * _strdup - returns a pointer to a new str which is a duplicate
 * @str: string to duplicate
 *
 * Return: pointer to duplicate, NULL if str is empty
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length;

	if (str == NULL)
		return (NULL);

	length = strlen(str) + 1;
	duplicate = malloc(length * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	strcpy(duplicate, str);
	return (duplicate);
}
