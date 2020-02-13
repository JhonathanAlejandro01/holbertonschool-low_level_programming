#include "holberton.h"
/**
 * print_most_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{ int j;
	for (j = '0'; j <= '9'; j++)
	{
		if (j != '2' && j != '4')
			_putchar(j);
	}
	_putchar ('\n');
}
