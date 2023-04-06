#include "main.h"
/**
 *_strlen_recursion - function to return the total length of a string
 *@s: string to calculate length
 *
 *Return: length
 */
int _strlen_recursion(char *s)
{
	int measuret = 0;

	if (*s)
	{
		measuret++;
		measuret += _strlen_recursion(s + 1);
	}
	return (measuret);
	_putchar('\n');
}
