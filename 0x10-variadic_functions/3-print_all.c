#include <stdio.h>
#include "variadic_function.h"
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
	while (i > 0)
	{
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(pa, char));
				break;
			case 'i':
				printf("%d", va_arg(pa, int));
				break;
			case 'f':
				printf("%f", va_arg(pa, float));
				break;
			case 's':
				s = va_arg(pa, char *);
				printf("%s", s);
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

