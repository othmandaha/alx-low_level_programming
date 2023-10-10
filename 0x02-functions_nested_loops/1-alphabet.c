#include "main.h"

/**
 * main - Entry point
 *
 * print_alphabet - For printing alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int i = 0;

	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		_putchar(alphabet[i]);
	}
	_putchar(10);
}
