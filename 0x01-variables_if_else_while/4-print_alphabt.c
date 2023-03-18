#include <stdio.h>
/**
  *main - entry point
  *Decription : "prints to lowercase and a neline"
  *Return: Always return 0
  */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
