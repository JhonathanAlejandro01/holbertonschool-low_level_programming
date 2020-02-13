#include "holberton.h"
/**
 * print_square - draws diagonal line.
 * @size: is parameter
 * Return: Always 0.
 */
void print_square(int size)
{
	int j;

	int h;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (h = 0; h < size; h++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
