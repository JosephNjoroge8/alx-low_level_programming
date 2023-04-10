#include <stdio.h>
#include "main.h"
/**
 *_putchar - wites a character to the stdout
 *@c: character to be printed
 *Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
