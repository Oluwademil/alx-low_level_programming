#include "main.h"
#include <stdio.h>

/**
 * get_endianness - Check if endian is big or small
 * Return: 0 if big and 1 if small
 */

int get_endianness(void)
{

	unsigned int x = 1;

	char *str = (char *) &x;

	return (*str);
}
