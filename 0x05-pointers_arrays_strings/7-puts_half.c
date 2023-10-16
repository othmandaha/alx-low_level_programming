#include "main.h"

/**
 * puts_half - printing second half of a string
 * @str: the string to be printed as a second half
 */

void puts_half(char *str)
{
	/*calculating the length of the string*/
	int length = 0;
	int half;

	while (*(str + length) != '\0')
	{
		length++;
	}

	if (length % 2 != 0)
		half = (length + 1) / 2;
	else
		half = length / 2;

	while (half < length)
	{
		_putchar(*(str + half));
		half++;
	}
	_putchar(10);
}

