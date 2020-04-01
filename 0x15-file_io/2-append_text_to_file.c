#include "holberton.h"
/**
 * append_text_to_file - that appends text at the end of a file.
 *@filename: is name of file.
 *@text_content: cant of characters.
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wf;
	ssize_t i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
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
