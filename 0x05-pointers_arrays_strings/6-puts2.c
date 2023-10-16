#include "main.h"

/**
 * puts2 - prints every other character
 * @str: the string from which the character will be printed
 */

void puts2(char *str)
{
	int length = 0;
	while (*str != '\0')
	{
		_putchar(*(str + length));
		length += 2;
	}
}
