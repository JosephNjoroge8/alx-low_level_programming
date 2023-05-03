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
	char *ddd;
	int j, k = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;

	ddd = malloc(sizeof(char) * (j + 1));

	if (ddd == NULL)
		return (NULL);

	for (k = 0; str[k]; k++)
		ddd[k] = str[k];

	return (ddd);
}
