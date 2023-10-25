#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*(s) == '\0')
	{
		putchar(10);
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);

}

int main(void)
{
    _puts_recursion("fuck you all I hate you");
    return (0);
}
