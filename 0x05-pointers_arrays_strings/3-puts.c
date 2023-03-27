#include "main.h"
/**
 *_puts -prints a string ollowed by a new line
 *@str: the string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
