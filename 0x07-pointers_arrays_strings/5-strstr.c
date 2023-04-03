#include "main.h"
/**
 *_strstr- entry point
 *@haystack: input
 *@needle: input
 *Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *h = needle;
		
		while (*i == *h && *p != '\0')
		{
			i++;
			h++;
		}
		if (*h == '\0')
			return (haystack);
	}
	return (0);
}
