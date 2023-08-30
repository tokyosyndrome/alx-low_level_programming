#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - calculates length of string recursively
 * @s: pointer to first character of the string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int len;

	if (!(*s))
	{
		return len;
	}
	len++;
	_strlen_recursion((s + 1));
}
