#include <stdio.h>

int main(void)
{
	int n = 10;
	int i = 1;
	int s = 1;
	int c = 0;
	while (i <= n)
	{
		while (s < n)
		{
			putchar(' ');
		s++;
		}
		while (c < i)
		{
			putchar('#');
		c++;
		}
		putchar('\n');
		s = 1 + i;
		c = 0;
		
	i++;
	}
	return (0);
}
