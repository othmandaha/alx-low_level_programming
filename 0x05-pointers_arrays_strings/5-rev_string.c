#include "main.h"

/**
 * rev_string - revers a string 
 * @s: the string to be reversed
 */

void rev_string(char *s)
{
	int length = sizeof(*s);
	length--;

	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar(10);
}
