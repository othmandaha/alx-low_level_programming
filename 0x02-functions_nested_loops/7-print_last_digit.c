#inlclude "main.h"

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

	v = n % 10;

	_putchar('0' + v);

	return (v);
}
