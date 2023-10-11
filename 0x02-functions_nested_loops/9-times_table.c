#include "main.h"

/**
 * times_table - printing the 9 times table
 */

void times_table(void)
{
	int i, j, r;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			r = i * j;
			_putchar(r + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');

		j++;
		if (j == 9)
		{
			j = 0;
		}
		}
	_putchar(10);
	i++;
	}
}
