#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if a string is palindrome
 * @s: the string to be checked
 *
 * Return: return 1 if the string is palindorme 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = strlen(s);
	if (len <= 1)
		return (1);
	else if (*(s) == *(s(len - 1)))
	{
		return (is_palindrome(s + 1));
	}
	else
		return (0);
	       	
}
