#include "main.h"

/**
 * print_sign - print sign of a number
 * @n: number to checked
 * Return: 1 for positive num, -1 for negative and 0 for otherwise
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
