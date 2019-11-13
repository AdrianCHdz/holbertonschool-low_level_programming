#include <stdio.h>
#include "holberton.h"
int _strlen(char *string)
{
	return((*string != '\0') ? 1 + _strlen(string + 1) : 0);
}
int create_file(const char *filename, char *text_content)
{
	int wr_file = 0;
	int a = 0;
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	a = _strlen(text_content);
	wr_file = write(fd, text_content, a);
	if (wr_file == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
