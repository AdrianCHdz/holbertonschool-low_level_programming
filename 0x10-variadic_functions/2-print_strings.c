#include "variadic_functions.h"
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
