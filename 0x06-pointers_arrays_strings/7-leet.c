#include <stdio.h>
#include "holberton.h"
/**
 * *leet - is a fuction.
 *@a: is a pointer.
 * Return: the variable
 */
char *leet(char *a)
{
	int i;
	int i2;
	char c[] = "aeotl";
	char d[] = "AEOTL";
	char e[] = "43071";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (i2 = 0; c[i2] != '\0'; i2++)
		{
			if (a[i] == c[i2] || a[i] == d[i2])
			{
				a[i] = e[i2];
			}
		}
	}
	return (a);
}
