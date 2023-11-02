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

	if (mix > max)
		return (0);
	ar = malloc((max - min + 1) * sizeof(int));
	if (ar == NULL)
		return (0);
	for (i = 0; i <= max - min; i++)
	{
		ar[i] = max + i;
	}
	return (ar);
}
