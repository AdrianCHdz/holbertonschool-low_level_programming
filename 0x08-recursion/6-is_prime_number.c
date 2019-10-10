#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int prime(int n, int a)
{
	if ((n % a == 0 && n != a) || n <= 1)
		{
		return (0);
	}
	else if (n == a)
	{
		return (1);
	}
	return (prime(n, a + 1));
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}
