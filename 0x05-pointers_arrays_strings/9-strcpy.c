#include "main.h"
#include <string.h>

/**
 * _strcpy - a function for copying a string
 * @dest: the array to hold the copy
 * @src: the string to be copied
 */

char *_strcpy(char *dest, char *src)
{
	int length = strlen(src);
	int i;

	for(i = 0; i <= length; i++)
	{
		dest[i] = *(src + i);
		i++;
	}
	return (*src);
}
