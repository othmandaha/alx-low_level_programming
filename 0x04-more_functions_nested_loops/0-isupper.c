#include "main.h"

/**
 * _isupper - checking wether a char is uppercase or not
 * @c: the char to be checked
 * Return: if 1 char is uppercase. If 0 char is lowercase
 */

int _isupper(int c)
{
	int a;

	if (c >= 97 && c <= 122)
	{
		a = 0;
	}
	else if (c >= 65 && c <= 90)
	{
		a = 1;
	}
	return (a);
}
