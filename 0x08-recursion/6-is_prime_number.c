#include "main.h"
int real_prime(int n, int i);
/**
 *is_prime_number - returns 1 if integer is prime number otherwise 0
 *@n: number to evaluate
 *
 *Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}

/**
 *real_prime - recursively calculates whether a n is prime
 *@n: integer to evaluate
 *@i: an iterator
 *
 *Return: 1 when prime, otherwise 0
 */
int real_prime(int i, int n)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (real_prime(n, i - 1));
	_putchar('\n');
}
