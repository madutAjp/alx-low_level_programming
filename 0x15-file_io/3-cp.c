#include "main.h"
#include <stdio.h>

/**
 * error_files - Check if a file is opened and hanlde errors
 * @fd_from:initial file to copy from and to check
 * @fd_to:file to copy to
 */
void error_files(int fd_from, int fd_to, char *argv[])
{
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
		}
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't WRITE from file %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - Copy the content from one file to another
 * @argc: number of arguments
 * @argv: array of arguments including source
 * Return: 0 on success, or exit with an error code
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t nchar, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	while ((nchar = read(file_from, buf, 1024)) > 0)
	{
		nwr = write(file_to, buf, nchar);
		if (nwr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n",  argv[2]);
			exit(99);
		}
	}
	if (nchar == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

