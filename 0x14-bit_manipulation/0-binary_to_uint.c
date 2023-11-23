#include "main.h"

/**
 * _pow - calculates the result of the power of a number.
 * @base: the base to be raised.
 * @exponent: the exponent to raise to.
 * Return: the result of the calculation
 */
unsigned int _pow(unsigned int base, unsigned int exponent)
{
	unsigned int i;
	unsigned int result = 1;

	for (i = 0; i < exponent; i++)
	{
		result *= base;
	}
	return (result);
}

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int power = 0;
	unsigned int decimal = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		if (b[i] == '0')
			power++;
		else if (b[i] == '1')
		{
			decimal += _pow(2, power);
			power++;
		}
		else
			return (0);
	i--;
	}
	return (decimal);
}
