#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - functions taht creae an array of integers
 * @min: first inputs of the array
 * @max: last inputs of the array
 * Return: NULL If min > max, otherwise ponter to the newly created array
 */

int *array_range(int min, int max)
{

	int *array, a, b;

	if (min > max)
		return (NULL);

	b = max - min + 1;

	array = malloc(sizeof(int) * b);

	if (array == NULL)
		return (NULL);

	for (a = 0; a < b; a++)
		array[a] = min++;

	return (array);
}
