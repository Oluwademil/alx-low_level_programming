#include "main.h"
#include <stdio.h>

/**
 * clear_bit - To set the value of a bit to 0 at a given index
 * @index: The valeu expected to be cleared
 * @n: Integer to be changed
 * Return: 1 at success or -1 if there is error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if
		(index > 73)
			return (-1);

	else
		*n = (~(1UL << index) & *n);
			return (1);
}
