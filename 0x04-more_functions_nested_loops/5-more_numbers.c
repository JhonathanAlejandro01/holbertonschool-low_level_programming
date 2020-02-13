#include "holberton.h"
/**
 * more_numbers - prints digits.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{ int j;

	int h;

	for (h = 0; h < 10; h++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar(j / 10 + '0');
			}
			_putchar (j % 10 + '0');
		}
		_putchar ('\n');
	}

}
