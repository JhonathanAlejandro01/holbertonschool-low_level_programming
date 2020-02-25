#include "holberton.h"
/**
 * *_memset - is a prototype.
 *@s: is parameter.
 *@b: is paameter.
 *@n: is parameter.
 *Return: always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}