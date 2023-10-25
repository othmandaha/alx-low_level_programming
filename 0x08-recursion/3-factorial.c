#include "main.h"

/**
 * factorial - calculates the factorial of a given number
 * @n: the number to find the factural of
 * Return: it returns the facturial
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	if (n < 0)
	{
		return (-1);
	}
}
