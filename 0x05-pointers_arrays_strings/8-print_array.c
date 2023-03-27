#include "main.h"
/**
 *print_array - function that prints n elements of an array integers
 *@a: inputs
 *@n: elements of the array integer
 *return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		_putchar("%d,", a[i]);
	}
		if (i == (n - 1))
		{
			_putchar("%d", a[n - 1]);
		}
			_putchar("\n");
}
