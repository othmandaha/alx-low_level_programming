#include <stdio.h>

/**
 * main - check the code for
 *
 * Return: Always 0.
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
int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
