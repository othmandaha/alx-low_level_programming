#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenat two strings
 * @s1: first string
 * @s2: second string
 * @n: number of char to take from s2
 *
 * Return: result if success, 0 otherwise
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_size;
	unsigned int s2_size;
	unsigned int size;
	unsigned int i;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_size = strlen(s1);
	s2_size = strlen(s2);

	if (s2_size < n)
		n = s2_size;

	size = s1_size + n;

	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (0);

	i = 0;
	while (i < s1_size)
	{
		str[i] = s1[i];
	i++;
	}
	i = 0;
	while (i <= n)
	{
		str[i + s1_size] = s2[i];
	i++;
	}
	return (str);

}

