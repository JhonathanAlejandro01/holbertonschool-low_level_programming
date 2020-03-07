#include "holberton.h"
/**
 * *rot13 - is fuction.
 *@a: is a pointer.
 * Return: return the vairable.
 */

char *rot13(char *a)
{
	int i;
	int i2;
	char b[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (i2 = 0; b[i] != '\0'; i2++)
		{
			if (a[i] == b[i2])
			{
				a[i] == d[i2];
				break;
			}
		}
	}
	return (a);
}
