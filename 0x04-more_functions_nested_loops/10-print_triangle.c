#include "main.h"

/**
 * print_triangle - printing a triangle
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int i = 1;
	int s = 1;
	int c = 0;

	if (size > 0)
	{
		while (i <= size)
		{
			while (s < size)
			{
				_putchar(' ');
			s++;
			}
			while (c < i)
			{
				_putchar('#');
			c++;
			}
			_putchar('\n');
			s = 1 + i;
			c = 0;

		i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}

