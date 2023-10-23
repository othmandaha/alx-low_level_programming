#include <stdio.h>

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
			}
			
		}
		if (!matchfound)
		{
			return (length);
		}	
	}
}
int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
