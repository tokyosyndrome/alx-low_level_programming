#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - prints a string recursively in reverse
 * @s: pointer to first character of the string
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (!(*s))
	{
		return;
	}
	_print_rev_recursion((s + 1));
	_putchar(*s);
}
