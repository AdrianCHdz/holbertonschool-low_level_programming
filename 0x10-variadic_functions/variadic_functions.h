#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * struct frmtsp - structure for comparision and function call
 * @frmt: The type of format to be printed.
 * @fs: The function to be called.
 */
typedef struct frmtsp
{
	char *frmt;
	void (*fs)(va_list all);
} get_f;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
