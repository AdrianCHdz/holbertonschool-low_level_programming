#include "variadic_functions.h"
void frmatchar(va_list all)
{
	printf("%c", va_arg(all, int));
}
void frmatint(va_list all)
{
	printf("%d", va_arg(all, int));
}
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
void frmatflt(va_list all)
{
	printf("%f", va_arg(all, double));
}

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
		while (fmt[j].frmt)
		{
			if (format[i] == *fmt[j].frmt)
			{
				printf("%s", sep);
				fmt[j].fs(all);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(all);
}
