#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat -  function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytesof s2 to concatenate to s1
 * Return: NULL if funtion fails, otherwise a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *concat;
	unsigned int len = n, x;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x]; x++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (x = 0; s1[x]; x++)
		concat[len++] = s1[x];

	for (x = 0; s2[x] && x < n; x++)
		concat[len++] = s2[x];

	concat[len] = '\0';

	return (concat);
}







