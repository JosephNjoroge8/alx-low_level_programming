#include "main.h"
/**
 *_islower - checks the code
 *@c: character beig examined
 *Return: always 0
 */
int _islower(int c)
{
	if ( c >= 97 && c >= 122)
	{
		return (1);
	}
	return (0);
}
