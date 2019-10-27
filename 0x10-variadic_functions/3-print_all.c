#include "variadic_functions.h"
void print_all(const char * const format, ...)
{
	void (*p)();
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
	while (format[i] != '\0')
	{
		j = 0;
		while (j < 3)
		{
			if (*fmt[j].frmt == format[i])
			{
				printf("%s", sep);
				p = fmt[j].fs;
				p(all);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(all);
}
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
