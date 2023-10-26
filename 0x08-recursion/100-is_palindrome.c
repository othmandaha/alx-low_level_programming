#include "main.h"

/**
 * is_palindrome - checks if a string is palindrome
 * @s: the string to be checked
 *
 * Return: return 1 if the string is palindorme 0 otherwise
 */

int is_palindrome(char *s)
{
	int half = _strlen_recursion(s) / 2;
	if (*(s) != *(s + half + 1))
		return (1);
	else if (*(s) == *(s + half + 1) && *(s) != *(s + half))
	{
		return (0);
	}
	else
		return (is_palindrome(s + 1));
	       	
}
