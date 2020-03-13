#ifndef _VARIADIC_
#define _VARIADIC_
/* the standar libraries */
#include <stdio.h>
#include <stdarg.h>
/* the prototype */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
