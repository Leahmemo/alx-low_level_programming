#include <stdlib.h>
# include "main.h"
#include <string.h>

/**
 * str_concat - concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int l1, l2, tl;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = strlen(s1);
	l2 = strlen(s2);
	tl = l1 + l2;

	concat = malloc((tl + 1) * sizeof(char));

	if (concat == NULL)
	return (NULL);

	for (i = 0; i < l1; i++)
	concat[i] = s1[i];
	for (j = 0; j < l2; j++)
	concat[i++] = s2[j];

	concat[i] = '\0';

	return (concat);
}
