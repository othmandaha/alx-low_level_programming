#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate space for a 2d array
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: the array if succesful, 0 otherwise
 */

int **alloc_grid(int width, int height)
{
	int **multi;
	int i;
	int j;


	if (width <= 0 || height <= 0)
		return (0);

	multi = malloc(height * sizeof(int));
	if (multi == NULL)
	{
		return (0);
	}

	for (i = 0; i < height; i++)
	{
		multi[i] = malloc(width * sizeof(int));
		for (j = 0; j < width; j++)
		{
			multi[i][j] = 0;
		}
	}

	return (multi);
}
