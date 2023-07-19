#include <stdio.h>
#include "main.h"
/**
*times_table - function that returns a numbe's sign
*@void: void
(*
*this function prints a message and returns zero)?
*Return: returns zero or one
*/
void times_table(void)
{
	int i;

	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(48 + (i * j));
			_putchar('\n');
		}
	}
}
