#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: the string to be examined
 * @c: the charater to be located
 * Return: returns the adress of the first occurence of the character
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}

	return (NULL);
}
