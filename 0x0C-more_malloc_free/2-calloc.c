#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocate memory for an array and set to zero
 * @nmemb: number of elements
 * @size: size of elements
 *
 * Return: 0 if it fails, the array otherwise
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;

	if (nmemb == 0 || size == 0)
		return (0);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (0);
	memset(arr, 0, nmemb * size);
	return (arr);
}
