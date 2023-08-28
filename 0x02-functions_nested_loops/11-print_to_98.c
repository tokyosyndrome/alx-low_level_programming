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
	int i;

	for (i = n; i < 99; i++)
		printf("%d", i);
	
	printf("\n");
}
