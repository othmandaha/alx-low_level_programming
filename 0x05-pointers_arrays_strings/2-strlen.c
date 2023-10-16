#include "main.h"

/**
 * _strlen - function for calculating the length of a string
 * @s: the string to be calculated
 *
 * Return: the lenght of the provided string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;

	}
	return (i);
}
