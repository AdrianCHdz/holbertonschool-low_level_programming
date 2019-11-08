#include "holberton.h"
#include <stdio.h>
/**
 * print_binary - converts a decimal into binary
 * @n: The number to convert
 */
void print_binary(unsigned long int n)
{
	if (n != 1 &&  n != 0)
		print_binary(n >> 1);
	putchar((n & 1) + '0');
}
