#include "main.h"

/**
 * string_toupper - change lower case to upper case
 * @s: string to be converted
 * Return: return the result
 */

char *string_toupper(char *s)
{
        int i = 0;
        int tmp;

        while (s[i] != '\0')
        {
                if (s[i] <= 'z' && s[i] >= 'a')
                {
                        s[i] -= 32;
                }
                i++;

        }
	return (s);

}

