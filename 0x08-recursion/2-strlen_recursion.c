#include "main.h"

/**
 * _strlen_recursion - finding the lentgth of a string
 * @s: the string to be calculated
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int n;

	if (*(s) != '\0')
	{
		n = _strlen_recursion(s + 1);
		return (n + 1);
	}
}

