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

	size = strlen(str);
	if (size == 0 || str[0] == '\0')
		return (0);

	cpy = malloc(size * sizeof(char));
	while (i < size)
	{
		cpy[i] = str[i];
		i++;
	}
	return (cpy);
}
