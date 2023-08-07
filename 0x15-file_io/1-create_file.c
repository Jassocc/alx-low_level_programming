#include "main.h"

/**
 * length_of_string - checks length
 * @string: string
 * Return: string
 */
int length_of_string(char *string)
{
	int l = 0;

	for (; string[l] != '\0'; l++)
		;
	return (l);
}
/**
 * create_file - create a file
 * @filename:  name of the file to create
 * @text_content: NULL terminated string to write
 * Return: 1, -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int writing;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	writing = write(fd, text_content, length_of_string(text_content));
	if (writing == -1 || writing != length_of_string(text_content))
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
}
