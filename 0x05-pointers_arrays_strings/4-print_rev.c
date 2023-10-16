#include "main.h"

void print_rev(char *str)
{
	char b = *str;
	str--;
	while(*str != b)
	{
		_putchar(*str);
		str--;
	}
	str++;
	_putchar(b);
	_putchar(10);
}
