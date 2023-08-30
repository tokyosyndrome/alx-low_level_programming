#include "main.h"

/**
 * _pow_recursion - calculates power of a number recursively
 * @x: number
 * @y: power
 * Retrun: powe of x to y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
