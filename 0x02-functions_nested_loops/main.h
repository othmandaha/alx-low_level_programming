#include <stdio.h>

/**_putchar - this is a function to print "_putchar"
 *
 * 
 */

void _putchar(void)
{
	char c[] = "_putchar";
	
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		putchar(c[i]);
	}
	putchar(10);
}
