#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * open_read_file - Opens a file in read mode and returns descriptor
 * @file_from:the name of the file to open
 * Return:the file descriptor of the opened file, or -1
 */
int open_read_file(char *file_from)
{
	return (open(file_from, O_RDONLY));
}
/**
 * open_write_file - Opens a file in write mode and returns decriptor
 * @file_to:the name of the file to open
 * Return:the file descriptor of the opened file, or -1
 */
int open_write_file(char *file_to)
{
	return (open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664));
}
/**
 * copy_file - copies the content from one file to another
 * @fd_from:the file descriptor of the source file
 * @fd_to:the file descriptor of destination file
 * Return:0 when success, or -1 if an error occurred
 */
int copy_file(int fd_from, int fd_to)
{
	ssize_t dutbytes;
	char buffer[BUFFER_SIZE];

	while ((dutbytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(fd_to, buffer, dutbytes) != dutbytes)
		{
			dprintf(2, "Error writting to the destination file\n");
			exit(99);
		}
	}
	if (dutbytes == -1)
	{
		dprintf(2, "Error reading from the source file\n");
		exit(98);
	}
	return (0);
}
/**
 * main - Copy the content from one file to another
 * @argc: number of arguments
 * @argv: array of arguments including source
 * Return: 0 on success, or exit with an error code
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char *file_from;
	char *file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fd_from = open_read_file(file_from);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open_write_file(file_to);
	if (fd_to == -1)
	{
		close(fd_from);
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file_to);
		exit(99);
	}
	if (copy_file(fd_from, fd_to) == -1)
	{
		close(fd_from);
		close(fd_to);
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", file_from);
		exit(99);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd_from);
		exit(100);
	}
	return (0);
}
