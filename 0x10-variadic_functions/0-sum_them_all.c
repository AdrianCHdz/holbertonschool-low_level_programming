#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum all the undeterminated parametes
 * @n: What will define how many numbers will be sumed
 *
 * Return: the result of the total sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	int sum = 0;
	unsigned int i = 1;

	va_start(add, n);
	while (i <= n && i != 0)
	{
		sum += va_arg(add, int);
		i++;
	}
	va_end(add);
	return (sum);
}
