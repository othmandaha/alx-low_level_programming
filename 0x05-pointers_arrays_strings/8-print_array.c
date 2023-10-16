#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints elements of array
 * @a: the array
 * @n: number of elements in the array
 */

void print_array(int *a, int *n)
{
int i;
for(i = 0; i < *n; i++)
		printf("%d, ", a[i]);
}
