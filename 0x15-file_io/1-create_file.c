#include "main.h"
#include <stdlib.h>

/**
 * create_file - creates a new file
 * @filename: the name of the file to be created.
 * @text_content: the content to be written in the file.
 *
 * Return: return 1 if succeful, -1 otherwise.
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC | 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
