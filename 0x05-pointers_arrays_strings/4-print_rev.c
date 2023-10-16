#include "main.h"

void print_rev(char *s)
{

	s--;
	s--;
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar(10);
		
}
