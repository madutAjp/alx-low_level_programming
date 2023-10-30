#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

/**
 * read_textfile - reads a text file and prints it to POSIX
 * @filename:name of file to be printed
 * @letters:number of letters it could read and print
 * Return:actual number of letters otherwise 0 if file can't opened
 * and filename is NULL return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t dutbytes_read;
	ssize_t dutbytes_written;
	FILE *file;

	if (filename == NULL)
	{
		return (0);
	}
	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}
	buffer = (char *)malloc(letters);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	dutbytes_read = fread(buffer, 1, letters, file);
	if (dutbytes_read < 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	dutbytes_written = write(STDOUT_FILENO, buffer, dutbytes_read);
	if (dutbytes_written != dutbytes_read)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	fclose(file);
	free(buffer);
	return (dutbytes_written);
}
