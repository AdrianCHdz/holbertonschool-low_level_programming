#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print array values
 * @a: the array that will be taken into accout
 * @n: the value determining the array
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d", a[m]);
		if (m != 4)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
