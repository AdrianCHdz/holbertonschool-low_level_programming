#include "holberton.h"

/**
 * print_last_digit - print the last digit of each number
 *@n: the value that from which the absolute value will be found
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int lst;

	lst = (n % 10);
	if (lst >= 0)
	{
		_putchar(lst + '0');
	}
	else
	{
		lst = lst * -1;
		_putchar(lst + '0');
	}
	return (lst);

}
