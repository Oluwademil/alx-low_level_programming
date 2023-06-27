#include "main.h"

/**
 * print_rev - prints a stribg in rzverse, followed by a new line
 * @s: the used string ref pointer
 * Return:
 */

void print_rev(char *s)

{

	int begins = 0;

	while (s[begins])
		begins++;
	while (begins--)
		_putchar(s[begins]);
	_putchar('\n');

}
