#include "holberton.h"
#include <stdio.h>
#include <stdlib.h> /** atoi func library */
/**
 * main - Use the arguments that will be passed in the program
 * @argc: counter
 * @argv: the vector of the argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argc;

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
