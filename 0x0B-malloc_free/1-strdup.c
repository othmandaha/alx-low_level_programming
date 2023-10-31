#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - allocate momory to store a copy of str
 * @str: the string to be copied
 *
 * Return: a pointer to the copied string
 */

char *_strdup(char *str)
{
	unsigned int size;
	char *cpy;
	unsigned int i;

	i = 0;

	if (str == NULL)
	{
		return (0);
	}

	size = strlen(str);

	if (size == 0)
	{
		cpy = malloc(1);
	}
	cpy = malloc((size + 1) * sizeof(char));
	while (i < size)
	{
		cpy[i] = str[i];
		i++;
	}
	return (cpy);
}
