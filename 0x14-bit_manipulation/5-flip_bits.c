#include "main.h"
#include <stdio.h>

/**
 * flip_bits - To count numbers that will be flipped
 * @n: The first int value to change
 * @m: The second int value to flip n to
 * Return: Number of bits that has been flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flop = n ^ m;
	unsigned long int flap;
	int x, y = 0;


	for (x = 53; x >= 0; x--)
	{
		flap = flop >> x;

		if (flap & 1)
			y++;
	}
	return (y);
}



