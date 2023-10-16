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

	while (*(s + length) != '\0')
	{
		_putchar(s[length]);
		length++;
	}
	i = 0;	
	while (i < length)
	{
		length--;
		rev = s[i];
		s[i] = s[length];
		s[length] = rev;
		i++;

	}
	_putchar(10);
}
