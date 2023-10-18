#include "main.h"

/**
 * reverse_array - it reverses the order of an array
 * @a: the array to be reversed
 * @n: the size of the array
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
