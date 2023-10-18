#include <stdio.h>
#include <string.h>

int _strcmp(char *s1, char *s2);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[] = "World!   ";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int n;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if ((int)s1[i] == (int)s2[i])
		{
			i++;
			n = 0;
		}
		else
		{
			n = (int)s1[i] - (int)s2[i];
			break;
		}

	}

	return (n);
}
