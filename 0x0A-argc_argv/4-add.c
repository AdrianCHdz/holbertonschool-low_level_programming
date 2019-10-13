#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Adittion between numbers passed to the program
 * @argc: the number of elemnts in the string
 * @argv: the string of the characters in the elements
 * Return: The result of the addition.
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
					printf("Error");
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
