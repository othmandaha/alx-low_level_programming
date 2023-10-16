#include "main.h"

void print_rev(char *str)
{
	char a = *str;
	char z;

	while (*str != '\0')
	{
		z = *str;
		s++;
	}
	*str = z;
	while (*str != a)
	{
		_putchar(*str);
		str--;
	}
	_putchar(a);
	_putchar(10);
		
}
