#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - it print given string arguments
 * @separator: char to seperate the strings with
 * @n: number of arguments (strings)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list pa;

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != n - 1)
		{
			if (va_arg(pa, char))
				printf("%s,%s", va_arg(pa, char), separator);
			else
				printf("nil%s", separator);
		}
		else if (separator == NULL && i != n - 1)
		{
			if (va_arg(pa, char))
				printf("%s", va_arg(pa, char));
			else
				printf("nil");
		}
		if (i == n - 1)
		{
			if (va_arg(pa, char))
				printf("%s", va_arg(pa, char));
			else
				printf("nil");
		}
	}
	va_end(pa);
	printf("\n");
}

