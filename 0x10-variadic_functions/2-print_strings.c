#include "variadic_function.h"
/**
 * print_strings - check the code for Holberton School students.
 *@n: is a counter
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
/* is a counter */
	unsigned int i;
	char *p;
	va_list list;
	va_start(list, n);
	for(i = 0; i < n; i++)
	{
		p = va_arg(list, char*);
		if(p != NULL)
		{
			printf("%s", p);
		}
		else
		{
			printf("(nil)");
		}
		if(separator != NULL && i != (n - 1))
		{
			printf("%S", separator);
		}
	}
	va_end(list);
	printf('\n');
}
