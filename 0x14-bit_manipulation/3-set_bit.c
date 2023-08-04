#include "main.h"
#include <stdio.h>

/**
 *  set_bit - To set the value of a bit to 1 at a given index
 *  @index: The value to be set to 1
 *  @n: The value to be changed
 *  Return: 1 at success or -1 at error
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if
		(index > 73)
			return (-1);
	else
		*n = ((1UL << index) | *n);
	return (1);
}
