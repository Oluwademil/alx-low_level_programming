#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers given as parameter
 * @separator: string to be printed between numbbers
 * @n: number of arguments passed into the funtion
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int j;
	va_list list;

	va_start(list, n);

	for (j = 0; j < n; j++)
	{
		if (!separator)
			printf("%d", va_arg(list, int));
		else if (separator && j == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
	}
		va_end(list);
		printf("\n");
}
