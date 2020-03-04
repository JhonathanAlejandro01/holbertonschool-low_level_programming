#include "holberton.h"
#include <stdlib.h>
/**
 * *str_concat - check the code for Holberton School students.
 *@s1: is pointer (betty).
 *@s2: is poniter (holberton).
 * Return: Betty Holberton.
 */
char *str_concat(char *s1, char *s2)
{
	int a;
	int b;
	int c;
	int d;
	int f;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
	}
	p = malloc((a + b + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	f = 0;
	for (c = 0; s1[c] != '\0'; c++, f++)
	{
		p[f] = s1[c];
	}
	for (d = 0; s2[d] != '\0'; d++, f++)
	{
		p[f] = s2[d];
	}
	p[f] = '\0';
	return (p);
}
