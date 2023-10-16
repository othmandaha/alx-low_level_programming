#include "main.h"

/**
 * swap_int - swap a and b
 * @a: one of the int to be swaped
 * @b: the other int to be swaped with a
 */

void swap_int(int *a, int *b)
{
	int *c = *a;
	*a = *b;
	*b = *c;
}
