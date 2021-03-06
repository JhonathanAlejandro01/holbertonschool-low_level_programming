#include "holberton.h"
/**
 * create_file - function that creates a file.
 *@filename: is the name of the file to create.
 *@text_content: content of file go to creat.
 * Return: 1 on success or -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wf;
	ssize_t i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[i])
		{
			i++;
		}

		wf = write(fd, text_content, i);
		if (wf == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
