#include "main.h"
#include <string.h>

/**
 * _atoi - convert string to integer
 * @s: the string to be converted
 *
 * Return: the converted string
 */

int _atoi(char *s)
{
	int length = strlen(s);
	int i;
	int result = 0;
	int sign = 1;

	for (i = 0; i <= length; i++)
	{
		if (s[i] == '-')
			sign = -1;
		else if (s[i] >= '0' && s[i] <= '9')
			result = result * 10 (s[i] - '0');

	}
	return (result * sign);	
}
