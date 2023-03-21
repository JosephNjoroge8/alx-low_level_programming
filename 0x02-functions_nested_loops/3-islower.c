#include "main.h"
/**
 *_islower -checks our code
 *@c: character being examined
 *Return: always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
