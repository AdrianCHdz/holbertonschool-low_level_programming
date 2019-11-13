#include <stdio.h>
#include "holberton.h"
int create_file(const char *filename, char *text_content)
{
	int wr_file = 0;
	int a = 0;
	int fg;

	if (filename == NULL)
		return (-1);
	fg = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fg == -1)
		return (-1);
	while (text_content)
	{
		text_content++;
		a++;
	}
	printf("%d", a);
	wr_file = write(fg, text_content, a);
	if (wr_file == -1)
	{
		return (-1);
	}
	close(fg);
	return (1);
}
