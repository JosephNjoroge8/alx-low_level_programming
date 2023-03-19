#include <stdio.h>
/**
  *main- The entry point
  *Description: "printing lowercase alphabet in reverse"
  *Return: always  return 0
  */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
