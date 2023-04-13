#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_strdup - returns a pointer to anewly allocated memory
 *@str: string to be copied
 *
 *Return: pointer to duplicate on success and NULL if str = Null
 */
char *_strdup(char *str)
{
	char *typo;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	typo = malloc(sizeof(char) * (i + 1));

	if (typo == NULL)
	{
		return (NULL);
	}
	for (r = 0; str[j]; j++)
		typo[j] = str[j];

	return (typo);
}
