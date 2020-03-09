#include "holberton.h"
/**
 *  *string_toupper - check the code for Holberton School students.
 *@a: is a variable.
 * Return: Always 0.
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = a[i] - 32;
	}
	return (a);

}
