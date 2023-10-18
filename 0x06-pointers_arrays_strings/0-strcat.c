#include "main.h"
#include "string.h"

/**
 * _strcat - concatenate src to dest
 * @dest: the final concatenated string
 * @src: the source from where to take the string to concatenate from
 * Return: returns 'dest' the result of concatenation
 */

char *_strcat(char *dest, char *src)
{
	int d = strlen(dest);
	int s = strlen(src);
	int i = 0;

	while (i <= s)
	{
		dest[d] = src[i];
		i++;
		d++;
	}

	return (dest);

}
