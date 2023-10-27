#include <stdio.h>
#include <stdlib.h>

/**
 * main - the starting point of our code
 * @argc: arguments count
 * @argv: arguments
 *
 * Return: 0 if success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int c = 0;
	int deno[] = {25, 10, 5, 2, 1};
	int i = 0;
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	if (n <= 0)
	{
		printf("0\n");
	}

	else
	{
		for (i = 0; i < 5; i++)
		{
			if (n >= deno[i])
			{
				c += n / deno[i];
				n = n % deno[i];
			}
		}
	}
	printf("%d\n", c);
	return (0);
}
