#include <stdio.h>

int main(void)
{
	int size = 10;
	int i = 1;
	int s = 1;
	int c = 0;

	if (size > 0)
	{
		while (i <= size)
		{
			while (s < n)
			{
				_putchar(' ');
			s++;
			}
			while (c < i)
			{
				_putchar('#');
			c++;
			}
			_putchar('\n');
			s = 1 + i;
			c = 0;

		i++;
		}
	}
	else
	{
		_putchar('\n');
	}
	return(0);
}
