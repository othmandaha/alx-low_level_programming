#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char al[] = "abcdefghijklmnopqrstuvwxyz";

	char AL[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int i = 0;

	int i2 = 0;

	while (i != 26)
	{
		putchar(al[i]);
		i++;
	}
	while (i2 != 26)
	{
		putchar(AL[i2]);
		i2++;
	}
	putchar('\n');

	return (0);
}
