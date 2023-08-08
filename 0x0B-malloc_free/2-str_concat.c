#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strconcat - duplicates string
* @s1: str1
* @s2: str2
* Return: NULL or ptr to str location
*/

char *str_concat(char *s1, char *s2)
{
	char *catstr;
	int len1;
	int len2;
	int i;
	int j;

	if (!s1 && !s2)
	{
		return (NULL);
	}
	if (s1)
	{
		for (len1 = 0; s1[len1]; len1++)
			;
	}
	if (s2)
	{
		for (len2 = 0; s2[len2]; len2++)
			;
	}

	catstr = malloc((sizeof(char) * len1) + (sizeof(char) * len2) + 1);

	if (!catstr)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		catstr[i] = s1[i];
	}

	for (j = 0; j < len2; j++, i++)
	{
		catstr[i] = s2[j];
	}
	catstr[i] = '\0';

	return (catstr);
}
