#include "main.h"

int check_nam(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 *is_palindrome - checks whether a string is palidrome
 *@s: string to recurse through
 *
 *Return: 1 when palindrome, 0 if  not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	return (1);
	return (check_nam(s, 0, _strlen_recursion(s)));
}

/**
 *_strlen_recursion - gives the length of a string
 *@s: string to find the length
 *
 *Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 *check_nam - checks the character recursively for a palindrome
 *@s: string to be checked
 *@i: iterator
 *len: length of the string being checked
 *
 *Return: 1 when palindrome 0 otherwise
 */
int check_nam(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_nam(s, i + 1, len - 1));
}
