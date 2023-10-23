#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	char *p;

	while (*(haystack + i) != '\0')
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

			if (*(needle + i) == '\0')
			{
				return (p);
			}
			else
			{
				i = p - haystack + 1;
			}
			
		}
		else 
		{
			i++;
		}
	}
	return (0);
}
int main(void)
{
    char *s = "hewollo, world s";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
