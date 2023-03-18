#include <stdio.h>
/**
  *main - entry point
  *Description: "converts lower case to upper case
  *Return: always returns 0
  */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
