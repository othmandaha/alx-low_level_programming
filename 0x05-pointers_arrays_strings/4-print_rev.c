#include "main.h"

void print_rev(char *str)
{
	char a = *str;

	str--;
	while (str >= &a)
	{
		_putchar(*str);
		str++;
	}
	_putchar(a);
	_putchar(10);
		
}
