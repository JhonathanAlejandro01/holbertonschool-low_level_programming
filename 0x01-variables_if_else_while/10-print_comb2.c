#include <stdio.h>

/**
 * main - possible combinations
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	int y;

	for (x = 48; x < 58; x++)
	{
		for (y = 48; y < 58; y++)
		{
			putchar(x);
			putchar(y);
			if (x == 57 && y == 57)
			{
				continue;
			}
			putchar(44);
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
