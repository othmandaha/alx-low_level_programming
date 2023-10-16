#include "main.h"

/**
 * rev_string - revers a string 
 * @s: the string to be reversed
 */

void rev_string(char *s)
{
	int length = 0;
	char rev = s[0];
	int i;
	int j;

	while (*(s + length) != '\0')
	{
		_putchar(s[length]);
		length++;
	}
	j = length - 1;		
	while (i <= j)
	{
		rev = s[i];
		s[i] = s[length];
		s[length] = rev;
		length--;
		i++;

	}
	_putchar(10);
}
