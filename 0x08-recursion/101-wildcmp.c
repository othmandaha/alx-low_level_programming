#include "main.h"
#include <string.h>

/**
 * wildcmp - check if s1 is identical to s2
 * @s1: one of the strings to be checked
 * @s2: the other string to be checked
 *
 * Return: 1 if identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*(s2) == '*')
	{
		return (1);
	}
	else if (*(s1) == '\0' && *(s2) == '\0')
	{
		return (1);
	}
	else if (*(s1) == *(s2) || *(s2) == '*')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
