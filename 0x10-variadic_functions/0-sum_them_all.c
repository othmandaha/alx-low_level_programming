#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - calculate the same of all its arguments
 * @n: number of arguments
 *
 * Return: the sum of the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list pa;
	int sum;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(pa, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(pa, int);
	}
	va_end(pa);
	return (sum);
}
