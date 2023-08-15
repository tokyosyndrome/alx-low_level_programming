#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of array elements
 * @size: size of array elements
 * Return: pointer to the array or NULL on failure.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);

	array = malloc(size * nmemb);

	if (!array)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		array[i] = 0;

	return (array);

}
