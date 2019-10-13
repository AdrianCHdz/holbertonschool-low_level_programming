#include "holberton.h"
#include <stdio.h>
#include <stdlib.h> /** atoi function */
#include <ctype.h>
/**
 * main - Use the arguments that will be passed in the program
 * @argc: counter
 * @argv: the vector of the argument
 * Return: Always 0 if the vector is the name of the program.
 * or if no number is passed to the program.
 * 1 if the argument passed to the program is a letter.
 */
int main(int argc, char *argv[])
{
	int a, b, add = 0;

	if (argc > 0)
	{
		for (a = 1; a < argc; a++)
		{
			for (b = 0; argv[a][b] != '\0'; b++)
			{
				if (!(isdigit(argv[a][b])))
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[a]);
		}
		printf("%d\n", add);
	}
	else
	{
		printf("0");
		return (0);
	}
}
