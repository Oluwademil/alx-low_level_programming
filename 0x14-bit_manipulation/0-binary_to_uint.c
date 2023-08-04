#include "main.h"
#include <stdio.h>

/**
 *  binary_to_uint - To convert a binary number to an unsigned int
 *  @b: Points to the string of 0 and 1 chars
 *  Return: Converted number or if b contains chars not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{


	unsigned int num = 0, mult = 1;
	int x;


	if (b == '\0')
		return (0);

	for (x = 0; b[x];)
		x++;

	for (x -= 1; x >= 0; x--)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		
		num += (b[x] - '0') * mult;
		mult *= 2;
	}
	return (num);
}
