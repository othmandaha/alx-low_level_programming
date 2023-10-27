#include <stdio.h>
#include <stdlib.h>

/**
 * main - the starting point of the program
 * @argc: argument count
 * @argv: arguments
 *
 * Return: always 0 means success.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	}
	return (0);
}
