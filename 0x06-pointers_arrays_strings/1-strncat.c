#include "main.h"
#include <string.h>

/**
 * _strncat - concatenating two string but use n bytes from src
 * @dest: destination of the concatenation
 * @src: the source from which to derive the string to concatenate
 * @n: the numbers of bytes to take from src
 * Return: the full concatenated string (dest)
 */


char *_strncat(char *dest, char *src, int n)
{
	int d = strlen(dest);
	int s = strlen(src);
	int i;

	while (i < n && i < s)
	{
		dest[d] = src[s];
		i++;
		d++;
	}

	return (dest);
}
