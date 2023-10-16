#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints elements of array
 * @a: the array
 * @n: number of elements in the array
 */

void print_array(int *a, int n)
{
	int i;
	if (n <= 0);
		putchar(10);
	for (i = 0; i < n; i++)
		if (i == n - 1)
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);
}
