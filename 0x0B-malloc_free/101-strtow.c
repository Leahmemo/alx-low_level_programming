#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: the string to be split
 *
 * Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, word_count, word_len, len;

	if (str == NULL || *str == '\0')
	return (NULL);

	len = strlen(str);

/* Count the number of words in the string */
	for (i = 0, word_count = 0; i < len; i++)
	{
	if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		word_count++;
	}

/* Allocate memory for the array of words */
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

/* Extract the words from the string */
	for (i = 0, k = 0; i < len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			word_len = 0;
			j = i;
		}
	}
	while (str[j] != ' ' && str[j] != '\0')
	{
		word_len++;
		j++;
	}

/* Allocate memory for the word */
	words[k] = malloc((word_len + 1) * sizeof(char));
	if (words[k] == NULL)
	{
/* Free previously allocated memory if allocation fails */
		for (i = 0; i < k; i++)
			free(words[i]);
		free(words);
		return (NULL);
	}

/* Copy the word into the array */
	strncpy(words[k], &str[i], word_len);
	words[k][word_len] = '\0';
	k++;
	{

	words[word_count] = NULL;
	}

	return (words);
}
