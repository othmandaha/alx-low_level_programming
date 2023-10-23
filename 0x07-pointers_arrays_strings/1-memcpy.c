#include "main.h"

/**
 * _memcpy - copying the value of src to dest
 * @dest: the destination of the copy
 * @src: the source from which to copy
 * @n: the size of the memory to copy
 *
 * Return: it returns a pointer to the first memory adress
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
