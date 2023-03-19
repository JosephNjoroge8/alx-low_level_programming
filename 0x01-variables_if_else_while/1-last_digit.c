#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - the entry point
  *Description: "print the last digit of the choosen no"
  *Return: always 0
  */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit > 5)
	{
		printf("last digit of %d is %d and is greator than 5\n", n, lastDigit);
	}
	else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("last digit of %d is %d and less than 0 and not 0\n", n, lastDigit);
	}
	else
	{
		printf("last digit of %d is %d and is 0\n", n, lastDigit);
	}
	return (0);
}
