#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of element
 * @size: byte size of each array
 * Return: NULL if nmem or size is 0, otherwise pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	void *n;
	char *x;
	unsigned int y;

	if (nmemb == 0 || size  == 0)
		return (NULL);

	n = malloc(size * nmemb);

	if (n == NULL)
		return (NULL);
	x = n;

	for (y = 0; y < (size * nmemb); y++)

		x[y] = '\0';
	return (n);
}

