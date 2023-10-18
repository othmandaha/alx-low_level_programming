#include "main.h"

/**
 * _strcmp - comparing two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: positive or negative means the two strings are different
 * 0 means the two strings are identical
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int n;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if ((int)s1[i] == (int)s2[i])
		{
			i++;
			n = 0;
		}
		else
		{
			n = (int)s1[i] - (int)s2[i];
			break;
		}

	}

	return (n);
}
