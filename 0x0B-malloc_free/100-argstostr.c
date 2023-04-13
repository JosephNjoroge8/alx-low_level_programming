#include "main.h"
#include <stdlib.h>
/**
 *argstostr - concatenates all the arguments of your program
 *@ac: first argument to concatenate
 *@av: second argument to concatenate
 *
 *Return: pointer to a new string on success, Null if fails
 */
char *argstostr(int ac, char **av)
{
	int i, h, t = 0, m = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (h = 0; av[i][h]; h++)
			m++;
	}
	m += ac;

	str = malloc(sizeof(char) * m + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (h = 0; av[i][h]; h++)
		{
			str[t] = av[i][h];
			t++;
		}
		if (str[t] == '\0')
		{
			str[t++] = '\n';
		}
	}
	return (str);
}
