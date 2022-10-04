#include "main.h"
#include <stdlib.h>

int count_words(char *str);
char **create_words(char **words, char *str);

/**
 * strtow - split a string to words
 * @str: a pointer to string
 *
 * Description: a function that splits a string into words.
 * Return: a pointer to array of strings or NULL if failure.
 */
char **strtow(char *str)
{
	char **words;
	int wc;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	wc = count_words(str);
	if (wc == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (wc + 1));
	if (words == NULL)
		return (NULL);

	return (create_words(words, str));
}

/**
 * count_words - count words seperated by space in a string
 * @str: a pointer to string
 *
 * Return: number of words
 */
int count_words(char *str)
{
	int i;
	int flag_inword = 0;
	int word_count = 0;

	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] != ' ')
		{
			if (flag_inword)
			{
				continue;
			}
			else
			{
				flag_inword = 1;
			}
		}
		else
		{
			if (flag_inword)
			{
				word_count++;
				flag_inword = 0;
			}
		}
	}
	if (flag_inword)
		word_count++;

	return (word_count);
}

/**
 * make_word - get word from string
 * @str: a poniter to string
 * @index: start point
 * @bytes: number of characters to get
 *
 * Return: a pointer to string or NULL if failure.
 */
char *make_word(char *str, int index, int bytes)
{
	int i;
	char *p;

	p = malloc(sizeof(char) * (bytes + 1));
	if (p == NULL)
		return (NULL);

	for (i = index; i < bytes + index; i++)
	{
		p[i - index] = str[i];
	}
	p[i] = '\0';

	return (p);
}

/**
 * free_words - use free() to deallocate words
 * @words: an array of strings
 * @end: number of strings to free
 */
void free_words(char **words, int end)
{
	int i;

	for (i = 0; i < end; i++)
	{
		free(words[i]);
	}
	free(words);
}

/**
 * create_words - append strings into array
 * @words: a pointer to array of strings
 * @str: a pointer to string
 *
 * Return: a pointer to array of strings or NULL if failure.
 */
char **create_words(char **words, char *str)
{
	int flag_inword = 0;
	int word_start, word_size = 0;
	int i, j = 0;

	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] != ' ')
		{
			if (flag_inword)
			{
				word_size++;
			}
			else
			{
				flag_inword = 1;
				word_size++;
				word_start = i;
			}
		}
		else
		{
			if (flag_inword)
			{
				flag_inword = 0;
				words[j++] = make_word(str, word_start, word_size);
				if (words[j - 1] == NULL)
				{
					free_words(words, j - 1);
					return (NULL);
				}
				word_size = 0;
			}
		}

	}
	if (flag_inword)
		words[j++] = make_word(str, word_start, word_size);
	words[j] = NULL;

	return (words);
}
