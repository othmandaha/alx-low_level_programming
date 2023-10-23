#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int length = 0;
	int matchfound = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		int j = 0;

		matchfound = 0;

		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				length++;
				matchfound = 1;
				break;
			}
		}
		if (!matchfound)
		{
			return (length);
		}
	}
}
