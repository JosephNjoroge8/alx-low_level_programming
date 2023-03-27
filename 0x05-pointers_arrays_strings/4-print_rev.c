#include "main.h"
/**
 *print_rev - prints a string in reverse
 *@s: string to be reversed
 *return: 0
 */
void print_rev(char *s)
{
	int money = 0;
	int o;

	while (*s != '\0')
	{
		money++;
		s++;
	}
	s--;
	for (o = money; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
