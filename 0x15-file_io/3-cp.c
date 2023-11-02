#include "main.h"
#define BUFFER_SIZE 1024

/**
 * error_98 - handles error code 98
 * @fd: file descriptor
 * @buffer: buffer to free
 * @file: file name
 */
void error_98(int fd, char *buffer, char *file)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		free(buffer);
		exit(98);
	}
}

/**
 * error_99 - handles error code 99
 * @fd: file descriptor
 * @buffer: buffer to free
 * @file: file name
 */
void error_99(int fd, char *buffer, char *file)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		free(buffer);
		exit(99);
	}
}

/**
 * error_100 - handles error code 100
 * @fd: file descriptor
 * @buffer: buffer to free
 */
void error_100(int fd, char *buffer)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor\n");
		free(buffer);
		exit(100);
	}
}

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: pointer to an array of arguments
 * Return: 0 on success, or exit with an error code
 */
int main(int argc, char **argv)
{
	int dut, iren, ley;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);

	}
	buffer = malloc(sizeof(char) * BUFFER_SIZE);
	if (!buffer)
	{
		return (0);
	}
	iren = open(argv[1], O_RDONLY);
	error_98(iren, buffer, argv[1]);
	dut = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	error_99(dut, buffer, argv[2]);
	do {
		ley = read(iren, buffer, BUFFER_SIZE);
		if (ley == 0)
			break;
		error_98(ley, buffer, argv[1]);
		iren = write(dut, buffer, ley);
		error_99(iren, buffer, argv[2]);
	} while (ley >= BUFFER_SIZE);
	ley = close(dut);
	error_100(ley, buffer);
	ley = close(iren);
	error_100(ley, buffer);
	free(buffer);
	return (0);
}
