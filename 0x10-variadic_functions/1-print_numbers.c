#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed separator
 *@separator: is a comma
 *@n: is a quantity arguments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* crerat the list */
	va_list list;
	/* the variable comparison have to be equal */
	unsigned int i = 0;
	int total = 0;

	/* initialize the list */
	va_start(list, n);
	/* ACCESS THE ARGUMENTS OF THE LIST */
	while (i < n)
	{
		total = va_arg(list, int);
		i++;
		/* prints the numbers */
		printf("%d", total);

		if (i < n && separator != NULL)
		{
			/* print the comma */
			printf("%s", separator);
		}
	}
		printf("\n");
	va_end(list);
}
