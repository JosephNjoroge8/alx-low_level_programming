#include "main.h"
/**
 *puts_half - prints half of a string
 *@str: input
 *return: half input
 */
void puts_half(char *str)
{
	int a, n, better;

	better = 0;

	for (a = 0; str[a] != '\0'; a++)
		better++;
	n = (better / 2);

	if ((better % 2) == 1)
		n = ((better + 1) / 2);
	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
