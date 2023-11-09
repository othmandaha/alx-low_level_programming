#include <stdio.h>
#include "variadic_functions.h"
#include <string.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	unsigned int i;
	char *s;
	char *sep = "";
	va_list pa;
	int j;

	i = strlen(format);
	j = 0;
	va_start(pa, format);
	while (i > 1)
	{
		switch (format[j])
		{
			case 'c':
				printf("%s%c", sep, va_arg(pa, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(pa, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(pa, double));
				break;
			case 's':
				s = va_arg(pa, char *);
				if (!s)
					s = "(nil)";
				printf("%s%s", sep, s);
				break;
			default:
				j++;
				continue;
		}
		sep = ", ";
		j++;
	i--;
	}
	printf("\n");
	va_end(pa);
}

