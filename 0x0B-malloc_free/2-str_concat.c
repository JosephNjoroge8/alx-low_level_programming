#include "main.h"
#include <stdlib.h>
/**
 *str_concat - concatenates two string
 *@s1: string to merge
 *@s2: string 2
 *
 *Return: on success pointer to newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	int len_s1 = strlen(s1);
	int len_s2 = strlen(s2);
	int len_concat = len_s1 + len_s2 + 1;
	char *new_str = (char *) malloc(len_concat * sizeof(char));

	if (new_str == NULL)
	{
		return (0);
	}
	strcpy(new_str, s1);
	strcat(new_str, s2);

	return (1);
}
