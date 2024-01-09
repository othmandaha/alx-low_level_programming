#include "main.h"

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
