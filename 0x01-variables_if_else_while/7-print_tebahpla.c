#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char al[] = "abcdefghijklmnopqrstuvwxyz";

	int i = 25;

	while (i >= 0)
	{
		putchar(al[i]);
		i--;
	}
	putchar(10);
	return (0);
}
