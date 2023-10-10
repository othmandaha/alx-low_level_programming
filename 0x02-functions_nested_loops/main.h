#include <stdio.h>

/**_putchar - this is a function to print "_putchar"
 *
 * 
 */

void _putchar(void)
{
	char c[] = "_putchar";
	
	int i = 0;

	while (i < 8)
	{
		putchar(c[i]);
	}
}
