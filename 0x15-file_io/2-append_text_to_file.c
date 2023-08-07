#include "main.h"
/**
 * length_of_string - length
 * @string: string
 * Return: length
 */
int length_of_string(char *string)
{
	int l = 0;

	for (; string[l] != '\0'; l++)
		;
	return (l);
}
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename:  name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1, -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t writing;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	writing = write(fd, text_content, length_of_string(text_content));
	if (writing == -1 || (ssize_t)writing != length_of_string(text_content))
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
}
