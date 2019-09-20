#include <stdio.h>
/**
 * main - alphABET
 *
 * Return: Always 0
 */
int main(void)
{
	char al;
	char AL;

	for (al = 'a'; al <= 'z'; al++)
		putchar(al);
	for (AL = 'A'; AL <= 'Z'; AL++)
		putchar(AL);
	putchar ('\n');
	return (0);
}
