#include "main.h"

void print_rev(char *str)
{

	str--;
	str--;
	while (*str != '\0')
	{
		_putchar(*str);
		str--;
	}
	_putchar(10);
		
}
