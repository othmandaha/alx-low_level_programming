#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */


char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[0] <= 'z' && s[0] >= 'a')
		{
			s[i] = s[i] - 32;
		}
		if (s[i] == 32 || s[i] == 9 || s[i] == 10 || s[i] == 44 ||
			s[i] == 46 || s[i] == 33 || s[i] == 63 ||
			s[i] == 34 || s[i] == 40 || s[i] == 41 ||
			s[i] == 123 ||  s[i] == 125 || s[i] == 59)
		{
			if (s[i + 1] != '\0' && s[i + 1] <= 'z' && s[i + 1] >= 'a')
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
		i++;
	}
	return (s);
}
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
