#include <stdio.h>

/**
 * main - the staring point of our code
 * @argc: arguments count
 * @argv: arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
