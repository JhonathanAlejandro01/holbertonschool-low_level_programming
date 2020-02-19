#include "holberton.h"

/**
 * rev_string - check the code for Holberton School students.
 * @s: is parameter
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int x, q;
	int y, a;

	for (y = 0; s[y] != '\0'; y++)
	{
		a = y;
	}
	for (x = 0; x < y / 2; x++)
	{
		q = s[x];
		s[x] = s[a];
		s[a] = q;
		a--;

	}

}
