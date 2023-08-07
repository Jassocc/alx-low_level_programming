#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @letters: the number of letters it should read and print
 * @filename: file to read
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t reding, writing;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}
	reding = read(fd, buf, letters);
	if (reding == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	writing = write(STDOUT_FILENO, buf, reding);
	if (writing == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	close(fd);
	return (reding);
}
