#include "variadic_functions.h"
/**
 * print_strings - print the string given
 *
 * @separator: what will be printed to separate each of the parameters
 * @n: the number of characters that will be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 1;
	va_list string;
	char *str;

	va_start(string, n);
	if (n != 0)
	{
		while (i <= n)
		{
			str = (va_arg(string, char *));
			if (str != NULL)
			{
				printf("%s", str);
			}
			else if (str == NULL)
			{
				printf("(nil)");
			}
			if (i != n && separator != NULL)
			{
				printf("%s", separator);
			}
			i++;
		}
	}
	printf("\n");
	va_end(string);
}
