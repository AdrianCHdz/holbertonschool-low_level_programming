#include "holberton.h"
#include <stdio.h>
/**
 * main - Use the arguments that will be passed in the program
 * @argc: counter
 * @argv: the vector of the argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", (argc - 1));
	return (0);
}
