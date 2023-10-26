#include <stdio.h>
#include <string.h>

int is_palindrome(char *s)
{
	int half = strlen(s) / 2;
	if (*(s) != *(s + half + 1))
		return (1);
	else if (*(s) == *(s + half + 1) && *(s) != *(s + half))
	{
		return (0);
	}
	else
		return (is_palindrome(s + 1));
	       	
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("test");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
}    
