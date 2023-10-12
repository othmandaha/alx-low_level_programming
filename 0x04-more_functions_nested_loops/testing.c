#include <stdio.h>

/**
 * print_diagonal - print a diagonal line
 * @n: the length of the diagonal line
 */

int main(void)
{
	int i = 1;
	int j = 0;
	int n = 2;
	if (n > 0)
	{
		putchar(92);
		putchar(10);
		while (i < n)
		{
			while (j < i)
			{
				putchar(' ');
			j++;
			}
		putchar(92);
		putchar(10);
		i++;
		j = 0;
		}

	}
	else
	{
		putchar(10);
	}
}
