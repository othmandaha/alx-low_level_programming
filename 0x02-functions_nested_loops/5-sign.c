#include "main.h"

/**
 * print_sign - print the sign of the numnber
 *
 * @n: number to be checked
 *
 * Return: 1 means positive, 0 means zero, -1 means negative
 */

int print_sign(int n)
{
	int v;

	if (n < 0)
	{
		v = -1;
		_putchar('-');
	}
	else if (n > 0)
	{
		v = 1;
		_putchar('+');
	}
	else
	{
		v = 0;
		_putchar('0');
	}
}

