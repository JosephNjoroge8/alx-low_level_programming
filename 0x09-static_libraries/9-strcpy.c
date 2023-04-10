#include "main.h"
/**
 *_strcpy - a function that copies a string pointed to by the source
 *dest: where the string is to be copied to
 *@src: where the string originally resids
 *Return : string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; x < i; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return(dest);
}
