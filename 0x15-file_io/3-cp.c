#include "main.h"

/**
 * _exit_func - print error msges with exits
 * @err: num to exit or the fd
 * @st: etheir of the filenames
 * @fd: fd
 * Return: 0
 */
int _exit_func(int err, char *st, int fd)
{
	if (err == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	}
	else if (err == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", st);
	}
	else if (err == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", st);
	}
	else if (err == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	}
	else
	{
	return (0);
	}
	exit(err);
}
/**
 * main - copy one file to another
 * @argv: argv
 * @argc: argc
 * Return: 0/ error values
 */
int main(int argc, char *argv[])
{
	int f, fd, reding, writing;
	char *buff[1024];

	if (argc != 3)
	{
		_exit_func(97, NULL, 0);
	}
	fd = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd == -1)
	{
		_exit_func(99, argv[2], 0);
	}
	f = open(argv[1], O_RDONLY);
	if (f == -1)
	{
		_exit_func(98, argv[1], 0);
	}
	while ((reding = read(f, buff, 1024)) != 0)
	{
		if (reding == -1)
		{
			_exit_func(98, argv[1], 0);
		}
		writing = write(fd, buff, reding);
		if (writing == -1)
		{
			_exit_func(99, argv[2], 0);
		}
	}
	close(fd) == -1 ? (_exit_func(100, NULL, fd)) : close(fd);
	close(f) == -1 ? (_exit_func(100, NULL, f)) : close(f);
	return (0);
}
