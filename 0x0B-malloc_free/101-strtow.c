#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * word_len - Locates the index marking end of 1st word
 * @str: The string to be searched
 * Return: The index marking the end of the initial word pointed to by str.
 */

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

int word_len(char *str)
{
	int x = 0, len = 0;

	while (*(str + x) && *(str + x) != ' ')
	{
		len++;
		x++;
	}

	return (len);
}

/**
 * count_words - Counts the number of words contained in a string.
 * @str: The string to be searched.
 * Return: The number of words contained within str.
 */

int count_words(char *str)
{
	int x = 0, words = 0, len = 0;

	for (x = 0; *(str + x); x++)
		len++;

	for (x = 0; x < len; x++)
	{
		if (*(str + x) != ' ')
		{
			words++;
			x += word_len(str + x);
		}
	}

	return (words);
}

/**
 * strtow - Spliting a string
 * @str: The string to be split.
 * Return: If str = NULL, str = "", or the function fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 */

char **strtow(char *str)
{
	char **strings;
	int x = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[x] == ' ')
			x++;

		letters = word_len(str + x);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			strings[w][l] = str[x++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}
