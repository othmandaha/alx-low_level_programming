#include <stdio.h>

/**
 * main - the starting point of the program
 * @argc: argument count
 * @argv: arguments
 *
 * Return: always 0 means success.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
