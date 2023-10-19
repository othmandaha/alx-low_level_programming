#include "main.h"

/**
 * rot13 - encryting a string using the rot13 cypher
 * @s: the string to be encrypted
 * Return: the encrypted string
 */

char *rot13(char *s)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (j < 53)
		{
			if (s[i] == alpha[j])
			{
				s[i] = rot[j];
				break;
			}
			j++;
		}
	i++;
	}
	return (s);
}
