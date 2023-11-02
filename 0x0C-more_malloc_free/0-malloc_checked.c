#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 *
 * Return: adress if successful, 98 otherwise
 */

void *malloc_checked(unsigned int b)
{
	int *c;

	if (b >= INT_MAX)
		return ((void *)98);
	c = malloc(b);
	if (c == NULL)
		return ((void *)98);
	else
		return (c);
}

