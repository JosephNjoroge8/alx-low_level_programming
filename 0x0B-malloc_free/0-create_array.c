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
	unsigned int i;
	char *bok = (char *) malloc(sizeof(char));

	if (size == 0 || bok == NULL)
		return (NULL);

	for (int i = 0; i < length; i++)
	{
		bok[i] = c;
	}
	return (bok);
}
