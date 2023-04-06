#include "main.h"
int real_sqrt_recursion(int n, int i);

/**
 *_sqrt_recursion - returns the square root of an integer
 *@n: number from which to calculate the integer
 *
 *Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}

/**
 *real_sqrt_recursion - recurses to find the natural root of an integer
 *@n: number to find it root
 *@i: iterator
 *
 *Return: the square root of n
 */
int real_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (real_sqrt_recursion(n, i + 1));
}
