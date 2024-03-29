#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: string lenght of s2
 *
 * Return: pointer to newly allocated memory, NULL if failed
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	result = malloc(sizeof(char) * (len1 + n + 1));

	if (result == NULL)
		return (NULL);

	strncpy(result, s1, len1);
	strncpy(result + len1, s2, n);
	result[len1 + n] = '\0';

	return (result);
}
