#include "main.h"

/**
 * leet - modify spelling of some char to numbers
 * @s: the string to be modified
 * Return: it gives the modified string
 */

char *leet(char *s)
{
	char upper[] = "AEOTL";
	char lower[] = "aeotl";
	char leet[] = "43071";
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		while (j < 5)
		{
			if (s[i] == upper[j] || s[i] == lower[j])
			{
				s[i] = leet[j];
			}
		j++;
		}
		j = 0;
		i++;
	}
	return (s);
}

