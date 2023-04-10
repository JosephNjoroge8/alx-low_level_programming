#include "main.h"
/**
 *_strlen - returns the length of a string
 *@s: string to find length
 *Return: length
 */
int _strlen(char *s)
{
	int Better = 0;

	while (*s != '\0')
	{
		Better++;
		s++;
	}
	return (Better);
}
