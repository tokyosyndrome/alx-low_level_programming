#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - prints a string recursively in reverse
 * @s: pointer to first character of the string
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	int len;
	
	len = strlen(s);
	if (*s == s[0])
	{
		_putchar('\n');
		return;
	}
	_putchar(*(s + len));
	_puts_recursion((s - 1));
}