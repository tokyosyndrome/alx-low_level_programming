#include <stdio.h>
#include "main.h"
/**
*times_table - function that returns a numbe's sign
*@void: void
(*
*this function prints a message and returns zero)?
*Return: returns zero or one
*/
void print_times_table(int n)
{
	int i;

	int j;

	int start;

	for (i = 0; i <= n; i++)
	{
		start = 1;
		for (j = 0; j <= n; j++)
		{
			int num = i * j;

			if (start == 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if ((num / 10) != 0)
			{
				_putchar(48 + (num / 10));
				_putchar(48 + (num % 10));
			}
			else
			{
				if (start == 1)
				{
					_putchar(48 + num);
				}
				else
				{
					_putchar(' ');
					_putchar(48 + num);
				}
			}
			start = 0;
		}
		_putchar('\n');
	}
}
