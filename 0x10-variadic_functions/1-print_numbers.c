#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - it print numbers given as arguments
 * @separator: a charater to seperate the numbers with
 * @n: number of arguments (numbers)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pa;

	va_start(pa, n);
	for (i = 0; i < n; i++)
	{
		if (i != n - 1 && *seperator != NULL)
		{
			printf("%d%s", va_arg(pa, int), seperator);
		}
		else if (*sperator == NULL && i != n - 1)
		{
			printf("%d", va_arg(pa, int));
		}
		if (i == n - 1)
			printf("%d\n", va_arg(pa, int));
	}
	va_end(pa);
}
