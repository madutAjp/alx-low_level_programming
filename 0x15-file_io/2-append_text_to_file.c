#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename:the name of the file to which the text should be appended
 * @text_content: The text content to append
 * Return:1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t dutbytes_written;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	dutbytes_written = write(fd, text_content, strlen(text_content));
	close(fd);
	if (dutbytes_written == -1)
	{
		return (-1);
	}
	return (1);
}
