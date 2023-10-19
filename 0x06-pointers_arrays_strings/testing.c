#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
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
int main(void)
{
    char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
    char *p;

    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    return (0);
}
