#include "holberton.h"
/**
 * print_numbers - prints digits.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{ int j;
	for (j = '0'; j < '9'; j++)
	{
		_putchar(j + '0');
	}
	_putchar ('\n');
}
