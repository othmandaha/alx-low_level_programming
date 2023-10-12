#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: the length of the diagonal line
 */

void print_diagonal(int n)
{
	int i = 1;
	int j = 0;

	if (n > 0)
	{
		_putchar(92);
		_putchar(10);
		while (i < n)
		{
			while (j < i)
			{
				_putchar(' ');
			j++;
			}

		_putchar(92);
		_putchar(10);
		i++;
		j = 0;
		}

	}
	else
	{
		_putchar(10);
	}
}
