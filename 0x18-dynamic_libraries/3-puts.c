#include "holberton.h"

/**
 * _puts - check the code for Holberton School students.
 * @str: is variable
 * Return: Always 0.
 */
void _puts(char *str)
{
	int y;

	for (y = 0; str[y] != '\0'; y++)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}
