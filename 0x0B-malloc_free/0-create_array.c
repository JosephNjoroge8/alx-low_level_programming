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
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
