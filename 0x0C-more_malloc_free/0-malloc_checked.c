#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - function that checks malloc fail
 * @b: size of memory
 * Retrun: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);

	return (mem);
}
