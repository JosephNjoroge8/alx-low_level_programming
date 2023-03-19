#include <stdio.h>
/**
  *main - entry point
  *Description: "prints numbers of base 16 into lowercase"
  *Return: always return 0
  */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
