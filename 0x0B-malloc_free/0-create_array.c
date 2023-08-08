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
	char *array;

	unsigned int i;


	if (size == 0)
	{
		return NULL;
	}



	array = malloc(sizeof(char) * size);
	
	if (!array)
	{
		return NULL;
	}	

	for (i=0; i <= size; i++)
	{
		array[i] = c;
	}
	
	return (array);

}
