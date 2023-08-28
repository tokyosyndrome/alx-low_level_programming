#include <stdio.h>

/**
 *main - print number total
 *Return: the sum of numbers
 */

void main(void)
{
	int i, result;

	i = 1;
	while (result < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			result += i;
		}
		i++;
	}

	 printf("%d", result);
}
