#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first str
 * @s2: second str
 * @n: first n bytes of s2
 * Return: Null or point to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int i, j;
	unsigned int s1_len, s2_len;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	pointer = malloc(sizeof(s1) + sizeof(s2) + 1);

	if (!pointer)
		return (NULL);

	for (s1_len = 0; s1[s1_len]; s1_len++)
		;

	for (s2_len = 0; s2[s2_len]; s2_len++)
		;

	if (n >= s2_len)
		n = s2_len;

	for (i = 0; i < s1_len; i++)
		pointer[i] = s1[i];

	for (j = 0; j < n; j++)
		pointer[i + j] = s2[j];

	pointer[i + j] = '\0';

	return (pointer);

}
