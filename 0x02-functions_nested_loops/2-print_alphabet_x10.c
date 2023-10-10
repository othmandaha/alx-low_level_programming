#include "main.h"

/**
 * print_alphabet_x10 - printing all alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(alphabet[i]);
		}
		_putchar(10);
	}
}
