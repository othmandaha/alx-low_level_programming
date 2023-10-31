#include <stdlib.h>
#include "main.h"

/**
 * create_array - allocate memory for an array
 * @size: size of the array
 * @c: character to initialize the array with
 *
 * Return: null or pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	int i;

	if (size == 0)
	{
		return (0);
	}
	char *ar = (char *)malloc(size * sizeof(char));

	if (ar == NULL)
	{
		return (0);
	}
	else
	{
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	}

	return (ar);

}
