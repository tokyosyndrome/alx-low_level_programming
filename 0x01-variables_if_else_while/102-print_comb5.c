#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - function that prints the alphabet using putchat
*@void: void
(*
*this function prints a message and returns zero)?
*Return: returns zero
*/
int main(void)
{
	int i;

	int j;

	int k;

	int y;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (y = 1; y < 10; y++)
				{
					if (!(i == k && j == y))
					{
						putchar(48 + i);
						putchar(48 + j);
						putchar(32);
						putchar(48 + k);
						putchar(48 + y);
						if (!(i == 9 && j == 8 && k == 9 && y == 9))
						{
							putchar(44);
							putchar(32);
						}
					}
				}
			}
		}

	}
	putchar('\n');
	return (0);
}
