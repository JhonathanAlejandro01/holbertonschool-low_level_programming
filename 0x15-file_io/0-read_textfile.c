#include "holberton.h"
/**
 * read_textfile - read a text and print in standard output.
 *@filename: is a name of the file.
 *@letters: is the number of letters it should read and print.
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *str;
	ssize_t read_file;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	str = malloc(sizeof(char) * letters);
	if (str == NULL)
	{
		return (0);
	}
	read_file = read(fd, str, letters);

	if (read_file == -1)
	{
		return (0);
	}
	read_file = write(STDOUT_FILENO, str, read_file);
	if (read_file == -1)
	{
		return (0);
	}
	free(str);
	close(fd);
	return (read_file);
}
