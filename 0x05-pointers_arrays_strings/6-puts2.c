#include "main.h"
/**
 *puts2-prints every other character of a string
 *str: string to provide character
 *
 */
void puts2(char *str)
{
	int change = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++
			change++;
	}
	t = change - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[0]);
	}
	}
	_putchar('\n');
}
