#include "main.h"

/**
 * _isupper - checking wether a char is uppercase or not
 * @c: the char to be checked
 * Return: if 1 char is uppercase. If 0 char is lowercase
 */

int _isupper(int c)
{
	int a;

	if (c >= 'a' && c <= 'z')
	{
		a = 0;
	}
	else if (c >= 'A' && c < 'Z')
	{
		a = 1;
	}
	return (a);
}
