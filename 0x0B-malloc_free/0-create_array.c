#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - create an array of chars and initialize with specific char
 * @size: the size of the array to be initialized
 * @c: char to initialize the aray
 * Return: if size == 0 or the funtion fails - NULL
 * otherwise - pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
