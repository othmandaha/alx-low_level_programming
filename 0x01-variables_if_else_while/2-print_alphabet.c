#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char al[] = "abcdefghijklmnopqrstuvwxyz";

	int i = 0;

	while (i != 26)
	{
		putchar(al[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
