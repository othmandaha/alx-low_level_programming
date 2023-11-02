#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 *
 * Return: adress if successful, 98 otherwise
 */

void *malloc_checked(unsigned int b)
{
	int *c;

	c = malloc(b);

	if (c >= INT_MAX)
		return ((void *)98);
	if (c == NULL)
		return ((void *)98);
	else
		return ((void *)c);
}

