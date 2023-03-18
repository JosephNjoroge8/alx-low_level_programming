#include <stdio.h>
/**
  *main - entry point
  *Description: "print a single digit number of base 10"
  *Return: always returns 0
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf('\n');
	return (0);
}
