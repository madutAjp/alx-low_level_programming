#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - handle error and exit
 * @code: error code
 * @message: error message
 * @file: file name
 */
void error_exit(int code, const char *message, const char *file)
{
	dprintf(STDERR_FILENO, message, file);
	exit(code);
}

/**
 * copy_file - recursively copy the content from one file to another
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 */
void copy_file(int fd_from, int fd_to)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read;

	bytes_read = read(fd_from, buffer, BUFFER_SIZE);
	if (bytes_read == -1)
	{
		error_exit(98, "Error: Can't read from file %s\n", "source_file");
	}
	if (bytes_read > 0)
	{
		if (write(fd_to, buffer, bytes_read) != bytes_read)
		{
			error_exit(99, "Error: Can't write to %s\n", "destination_file");
		}
		copy_file(fd_from, fd_to);
	}
}
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, or exit with an error code
 */
int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;
	int fd_from, fd_to;

	if (argc != 3)
	{
		error_exit(97, "Usage: cp file_from file_to\n", "");
	}
	file_from = argv[1];
	file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		error_exit(98, "Error: Can't read from file %s\n", file_from);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit(99, "Error: Can't write to %s\n", file_to);
	}
	copy_file(fd_from, fd_to);
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		error_exit(100, "Error: Can't close fd %d\n",
				(fd_from == -1) ? file_to : file_from);
	}
	return (0);
}
