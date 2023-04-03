#include "main.h"
/**
 *_memcpy - copies the memory area
 *@dest: initial storage memory
 *@src: final memory where fuction is copied
 *@n: number of bytes
 *
 *return: copied memory with n number of changed bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int l = n;

	while (k < l)
	{
		dest[k] = src[k];
		n--;
	}
	k++;
	return (dest);
}
