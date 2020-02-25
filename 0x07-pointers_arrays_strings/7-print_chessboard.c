#include "holberton.h"
/**
 * print_chessboard - prototype.
 * @a: is the parameter.
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	x = 0;

	while (x < 8)
	{
		y = 0;
		while (y < 8)
		{
			_putchar(a[x][y]);
			if (y == 7)
			{
				_putchar('\n');
			}
			y++;
		}
		x++;
	}
}
