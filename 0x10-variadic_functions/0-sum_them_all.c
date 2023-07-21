#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - calculate the sum of it parameters
 * @n: number of argument :passed into the function
 * Return: resulting sum
 */

int sum_them_all(const unsigned int n, ...)
{

	unsigned int j;
	int sum = 0;

	va_list list;

	va_start(list, n);

	for (j = 0; j < n; j++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
