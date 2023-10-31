#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 *
 * Return: the concatenated string in success
 * otherwise it returns 0
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int s1_size;
	unsigned int s2_size;
	unsigned int size;
	unsigned int i;
	char *str;

	s1_size = strlen(s1);
	s2_size = strlen(s2);
	size = s1_size + s2_size;
	str = malloc((size + 1) * sizeof(char));
	i = 0;
	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	while (i < s1_size)
	{
		str[i] = s1[i];
	i++;
	}
	i = 0;
	while (i <= size)
	{
		str[i + s1_size + 1] = s2[i];
	i++;
	}
	if (str == NULL)
		return (0);
	else
		return (str);


}
