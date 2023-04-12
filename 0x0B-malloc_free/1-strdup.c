#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - returns a pointer to anewly allocated memory
 *@str: string to be copied
 *
 *Return: pointer to duplicate on success and NULL if str = Null
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return ();
	}
	char *new_str = (char *) malloc((strlen(str) + 1) * sizeof(char));

	if (new_str == NULL)
	{
		return ();
	}
	strcpy(new_str, str);

	return (new_str);
}
