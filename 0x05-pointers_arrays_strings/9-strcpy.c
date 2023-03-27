#include "main.h"
/**
 *_strcpy - a function that copies a string pointed to by the source
 *@dest: where the string is to be copied to
 *@src: where the string is copied from
 *Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int I = 0;
	int x = 0;

	while (*(src + I) != '\0')
	{
		I++;
	}
	for (; x < I; x++)
	{
		dest[x] = src[x];
	}
	dest[I] = '\0';
	return (dest);
}
