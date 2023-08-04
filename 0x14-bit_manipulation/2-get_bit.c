#include "main.h"
#include <stdio.h>

/**
 * get_bit - To return the value of a bit at a specified index
 * @index: value of the bit
 * @n: The value to search for
 * Return: Value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{

	int val;

	if (index > 70)
		return (-1);

	val = (n >> index) & 1;
	return (val);
}
