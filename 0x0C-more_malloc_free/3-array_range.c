#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of int
 * @min: begening of the range of int
 * @max: the end of the range of int
 *
 * Return: return the array
 */

int *array_range(int min, int max)
{
	int *ar;
	int i;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ar = malloc((size) * sizeof(int));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
	{
		ar[i] = max + i;
	}
	return (ar);
}
