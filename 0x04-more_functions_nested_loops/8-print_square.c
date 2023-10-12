#include "main.h"

/**
 * print_square - printing a square using '#'
 * @size: the given size of the square
 */

void print_square(int size)
{
	int i = 0;

	int j = 0;

	while (i < size)
	{
		while (j < size)
		{
			_putchar('#');
		j++;
		}
		_putchar(10);
		j = 0;
	i++;
	}
	_putchar(10);
}
