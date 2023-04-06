#include "main.h"
/**
 *factorial - funtions to return a factorial of a given int
 *@n: integer to factorize
 *
 *Returns: factor
 */
int factorial(int n)
{
	int  n;

	 if (n < 0)
		 return (-1);
	 if (n == 0)
		 return (1)
	 return (n * factorial(n - 1));
	 _putchar('\n');
}
