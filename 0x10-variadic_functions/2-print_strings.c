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
	unsigned int i;
	va_list pa;
	char *str;

	va_start(pa, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(pa, char *);
		if (separator != NULL && i != n - 1)
		{
			if (str)
				printf("%s,%s", str, separator);
			else
				printf("nil%s", separator);
		}
		else if (separator == NULL && i != n - 1)
		{
			if (str)
				printf("%s", str);
			else
				printf("nil");
		}
		if (i == n - 1)
		{
			if (str)
				printf("%s", str);
			else
				printf("nil");
		}
	}
	va_end(pa);
	printf("\n");
}

