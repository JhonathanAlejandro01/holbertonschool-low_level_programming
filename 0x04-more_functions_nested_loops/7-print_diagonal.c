#include "holberton.h"
/**
 * print_diagonal - draws diagonal line.
 * @n: is parameter
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int j;

	int h;

	if (n > 0){
		for (j = 0; j < n; j++)
		{
			for(h = 0; h < j; h++)
			{
				_putchar(' ');
			}

			_putchar(92);
			_putchar('\n');
		}
	}
	else{
		_putchar ('\n');
	}
}
