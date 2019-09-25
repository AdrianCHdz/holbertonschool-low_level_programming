#include <stdio.h>
/**
 * main - sum of multibples of 3 and 5
 *
 * Return: Always 0 if succesful
 */
int main(void)
{
	long int a;
	long int mult;


	mult = 0;
	for (a = 0; a <= 1024; a++)
	{
		if ((a % 5 == 0 || a % 3 == 0) && a < 1024)
		{
			mult = mult + a;
		}
	}
	printf("%ld", mult);
	putchar('\n');
	return (0);
}
