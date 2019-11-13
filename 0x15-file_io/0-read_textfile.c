#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * read_textfile - Reads a text file and prints to the POSIX standard output
 * @filename: The name of the file to be valued.
 * @letters: The number of letters to read and print
 * Return: The  number of characters it could read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int rd_file;
	int wrt_file;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	rd_file = read(fd, buffer, letters);
	if (rd_file == -1)
	{
		free(buffer);
		return (0);
	}
	wrt_file = write(STDOUT_FILENO, buffer, rd_file);
	if (wrt_file == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (wrt_file);
}
