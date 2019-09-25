#include <stdio.h>
/**
 * main - prints fibonnaci sequence
 *
 * Return: Always 0
 */
int main(void)
{
	long int a, b, c, d;

	a = 1;
	b = 0;
	for (d = 0; d <= 49; d++)
	{
		c = a + b;
		printf("%ld", c);
		b = a;
		a = c;
		if (d < 49)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
