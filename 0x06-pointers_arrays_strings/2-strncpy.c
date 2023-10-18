#include "main.h"

/**
 * _strncpy - copying function
 * @dest: destincation of to past in
 * @src: string to be copied
 * @n: number of character to be copied
 * Return: return the copied test
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

