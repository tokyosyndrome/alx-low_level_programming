#include "main.h"

/**
 * _puts_recursion - prints a string recursively
 * @s: pointer to first character of the string
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	_puts_recursion(*s + 1);
}
