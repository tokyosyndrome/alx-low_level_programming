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
	if (*s == '\n')
	{
		_putchar(*s);
		return;
	}
	_putchar(*s + len - 1);
	_print_rev_recursion((s + 1));
}
