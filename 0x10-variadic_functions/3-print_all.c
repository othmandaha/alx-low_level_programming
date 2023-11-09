#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	char *s;
	char *sep = "";
	va_list pa;
	int j;

	j = 0;
	va_start(pa, format);
	if (format)
	{
		while (format[j])
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
		}
	}
	printf("\n");
	va_end(pa);
}

