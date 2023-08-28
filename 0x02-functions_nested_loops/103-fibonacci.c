#include <stdio.h>

/**
 *main - print number total
 *Return: the sum of numbers
 */

int main(void)
{
	long a, b, res, c;

	a = 0;
	b = 1;
	while (a <= 4000000 || b <= 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
			res += c;
	}
	printf("%ld\n", res);
	return (0);
}
