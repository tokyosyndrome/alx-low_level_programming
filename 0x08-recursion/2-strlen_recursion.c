#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - calculates length of string recursively
 * @s: pointer to first character of the string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (!(*s))
	{
		return;
	}
	return(1 + _strlen_recursion((s + 1));
}
