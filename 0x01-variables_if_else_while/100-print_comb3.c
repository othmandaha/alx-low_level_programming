#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		int x = i + 1;

		while (x <= 9)
		{
			putchar(i + '0');
			putchar(x + '0');
			if (!(i >= 8 && x >= 9))
			{
				putchar(',');
				putchar(' ');
			}
			x++;
		}
		i++;
	}
	putchar(10);
	return (0);
}
