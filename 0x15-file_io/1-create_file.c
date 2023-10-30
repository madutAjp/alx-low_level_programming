#include "main.h"
#include <string.h>

/**
 * create_file - Creates a file with specified permissions & writes content
 * @filename:the name of the file to create or truncate
 * @text_content:the text content to write to file (NULL for an empty file)
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t dutbytes_written;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		dutbytes_written = write(fd, text_content, strlen(text_content));
		if (dutbytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
