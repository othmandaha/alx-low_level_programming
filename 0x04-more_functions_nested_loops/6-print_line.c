#include "main.h"

/**
 * print_line - from printing a line
 * @n: the lenth of the line
 */

void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
	i++;
	}
	_putchar(10);
}
