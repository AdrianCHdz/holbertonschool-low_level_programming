#include <stdio.h>
/**
 * main - print only even fibonacci
 *
 * Return: Always 0
 */
int main(void)
{
	long int a, b, c, d, e;

	b = 1;
	c = 0;
	d = 0;
	for (e = 0; e <= 49; e++)
	{
		a = b + c;
		c = b;
		b = a;
		if (a % 2 == 0 && a < 4000000)
		{
			d = d + a;
		}
	}
	printf("%ld", d);
	printf("\n");
	return (0);
}
