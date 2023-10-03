#include "main.h"
#include <stdlib.h>

/**
* strtow - convert a string into words
* Description:
* @str: input string
*
* Return: pointer to array of words generated from string
*/

char **strtow(char *str)
{
	int numWords, i, word_index = 0, word_length = 0, inWord = 0;
	char **words = NULL;

	if (str == NULL || *str == '\0' || (str[0] == ' ' && str[1] == '\0'))
	{
		return (NULL);
	}
	numWords = word_count(str);
	words = (char **)malloc((numWords + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}

	while (*str)
	{
		if (*str == ' ')
		{
			inWord = 0;
		}
		else
		{
			if (!inWord)
			{
				inWord = 1;
				word_length = 1;
			}
			else
			{
				word_length++;
			}
		}
		str++;
		if ((!*str || *str == ' ') && inWord)
		{
			words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
			if (words[word_index] == NULL)
			{
				for (i = 0; i < word_index; i++)
				{
					free(words[i]);
				}
				free(words);
				return (NULL);
			}
			_strncpy(words[word_index], str - word_length, word_length);
			words[word_index][word_length] = '\0';
			word_index++;
		}
	}
	words[numWords] = NULL;
	return (words);
}


/**
* word_count - counts number of words in a string
* @str: string to be checked
*
* Return: returns number of words in the string
*/

int word_count(char *str)
{
	int count = 0, inWord = 0;

	while (*str)
	{
		if (*str == ' ')
		{
			inWord = 0;
		}
		else
		{
			if (!inWord)
			{
				count++;
			}
			inWord = 1;
		}
	str++;
	}
	return (count);
}

/**
* _strncpy - copies a string
* Description:
* @dest: pointer to concatenated string
* @src: pointer to string to be added to dest
* @n: number of characters of src to be added to dest
* Return: pointer to dest variable
*/

char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);

}
