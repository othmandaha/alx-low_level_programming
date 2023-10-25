#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int n;

	if (*(s) != '\0')
	{
		n = _strlen_recursion(s + 1);
		return (n + 1);
	}
	
}
int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}
