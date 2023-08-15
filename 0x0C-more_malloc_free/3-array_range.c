#include <stdlib.h>
#include "main.h"

/**
 * array_range - fills an array with a sequence of numbers
 * @min: first number
 * @max: last num
 * Return: pointer to the array or NULL on failure
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (!arr)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		arr[i] = min + i;

	return (arr);
}
