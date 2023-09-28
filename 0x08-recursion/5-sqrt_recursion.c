#include "main.h"

/**
 * sqrt_help - helps func
 * @n: number
 * @i: increment
 * Return: -1 or result
 */

int sqrt_help(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (sqrt_help(n, i + 1));
}

/**
 * _sqrt_recursion - calculate natural sqrt root
 * @n: number
 * Return: error or result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_help(n, 0));
}
