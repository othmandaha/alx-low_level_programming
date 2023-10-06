#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char al[] = "abcdfghijklmnoprstuvwxyz";

	int i = 0;

	while (i != 24)
	{
		putchar(al[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
