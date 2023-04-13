#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates an arry of characters
 *@c: character to initialize our array with
 *@size: length of the character to be initialized
 *
 *Return: pointer to an arry on success and NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *bok;
	unsigned int i;

	bok = malloc(sizeof(char) * size);

	if (size == 0 || bok == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		bok[i] = c;
	}
	return (bok);
}
