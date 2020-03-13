#include "variadic_functions.h"
/**
 * sum_them_all - is the variadic Functions
 *@n: is the quantity of arguments
 * Retuns: a intergrer.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum = 0;
	/* the variable comparison have to be equal */
	unsigned int i;

	/*initialize the list*/
	va_start(list, n);
	if (n == 0)
	{
		return (0);
	}
	/* access the arguments of the list */
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	/* free memory reserved for list */
	va_end(list);
	return (sum);
}
