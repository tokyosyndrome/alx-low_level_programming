#include "main.h"

/** prime_help - helper
 * @n: num to check
 * @i: iterator
 * Return: 0 or 1
 */

int prime_help(int n, int i)
{
	if ( i == n)
		return (1);
	if ( n % i == 0)
		return (0);
	return (prime_help(n, i + 1));
}


/**
 * is_prime_number - checks if a number is prime or not
 * @n: number to check
 * Return: 1 if rime, 0 if not
 */

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	return (prime_help(n, 2));

}
