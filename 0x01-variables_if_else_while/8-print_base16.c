#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	int x = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	while (x < 6)
	{
		putchar(x + 'a');
		x++;
	}
	putchar(10);
	return (0);
}
