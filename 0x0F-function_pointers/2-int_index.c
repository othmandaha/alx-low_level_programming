#include "function_pointers.h"

/**
  * int_index - ...
  * @array: ...
  * @size: ...
  * @cmp: ...
  *
  * Return: ...
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]) != 0)
				{
					return (i);
				}
				else
					i++;
			}
		}
	}
	return (-1);
}
