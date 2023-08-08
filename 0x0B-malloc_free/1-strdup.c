#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - duplicates string
* @str: str to duplicate
*
* Return: NULL or ptr to str location
*/

char *_strdup(char *str)
{
	char *dup;
	int len;
	int i;

	if (!str)
	{
		return (NULL);
	}

	for (len = 0; str[len]; len++)
		;

	dup = malloc((sizeof(char) * len) + 1);

	if (!dup)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}
	dup[i] = '\0';

	return (dup);
}
