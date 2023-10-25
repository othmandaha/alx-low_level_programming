#include "main.h"

/**
 * _puts_recursion - print a string in revers
 * @s: the string to be printed
 */

void _puts_recursion(char *s)
{
	if (*(s) != '\0')
	{
	_puts_recursion(s + 1);
	_putchar(*s);
	}


}
