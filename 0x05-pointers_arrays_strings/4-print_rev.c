#include "holberton.h"

/**
 * print_rev - check the code for Holberton School students.
 * @s: is variable
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int z;
	int p;


	for (z = 0; s[z] != '\0'; z++)
	{}
	for (p = z - 1; p >= 0; p--)
	{
		_putchar(s[p]);
	}
	_putchar('\n');
}
