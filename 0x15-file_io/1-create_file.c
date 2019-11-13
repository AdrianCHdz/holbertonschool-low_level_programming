#include <stdio.h>
#include "holberton.h"
/**
 * _strlen - finds the lenght of the string
 * @string: The string to be valued.
 * Return: The lenght of the string.
 */
int _strlen(char *string)
{
	return ((*string != '\0') ? 1 + _strlen(string + 1) : 0);
}
/**
 * create_file - writes the content of a file
 * @filename: The name of the file that will be created
 * @text_content: The content of the text created
 * Return: 1 in success
 */
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
	if (text_content == NULL)
	{
		text_content = "";
	}
	a = _strlen(text_content);
	wr_file = write(fd, text_content, a);
	if (wr_file == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
