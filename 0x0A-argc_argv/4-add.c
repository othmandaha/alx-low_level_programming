#include <stdio.h>
#include <stdlib.h>


/**
 * _isdigit - checks if the string has only digits
 * @str: string to be checked
 *
 * Return: returns 0 if string has only numbers, 1 otherwise
 */

int _isdigit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (1);
		}
		str++;
	}
	return (0);
}

/**
 * main - the starting point of the program
 * @argc: argument count
 * @argv: arguments
 *
 * Return: always 0 means success.
 */

int main(int argc, char *argv[])
{

	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		while (i < argc)
		{
			if (_isdigit(argv[i]) == 1)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum = sum + atoi(argv[i]);
			}
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
