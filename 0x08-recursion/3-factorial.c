#include "main.h"

/**
 * factorial - returns factorial of a number
 * @n: the number in question
 * Return: -1 if n is negative, otherwise, the result
 */

int factorial(int n)
{
	if (n < 0)
		return -1;
	if (n == 0)
		return 1;
	return (n * factorial(n - 1));
}
