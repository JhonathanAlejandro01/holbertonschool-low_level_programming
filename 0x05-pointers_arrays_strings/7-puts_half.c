#include "holberton.h"
/**
 * puts_half - check the code for Holberton School students.
 * @str: is the parameter.
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i, x, j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	if (i % 2 != 0)
	{
		x = (i + 1) / 2;
	}
	else
	{
		x = i / 2;
	}
	for (j = x; j < i; j++)
	{

		_putchar(str[j]);
	}
	_putchar('\n');
}
