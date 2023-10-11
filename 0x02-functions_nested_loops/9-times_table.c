#include "main.h"

/**
 * times_table - printing the 9 times table
 */

void times_table(void)
{
	int i, j, r;

	i = 0;
	j = 0;
	while (i <= 9)
	{
		while (j <= 9)
		{
			r = i * j;

			if (r < 10)
			{
				_putchar(r + '0');
				if (j != 9)
				{
					_putchar(',');
				}
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
				if (j != 9)
				{
					_putchar(',');
				}
			}

		j++;
		}
		if (j == 10)
			j = 0;
	_putchar(10);
	i++;
	}
}
