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

	for (i = 0; i < 9; i++)
	{
		for (j = 1; j < 10; j++)
		{
			if (i != j)
			{
				putchar(48 + i);
				putchar(48 + j);
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
