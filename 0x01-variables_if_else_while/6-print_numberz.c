#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		/**
		 * 48 here in ASCII is '0'
		 * since i = 0 in the first time 48 + 0 = 48 which in ASII equals '0'
		 * in the second time i = 1 so 48 + 1 = 49 which in ASCII equals '1'
		 * and so on...
		 */
		putchar(i + 48);
		i++;
	}
	/* here 10 in ASCII is equal to new line (\n)*/
	putchar(10);
	return (0);
}
