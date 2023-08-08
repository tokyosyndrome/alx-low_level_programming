#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array with char
 * @size: size of array
 * @c: char to fill array
 *
 * Return: NULL or ptr to array
 */
 
char *create_array(unsigned int size, char c)
{
	char *t;

	unsigned int i;


	if (size == 0)
	{
		return NULL;
	}



	t = malloc(sizeof(char) * size);
	

	for (i=0; i <= size; i++)
	{
		t[i] = c;
	}
	
	return (*t);

}
