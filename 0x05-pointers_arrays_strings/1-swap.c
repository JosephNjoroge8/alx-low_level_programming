#include "main.h"
/**
 *swap_int - a function that swaps the values of two integers.
 *@a: first integer
 *@b: second integer
 *Return: a and b
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
