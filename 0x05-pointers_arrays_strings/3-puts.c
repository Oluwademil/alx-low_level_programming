#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: pointer to a string
 * Return: string and a new line
 */

void _puts(char *str)
{

	int j = 0;

	while (str[j])
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}

