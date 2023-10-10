#include "main.h"

/**
 * _isalpha - checking wheter the char is an alphabet
 *
 * @c: the character being checked
 *
 * Return: If 1, c is a letter. If 0, c is not a ltter.
 */

int _isalpha(int c)
{
	int v;

	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
	{
		v = 1;
	}
	else
	{
		v = 0;
	}
	return (v);
}
