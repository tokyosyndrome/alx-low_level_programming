#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 - prints from n to 98
 * @n: starting number
 * Return: nothing
 */

void print_to_98(int n)
{
	int i = n;

	if (i > 99)
		for (i; i > 97; i--)
			printf("%d", i);
	else
		for (i; i < 99; i++)
			printf("%d", i);

	printf("\n");
}
