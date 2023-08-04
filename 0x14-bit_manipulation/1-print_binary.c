#include "main.h"
#include <stdio.h>

/**
 *  print_binary - To print the binary representation of a number
 *  @n: The value to be printed
 */

void print_binary(unsigned long int n)
{

	int x, num = 0;
	unsigned long int new;

	for (x = 63; x >= 0; x--)
	{
		new = n >> x;
		if (new & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
