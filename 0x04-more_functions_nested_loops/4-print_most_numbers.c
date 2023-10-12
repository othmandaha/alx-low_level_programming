#include "main.h"

/**
 * print_most_numbers - it print number form 0 to 10 except 2 and 4
 */

void print_most_numbers(void)
{
	char num[] = "01356789";

	int i = 0;

	while (i <= 7)
	{
		_putchar(num[i]);
		i++;
	}
	_putchar(10);
}
