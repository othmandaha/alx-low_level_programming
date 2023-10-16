#include "main.h"

void print_rev(char *str)
{
	char a = *str;

	str =- 2;
	while (*str != '\0')
	{
		_putchar(*str);
		str--;
	}
	_putchar(10);
		
}
