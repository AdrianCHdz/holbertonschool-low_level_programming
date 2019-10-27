#include "variadic_functions.h"
/**
 * print_numbers - prints the numbers and separates them
 * @separator: what will be separating the numbers.
 * @n: The variable determining the limit of numbers printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 1;
	va_list print;

	va_start(print, n);
	if (n != 0)
	{
		while (i <= n)
		{
			printf("%d", va_arg(print, int));
			if (i != n && separator != NULL)
			{
				printf("%s", separator);
			}
			i++;
		}
	}
	printf("\n");
	va_end(print);
}
