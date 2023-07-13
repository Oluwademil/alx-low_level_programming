#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Write a function that allocates memory using mallocs
 * @b: number of bytes to be allocated
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{

	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
