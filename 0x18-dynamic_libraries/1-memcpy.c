#include "holberton.h"
/**
 * *_memcpy - is a prototype.
 *@dest: is parameter.
 *@src: is paameter.
 *@n: is parameter.
 *Return: always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	c = 0;

	while (c < n)
	{
		dest[c] = src[c];
		c++;
	}
	return (dest);
}
