#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
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
int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("ptr:%s", ptr);
    printf("str:%s", str);
    return (0);
}
