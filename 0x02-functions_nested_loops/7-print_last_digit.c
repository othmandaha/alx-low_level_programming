#include "main.h"

/**
 * print_last_digit - gives the last digit in a number
 *
 * @n: the number from which we derive the last digit
 *
 * Return: It give the last digit
 */

int print_last_digit(int n)
{
	int v;

	if (n < 0)
	{
		n = (n % 10) * -1;
		v = n;
	}
	else
		v = n % 10;
	_putchar('0' + v);

	return (v);
}
