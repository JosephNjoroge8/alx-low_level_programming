#include "main.h"
#include <stdlib.h>
/**
 *count_word - counts word in a particular string
 *@s: string in quest
 *Return: number of words
 */
int count_word(char *s)
{
	int flow, g, k;

	flow = 0;
	k = 0;

	for (g = 0; s[g] != '\0'; g++)
	{
		if (s[g] == ' ')
			flow = 0;
		else if (flow == 0)
		{
			flow = 1;
			k++;
		}
	}
	return (k);
}
/**
 *strtow - splits a string into two words
 *@str: string to be split
 *Return: a pointer on success and 0 on fail
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, q = 0, len = 0, words, c = 0, start = 0, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	matrix = malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
				{
					free(matrix);
					return (NULL);
				}
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[q] = tmp - c;
				q++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	matrix[q] = NULL;
	return (matrix);
}
