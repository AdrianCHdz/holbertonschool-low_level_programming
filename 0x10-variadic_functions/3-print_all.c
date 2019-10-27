#include "variadic_functions.h"
/**
 * frmatchar - prints a char.
 * @all: Name of the list.
 */
void frmatchar(va_list all)
{
	printf("%c", va_arg(all, int));
}
/**
 * frmatint - prints a integer.
 * @all: Name of the list.
 */
void frmatint(va_list all)
{
	printf("%d", va_arg(all, int));
}
/**
 * frmatstr - prints a string.
 * @all: Name of the list.
 */
void frmatstr(va_list all)
{
	char *string;

	string = va_arg(all, char *);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}
/**
 * frmatflt - prints a float.
 * @all: Name of the list.
 */
void frmatflt(va_list all)
{
	printf("%f", va_arg(all, double));
}
/**
 * print_all - prints whats specified depending on the format.
 * @format: The diferent types of format that will be printed.
 */
void print_all(const char * const format, ...)
{
	char *sep;
	va_list all;
	get_f fmt[] = {
		{"c", frmatchar},
		{"i", frmatint},
		{"s", frmatstr},
		{"f", frmatflt},
		{NULL, NULL}
	};

	int i = 0;
	int j;

	va_start(all, format);
	sep = "";
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if ((*fmt[j].frmt) == format[i])
			{
				printf("%s", sep);
				(*fmt[j].fs)(all);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(all);
}
