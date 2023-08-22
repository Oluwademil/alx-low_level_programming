#include "main.h"

/**
 *  binary_to_uint - To convert a binary number to an unsigned int
 *  @b: Points to the string of 0 and 1 chars
 *  Return: Converted number or if b contains chars not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{


	unsigned int dec_val = 0;
	int x;


	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{

		if (b[x] < '0' || b[x] > '1')
			return (0);

		dec_val = 2 * dec_val + (b[x] - '0');

	}
	return (dec_val);
}
