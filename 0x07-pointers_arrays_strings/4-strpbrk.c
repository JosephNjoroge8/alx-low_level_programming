#include "main.h"
/**
 *_strpbrk - code start point
 *@s: input
 *@accept: second input
 *Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int p;

	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
			if (*s == accept[p])
				return (s);
		}
		s++;
	}
	return ('\0');
}
