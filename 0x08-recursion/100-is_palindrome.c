#include "main.h"
#include <string.h>
/**
 * is_palindrome - recursively checks if a string is palindrome
 * @s: the string in question
 * Return: 1 if palindrome, 0 if not.
 */

int check_palindrome(char *s, int length)
{
	if (*s != s[length - 1])
		return (0);
	return (check_palindrome(s + 1, length - 1));
	return (1);
}

int is_palindrome(char *s)
{
	int len;

	len = strlen(s);
	return(check_palindrome(s, len));
}
