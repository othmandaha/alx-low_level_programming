#include "main.h"

/**
 * more_numbers - print numbers to 14 ten times
 */

void more_numbers(void)
{
	char num[] = "01234567891011121314";

	int i = 0;

	int j = 0;

	while (j < 10)
	{
		while (i <= 19)
		{
			_putchar(num[i]);
		i++;
		}
		_putchar(10);
		i = 0;
	j++;
	}
}
