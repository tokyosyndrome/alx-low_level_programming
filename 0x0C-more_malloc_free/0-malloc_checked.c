#include <stdio.h>
#include <stdlib.h>

/*malloc_checked: function that checks malloc fail
 * @b: size of memory
 * RETURN : nothing
 */

void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b);
	if (!mem)
		exit(98);
}
