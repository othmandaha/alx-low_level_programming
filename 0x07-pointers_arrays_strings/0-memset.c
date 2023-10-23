#include "main.h"

/**
 * _memset - fills memory
 * @s: the starting point
 * @b: the data to be filled with
 * @n: the size
 *
 * Return: returns the adress of the starting point
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
