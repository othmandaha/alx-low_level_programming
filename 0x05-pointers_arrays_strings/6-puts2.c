#include "main.h"

/**
 * puts2 - prints every other character
 * @str: the string from which the character will be printed
 */

void puts2(char *str)
{
	int length = 0;
	int i = 0;

	while (*(str + length) != '\0')
		length++;
	while (i < length)
	{
		_putchar(*(str + i));
		i += 2;
	}
	_putchar('\n');
}
