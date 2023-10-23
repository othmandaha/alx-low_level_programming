#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	char *p;

	while (*(haystack + i) <= '\0')
	{
		int j = 0;

		if (*(haystack + i) == *(needle + j))
		{
			p = haystack + i;
			while (*(haystack + i) == *(needle + j))
			{
				i++;
				j++;
			}

			if (*(needle + j) == '\0')
			{
				return (p);
			}
			else
			{
				i = p - haystack + i;
			}
		}
		else
		{
			i++;
		}
	}
	return (0);
}
