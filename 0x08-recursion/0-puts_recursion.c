#include "main.h"

/**
 * _puts_recursion - a function for printing a string using recursion
 * @s: the stirin to be printed
 */

void _puts_recursion(char *s)
{
	if (*(s) == '\0')
	{
		putchar(10);
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);

}
