#include "main.h"

/**
 * main - Entery point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char str[] = "_putchar";

	for (int i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}

	_putchar(10);

	return (0);
}
