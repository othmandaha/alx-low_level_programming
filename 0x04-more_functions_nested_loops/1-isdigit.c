#include "main.h"

/**
 * _isdigit - checking for digits
 * @c: The number to be checked
 * Return: return 1 if c is a digit, otherwise return 0
 */

int _isdigit(int c)
{
	int i;

	if (c >= '0' && c <= '9')
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}	
