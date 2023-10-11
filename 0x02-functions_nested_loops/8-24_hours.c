#include "main.h"

/**
 * jack_bauer - couting minutes of the whole day
 */

void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a < 3; a++)
	{
		if ((b == 9) && (a != 2))
		{
			b = 0;
		}
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c < 6; c++)
			{
				for (d = 0; d < 10; d++)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar(10);
				}
			}
		}
	}
}
