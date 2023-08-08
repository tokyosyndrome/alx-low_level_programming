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
	char *container;
	
	container = malloc(sizeof(char) * strlen(str));

	container[] = str;

	return (*container);
}	
