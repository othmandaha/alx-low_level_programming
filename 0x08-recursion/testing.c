#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */


void _puts_recursion(char *s)
{
	if (*(s) != '\0')
	{
	_puts_recursion(s + 1);
	putchar(*s);
	}


}

int main(void)
{
    _puts_recursion("\nfuck you all I hate you");
    return (0);
}
